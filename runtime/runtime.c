#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "runtime.h"

#include "node.h"
#include "stack.h"
#include "debug.h"



void CTR_hnf(field root)
{
    debug(LOW, "HNF constructor:");
    debug_expr(LOW, root);
    return;
}

Node* CTR_RET_hnf(Node* backup)
{
    debug(LOW, "HNF constructor:");
    debug_expr(LOW, RET);
    return backup;
}

void choice_hnf(field root)
{
    debug(LOW, "HNF choice:");
    debug_expr(LOW, root);
    choose(root);
}

Node* choice_RET_hnf(Node* backup)
{
    debug(LOW, "HNF RET choice:");
    debug_expr(LOW, RET);
    return choose_RET(backup);
}

field set_copy(field new, field node)
{
    memcpy(new.n, node.n, sizeof(Node));
    int arity = node.n->symbol->arity;
    if(arity > 3)
    {
        new.n->children[3].a = (field*)alloc((arity-3) * sizeof(field));
        memcpy(new.n->children[3].a, node.n->children[3].a, (arity-3)*sizeof(field));
    }
    return new;
}

field copy(field node)
{
    field new;
    new.n = (Node*)alloc(sizeof(Node));
    set_copy(new, node);
    return new;
}

void apply_hnf(field root)
{
    debug(LOW, "HNF apply: \n");
    debug_expr(LOW, root);
    field f = child_at(root,0);
    field child1 = root.n->children[1];
    field child2 = root.n->children[2];
    field* array = root.n->children[3].a;
    bool nondet = false;

    //This is the normal HNF loop
    while(f.n->missing <= 0)
    {
        nondet |= f.n->nondet;
        switch(TAG(f))
        {
            case FAIL_TAG:
                debug(HIGH, "apply FAIL\n");
                if(nondet)
                {
                    root.n->nondet = true;
                    stack_push(bt_stack, root, copy(root), false);
                }
                fail(root);
                return;
    
            case FUNCTION_TAG:
                debug(HIGH, "apply FUNCTION\n");
                // f must be fully applied, or we would have left the loop!
                HNF(f);
                break;
    
            case CHOICE_TAG:
                debug(HIGH, "apply CHOICE\n");
                choose(f);
                break;

            case FORWARD_TAG:
                debug(HIGH, "apply FORWARD\n");
                nondet |= f.n->nondet;
                f = child_at(f,0);
                break;
    
            case FREE_TAG:
                debug(HIGH, "apply FREE\n");
                // we can't actually apply a free variable
                // because we don't know what function to make it.
                fprintf(stderr, "Cannot apply free variable!\n");
                exit(1);
        } 
    }
    // Now we're gaurenteed to have a partial application
    debug(HIGH, "apply PART\n");

    nondet |= f.n->nondet;

    if(nondet)
    {
        root.n->nondet = true;
        stack_push(bt_stack, root, copy(root), false);
    }

    // number of arguments that we're applying
    int nargs = -root.n->missing;

    //number of arguments we have left
    int missing = f.n->missing;

    debug_expr(HIGH, f);
    debug(HIGH, "arity = %d\nmissing = %d\nnargs = %d\n", f.n->symbol->arity, missing, nargs);
    debug(HIGH, "missing > nargs %d\n", missing > nargs);

    if(nargs <= missing)
    {
        debug(HIGH, "under/fully applied (%d/%d)\n", f.n->missing, nargs);
        debug_expr(HIGH, f);
        //hold the old array of children.
        //we'll need to move this to a bigger array
        set_copy(root,f);
        for(int i = nargs; i > 2; i--)
        {
            debug_expr(HIGH, array[i-3]);
            set_child_at(root,missing-1, array[i-3]);
            missing--;
        }
        if(nargs > 1)
        {
            debug_expr(HIGH, child2);
            set_child_at(root,missing-1, child2);
            missing--;
        }

        debug_expr(HIGH, child1);
        set_child_at(root,missing-1, child1);
        missing--;

        root.n->missing = missing;

        debug(HIGH, "after applying\n");
        debug_expr(HIGH, root);
        if(missing == 0 && (TAG(f) == CHOICE_TAG || TAG(f) == FUNCTION_TAG))
        {
            debug(HIGH, "before HNF call\n");
            debug_expr(HIGH, root);
            HNF(root);
        }
        debug(HIGH, "leaving apply\n");
        debug_expr(HIGH, root);
    }
    else
    {
        debug(HIGH, "too many args (%d/%d)\n", f.n->missing, nargs);
        debug_expr(HIGH, f);
       
        field newf = copy(f);
        debug_expr(LOW, newf);

        while(missing > 0)
        {
            set_child_at(newf, missing-1, child_at_v(root, nargs));
            nargs--;
            missing--;
        }

        debug(HIGH, "fully applied child\n");
        debug_expr(HIGH, newf);
        newf.n->missing = 0;
        HNF(newf);
        debug(HIGH, "fully applied child reduced\n");
        debug_expr(HIGH, newf);
        child_at(root,0) = newf;
        root.n->missing = -nargs;
        debug(HIGH, "new apply node\n");
        debug_expr(HIGH, root);
        apply_hnf(root);
        debug(HIGH, "leaving apply\n");
        debug_expr(HIGH, root);
        return;
    }
}


Node* apply_RET_hnf(Node* backup)
{
    debug(LOW, "HNF apply: \n");
    debug_expr(LOW, RET);
    field f = child_at(RET,0);
    field child1 = RET.n->children[1];
    field child2 = RET.n->children[2];
    field* array = RET.n->children[3].a;
    bool nondet = false;

    // number of arguments that we're applying
    int nargs = -RET.n->missing;


    //This is the normal HNF loop
    while(f.n->missing <= 0)
    {
        nondet |= f.n->nondet;
        switch(TAG(f))
        {
            case FAIL_TAG:
                debug(HIGH, "apply FAIL\n");
                if(nondet)
                {
                    backup = make_restore(backup);
                    stack_push(bt_stack, (field)backup, copy(RET), false);
                }
                fail(RET);
                return backup;
    
            case FUNCTION_TAG:
                debug(HIGH, "apply FUNCTION\n");
                // f must be fully applied, or we would have left the loop!
                HNF(f);
                break;
    
            case CHOICE_TAG:
                debug(HIGH, "apply CHOICE\n");
                choose(f);
                break;

            case FORWARD_TAG:
                debug(HIGH, "apply FORWARD\n");
                f = child_at(f,0);
                break;
    
            case FREE_TAG:
                debug(HIGH, "apply FREE\n");
                // we can't actually apply a free variable
                // because we don't know what function to make it.
                fprintf(stderr, "Cannot apply free variable!\n");
                exit(1);
        } 
    }

    // Now we're gaurenteed to have a partial application
    debug(HIGH, "apply PART\n");

    nondet |= f.n->nondet;
    if(nondet)
    {
        backup = make_restore(backup);
        stack_push(bt_stack, (field)backup, copy(RET), false);
    }

    //number of arguments we have left
    int missing = f.n->missing;

    debug_expr(HIGH, f);
    debug(HIGH, "arity = %d\nmissing = %d\nnargs = %d\n", f.n->symbol->arity, missing, nargs);
    debug(HIGH, "missing > nargs %d\n", missing > nargs);

    if(nargs < missing)
    {
        debug(HIGH, "under applied RET!!!!!!!! (%d/%d)\n", f.n->missing, nargs);
        debug_expr(HIGH, f);
        fprintf(stderr, "RET under applied! (This should never happen)\n");
        exit(1);
    }
    else if(missing == nargs)
    {
        debug(HIGH, "fully applied (%d/%d)\n", f.n->missing, nargs);
        debug_expr(HIGH, f);
        //hold the old array of children.
        //we'll need to move this to a bigger array
        //
        set_copy(RET, f);
        for(int i = nargs; i > 2; i--)
        {
            debug_expr(HIGH, array[i-3]);
            set_child_at(RET, missing-1, array[i-3]);
            missing--;
        }
        if(nargs > 1)
        {
            debug_expr(HIGH, child2);
            set_child_at(RET, missing-1, child2);
            missing--;
        }

        debug_expr(HIGH, child1);
        set_child_at(RET, missing-1, child1);
        missing--;

        RET.n->missing = missing;

        debug(HIGH, "after applying\n");
        debug_expr(HIGH, RET);
        if(TAG(f) == CHOICE_TAG || TAG(f) == FUNCTION_TAG)
        {
            HNF_RET(backup);
        }
        debug(HIGH, "leaving apply\n");
        debug_expr(HIGH, RET);
        return backup;
    }
    else
    {
        debug(HIGH, "too many args (%d/%d)\n", f.n->missing, nargs);
        debug_expr(HIGH, f);
       
        field newf = copy(f);
        debug_expr(LOW, newf);

        while(missing > 0)
        {
            set_child_at(newf, missing-1, child_at_v(RET, nargs));
            nargs--;
            missing--;
        }

        debug(HIGH, "fully applied child\n");
        debug_expr(HIGH, newf);
        newf.n->missing = 0;
        HNF(newf);
        debug(HIGH, "fully applied child reduced\n");
        debug_expr(HIGH, newf);
        child_at(RET,0) = newf;
        RET.n->missing = -nargs;

        child_at(RET, 1) = child1;
        child_at(RET, 2) = child2;
        child_at_a(RET, 3) = array;

        debug(HIGH, "new apply node\n");
        debug_expr(HIGH, RET);

        apply_RET_hnf(backup);

        debug(HIGH, "leaving apply\n");
        debug_expr(HIGH, RET);
        return backup;
    }
}


void forward_hnf(field root) {}
Node* forward_RET_hnf(Node* backup) {return backup;}
//{
//    debug(HIGH, "forward HNF\n");
//    debug_expr(HIGH, root);
//
//    // remember the first child, because I may have to reconstruct the forwarding pointer
//    // if we came from a collapsing node, and we're RET,
//    // then we might overwrite ourselved when we evaluate child.
//    // So remember the first child, and we'll be ->(first_child)
//    field first_child = child_at(root,0);
//
//    field child = first_child;
//
//    debug(HIGH, "forward before HNF\n");
//    debug(HIGH, "forward root = ");
//    debug_expr(HIGH, root);
//
//    //This is the normal HNF loop
//    while(TAG(child) == FORWARD_TAG)
//    {
//        debug(HIGH, "forward child = ");
//        debug_expr(HIGH, child);
//        child = child_at(child,0);
//    }
//    //make sure the thing we're pointing to is in head normal form.
//    if(TAG(child) < FREE_TAG && child.n->missing <= 0)
//    {
//        HNF(f);
//    }
//
//    //restore the forwarding node if we need to
//    if(root.n == RET.n)
//    {
//        set_forward(root, first_child);
//    }
//
//    debug(HIGH, "forward after HNF\n");
//    debug(HIGH, "forward root = ");
//    debug_expr(HIGH, root);
//    debug(HIGH, "forward child = ");
//    debug_expr(HIGH, child);
//}

//////////////////////////////////////////////////////////////////////////////
// code for backtracking
//////////////////////////////////////////////////////////////////////////////

// Save a node n, and a copy of n to the backtracking stack
// If we ever backtrack, I'll overwrite the current contents
// of n with it's saved copy.
// This will let me redo a computation.
void save_copy(field n)
{
    field saved;
    saved.n = (Node*)alloc(sizeof(Node));
    memcpy(saved.n, n.n, sizeof(Node));
    n.n->nondet = true;

    stack_push(bt_stack, n, saved, false);
}
void save(field n, field saved)
{
    debug(HIGH, "save: ");
    debug_expr(HIGH, n);
    debug_expr(HIGH, saved);
    n.n->nondet = true;
    stack_push(bt_stack, n, saved, false);
}
Node* save_RET(Node* backup, field saved)
{
    debug(HIGH, "save: ");
    debug_expr(HIGH, RET);
    debug_expr(HIGH, saved);
    backup = make_restore(backup);
    stack_push(bt_stack, (field)(Node*)backup, saved, false);
    debug(HIGH, "backup = %p\n", backup);
    debug(MED, "RET frame\n");
    return backup;
}

void push_frame(field left, field right)
{
    stack_push(bt_stack, left, right, false);
}

//push a choice onto the backtrack stack
//This is our stopping condition for backtracking.
void push_choice(field left, field right)
{
    stack_push(bt_stack, left, right, true);
}

void choose(field root)
{
    debug(HIGH, "in choice\n");
    //choices = {left, right}
    //side == 0 -> left
    //side == 1 -> right
    field choices[2] = {child_at(root,0), child_at(root,1)};
    int side = child_at_i(root,2);

    field saved;
    saved.n = (Node*)alloc(sizeof(Node));

    //save = left ? right
    memcpy(saved.n, root.n, sizeof(Node));
    child_at_i(saved,2) = !side;
    stack_push(bt_stack, root, saved, side == 0);

    set_forward(root,choices[side]);
    root.n->nondet = true;

    debug(HIGH, "leaving choice\n");
}

Node* choose_RET(Node* backup)
{
    debug(HIGH, "in choice\n");
    field choices[2] = {child_at(RET,0), child_at(RET,1)};
    int side = child_at_i(RET,2);

    backup = make_restore(backup);

    field saved;
    saved.n = (Node*)alloc(sizeof(Node));
    memcpy(saved.n, RET.n, sizeof(Node));
    child_at_i(saved, 2) = !side;

    stack_push(bt_stack, (field)backup, (field)saved, side == 0);

    set_forward(RET,choices[side]);
    debug(HIGH, "leaving choice\n");

    return backup;
}

// backtrack until we find a choice.
// We overwrite all of the node in the stack
// with their saved values.
// Then we recompute the nodes with the new choice.
bool undo()
{
    if(bt_stack->size == 0)
        return false;

    debug(HIGH, "full stack\n");
    debug_stack(HIGH);
    debug(HIGH, "undoing\n");
    FieldPair* frame;
    do 
    {
        frame = pop(bt_stack);
        if(frame->lhs.n != RET.n)
        {
            memcpy(frame->lhs.n, frame->rhs.n, sizeof(Node));
        }
    } while(!(frame->choice || empty(bt_stack)));

    debug(HIGH, "finished undoing\n");
    debug_stack(HIGH);
    return frame->choice;
}

void print_frame(FieldPair* f)
{
    printf("%p:", f->lhs.n);
    print_expr(f->lhs);
    if(f->choice)
        printf(" T-> ");
    else
        printf(" F-> ");

    printf("%p:", f->rhs.n);
    print_expr(f->rhs);
}

void print_stack(Stack* s)
{
    printf("stacksize: %ld %ld\n", bt_stack->size, bt_stack->capacity);
    if(bt_stack->size == 0)
    {
        printf("[]\n");
        return;
    }
    int i = bt_stack->size;
    while(i --> 1)
    {
        print_frame(&bt_stack->array[i]);
        printf(", \n");
    }
    print_frame(&bt_stack->array[0]);
    printf("\n");
}

void print_expr(field n)
{
    if(n.i < 1000001)
    {
        printf("%ld", n.i);
        fflush(stdout);
        return;
    }
    fflush(stdout);
    printf("%s", n.n->symbol->name);
    fflush(stdout);
    if(n.n->nondet)
    {
        printf("?");
        fflush(stdout);
    }
    if(n.n->missing < 0) // this is only ever true in an apply symbol
    {
        printf("(");
        fflush(stdout);
        print_expr(child_at(n,0));
        printf(": ");
        fflush(stdout);
        for(int i = -n.n->missing; i > 1; i--)
        {
            print_expr(child_at_v(n,i));
            printf(", ");
            fflush(stdout);
        }
        print_expr(child_at(n,1));
        printf(")");
        fflush(stdout);
    }
    else if(n.n->symbol->arity)
    {
        printf("(");
        fflush(stdout);
        if(child_at_i(n,1) == INT_CTR)
        {
            printf("%ld", child_at_i(n,0));
            fflush(stdout);
        }
        else if(child_at_i(n,1) == CHAR_CTR)
        {
            printf("%c", (char)child_at_c(n,0));
            fflush(stdout);
        }
        else if(child_at_i(n,1) == FLOAT_CTR)
        {
            printf("%lf", child_at_f(n,0));
            fflush(stdout);
        }
        else
        {
            for(int i = n.n->symbol->arity-1; i > 0; i--)
            {
                if(i >= n.n->missing)
                {
                    print_expr(child_at_v(n,i));
                    printf(", ");
                    fflush(stdout);
                }
                else
                {
                    printf("*, ");
                    fflush(stdout);
                }
            }
            if(n.n->missing == 0)
            {
                print_expr(child_at_v(n,0));
            }
            else
            {
                printf("*");
                fflush(stdout);
            }
        }
        printf(")");
        fflush(stdout);
    }
}

void print_tuple(field n, int i)
{
    if(i == 0)
    {
        print_final(child_at(n,0));
        printf(")");
    }
    else
    {
        print_final(child_at_v(n,i));
        printf(", ");
        print_tuple(n,i-1);
    }
}

void print_list(field n)
{
    field h = child_at(n,1);
    field t = child_at(n,0);
    printf("[");
    print_final(h);
    while(strcmp(t.n->symbol->name, "[]"))
    {
        if(TAG(t) == FORWARD_TAG)
        {
            t = child_at(t,0);
        }
        else
        {
            h = child_at(t,1);
            t = child_at(t,0);
            printf(", ");
            print_final(h);
        }
    }
    printf("]");
    return;
}

void print_final(field n)
{
    if(TAG(n) == FORWARD_TAG)
    {
        print_final(child_at_v(n,0));
        return;
    }
    if(!strcmp(n.n->symbol->name, ":"))
    {
        print_list(n);
        return;
    }
    if(!strcmp(n.n->symbol->name, "(,)"))               { printf("("); print_tuple(n,1);  return; }
    if(!strcmp(n.n->symbol->name, "(,,)"))              { printf("("); print_tuple(n,2);  return; }
    if(!strcmp(n.n->symbol->name, "(,,,)"))             { printf("("); print_tuple(n,3);  return; }
    if(!strcmp(n.n->symbol->name, "(,,,,)"))            { printf("("); print_tuple(n,4);  return; }
    if(!strcmp(n.n->symbol->name, "(,,,,,)"))           { printf("("); print_tuple(n,5);  return; }
    if(!strcmp(n.n->symbol->name, "(,,,,,,)"))          { printf("("); print_tuple(n,6);  return; }
    if(!strcmp(n.n->symbol->name, "(,,,,,,,)"))         { printf("("); print_tuple(n,7);  return; }
    if(!strcmp(n.n->symbol->name, "(,,,,,,,,)"))        { printf("("); print_tuple(n,8);  return; }
    if(!strcmp(n.n->symbol->name, "(,,,,,,,,,)"))       { printf("("); print_tuple(n,9);  return; }
    if(!strcmp(n.n->symbol->name, "(,,,,,,,,,,)"))      { printf("("); print_tuple(n,10); return; }
    if(!strcmp(n.n->symbol->name, "(,,,,,,,,,,,)"))     { printf("("); print_tuple(n,11); return; }
    if(!strcmp(n.n->symbol->name, "(,,,,,,,,,,,,)"))    { printf("("); print_tuple(n,12); return; }
    if(!strcmp(n.n->symbol->name, "(,,,,,,,,,,,,,)"))   { printf("("); print_tuple(n,13); return; }
    if(!strcmp(n.n->symbol->name, "(,,,,,,,,,,,,,,)"))  { printf("("); print_tuple(n,14); return; }
    if(!strcmp(n.n->symbol->name, "(,,,,,,,,,,,,,,,)")) { printf("("); print_tuple(n,15); return; }
    if(child_at_i(n,1) == INT_CTR)
    {
        printf("%ld", child_at_i(n,0));
        return;
    }
    if(child_at_i(n,1) == CHAR_CTR)
    {
        printf("%c", (char)child_at_c(n,0));
        return;
    }
    if(child_at_i(n,1) == FLOAT_CTR)
    {
        printf("%lf", child_at_f(n,0));
        return;
    }
    printf("%s", n.n->symbol->name);
    if(n.n->symbol->arity)
    {
        printf("(");
        for(int i = n.n->symbol->arity-1; i > 0; i--)
        {
            if(i >= n.n->missing)
            {
                print_final(child_at_v(n,i));
                printf(", ");
            }
            else
            {
                printf("*, ");
            }
        }
        if(n.n->missing == 0)
            print_final(child_at_v(n,0));
        else
            printf("*");
        printf(")");
    }
}

//////////////////////////////////////////////////////////////////////////////
// normal forms
//////////////////////////////////////////////////////////////////////////////
void error(char* msg, field n)
{
    printf("Error: %s\n", msg);
    print_expr(n);
    exit(1);
}

void ground_nf(field expr)
{
    debug(LOW, "solving: ");
    debug_expr(LOW, expr);
    // if we're a variable, then we can't reduce to ground normal from
    if(TAG(expr) == FREE_TAG)
    {
        fail(expr);
        return;
    }
    // if we're a constructor, then we don't ned to put ourselves in head normal form
    if(TAG(expr) == CHOICE_TAG || TAG(expr) == FUNCTION_TAG && expr.n->missing <= 0)
    {
        HNF(expr);
    }
    debug(LOW, "HNF: ");
    debug_expr(LOW, expr);
    // If we're a primative value, then we're already in normal form.
    // int/float/char can't hold unevaluated expressions.
    if(child_at_i(expr,1) == INT_CTR ||
       child_at_i(expr,1) == CHAR_CTR ||
       child_at_i(expr,1) == FLOAT_CTR)
    {
        return;
    }
    
    for(int i = 0; i < expr.n->symbol->arity; i++)
    {
        field e = child_at_v(expr,i);
        if(e.n != NULL)
        {
            ground_nf(e);
            if(TAG(e) == FAIL_TAG || TAG(e) == FREE_TAG)
            {
                fail(expr);
            }
        }
    }
}

void nf(field expr)
{
    debug(LOW, "solving: ");
    debug_expr(LOW, expr);
    // if we're a constructor, then we don't need to put ourselves in head normal form
    if(expr.n->missing <= 0)
    {
        HNF(expr);
    }
    debug(LOW, "HNF: ");
    debug_expr(LOW, expr);

    // If we're a primative value, then we're already in normal form.
    // int/float/char can't hold unevaluated expressions.
    if(child_at_i(expr,1) == INT_CTR ||
       child_at_i(expr,1) == CHAR_CTR ||
       child_at_i(expr,1) == FLOAT_CTR)
    {
        return;
    }
    
    for(int i = expr.n->symbol->arity-1; i >= 0; i--)
    {
        field e = child_at_v(expr,i);
        nf(e);
        if(TAG(e) == FAIL_TAG)
        {
            fail(expr);
            i = 0;
        }
    }
}

void nf_all(field expr)
{
    bool solution = false;
    nf(expr);
    debug(HIGH, "MAYBE SOLUTION 1: ");
    debug_expr(HIGH, expr);
    debug(HIGH, "%d = %d?\n", TAG(expr), FAIL_TAG);
    debug_stack(MED);
    if(TAG(expr) != FAIL_TAG)
    {
        printf("SOLUTION: ");
        print_final(expr);
        printf("\n");
        solution = true;
        //printf("stack\n");
        //print_stack(bt_stack);
    }
    while(undo())
    {
        debug(HIGH, "NORMALIZING: ");
        debug_expr(HIGH, expr);
        nf(expr);
        if(TAG(expr) != FAIL_TAG)
        {
            printf("SOLUTION: ");
            print_final(expr);
            printf("\n");
            solution = true;
            //printf("stack\n");
            //print_stack(bt_stack);
        }
    }
    if(!solution)
    {
        printf("No solutions found\n");
    }
}

