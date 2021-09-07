#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "runtime.h"

#include "node.h"
#include "stack.h"
#include "debug.h"


unsigned long set_RET_nondet()
{
    if(!RET.n->nondet)
    {
        field RET_ptr;
        RET_ptr.n = (Node*)calloc(1, sizeof(Node));
        RET_ptr.n->symbol = &RET_symbol;
        RET_ptr.n->nondet = RET_ptr.c;
        RET.n->nondet = RET_ptr.c;
    }
}


void CTR_hnf(field root)
{
    debug_expr(LOW, root);
    return;
}

void choice_hnf(field root)
{
    debug_expr(LOW, root);
    choose(root);
}

void apply_hnf(field root)
{
    debug(LOW, "apply\n");
    field f = child_at(root,0);

    if(f.n->missing > 0)
    {
        goto PART;
    }
    
    static void* table[] = {&&FAIL, &&FUNCTION, &&CHOICE, &&FORWARD, &&FREE};
    goto* table[f.n->symbol->tag];
    
    FAIL:
    {
        debug(HIGH, "apply FAIL\n");
        if(f.n->nondet)
        {
            save_copy(root);
        }
        fail(root);
        return;
    }
    
    FUNCTION:
    {
        debug(HIGH, "apply FUNCTION\n");
        if(f.n->missing > 0)
        {
            goto PART;
        }
        else
        {
            HNF(f);
            goto* table[TAG(f)];
        }
    }
    
    CHOICE:
    {
        debug(HIGH, "apply CHOICE\n");
        choose(f);
        goto* table[TAG(f)];
    }

    FORWARD:
    {
        debug(HIGH, "apply FORWARD\n");
        f = child_at(f,0);
        goto* table[f.n->symbol->tag];
    }
    
    FREE:
    {
        debug(HIGH, "apply FREE\n");
        // we can't actually apply a free variable
        // because we don't know what function to make it.
        fprintf(stderr, "Cannot apply free variable!\n");
        exit(1);
    }
    
    PART:
    {
        debug(HIGH, "apply PART\n");
        if(f.n->nondet)
        {
            save_copy(root);
        }

        // number of arguments that we're applying
        int nargs = -root.n->missing;
        debug(LOW, "apply: ");
        debug_expr(LOW, f);
        debug(LOW, "/%d\n", nargs);

        //the actual function to apply
        int arity = f.n->symbol->arity;

        //number of arguments we have left
        int missing = f.n->missing;

        //we're missing more arguments then we're applying
        //so this will result in another partial application
        if(missing > nargs)
        {
            debug(LOW, "too few args (%d/%d)\n", f.n->missing, nargs);
            debug_expr(LOW, f);
            //hold the old array of children.
            //we'll need to move this to a bigger array
            field* array = root.n->children[3].a;
            if(arity > 3)
            {
                root.n->children[3].a = (field*)calloc(arity-3, sizeof(field));
            }
            else
            {
                root.n->children[3].a = NULL;
            }

            for(int i = arity-1; i >= missing; i--)
            {
                set_child_at(root, i, child_at_v(f,i));
            }
            for(int i = nargs; i > 2; i--)
            {
                set_child_at(root,missing-1, array[i-3]);
                missing--;
            }
            if(nargs >= 2)
            {
                set_child_at(root,missing-1, child_at(root,2));
                missing--;
            }
            //missing has to be at least 1, otherwise there'd be no apply node
            set_child_at(root,missing-1, child_at(root,1));
            missing--;
            debug_expr(LOW, child_at(root,1));
            debug(LOW, "%d\n", missing);
            root.n->symbol = f.n->symbol;
            root.n->missing = missing;
            return;
        }
        // we're applying exactly the right number of arguments.
        // So, set the root to be f, and copy all of the arguments.
        else if(missing == nargs)
        {
            debug(LOW, "equal args (%d/%d)\n", f.n->missing, nargs);
            debug_expr(LOW, f);
            //hold the old array of children.
            //we'll need to move this to a bigger array
            field* array = root.n->children[3].a;
            if(arity > 3)
            {
                root.n->children[3].a = (field*)calloc(arity-3, sizeof(field));
            }
            else
            {
                root.n->children[3].n = NULL;
            }
            
            child_at(root,0) = child_at(root,1);
            child_at(root,1) = child_at(root,2);
            for(int i = 2; i < nargs; i++)
            {
                set_child_at(root,i, array[i-2]);
            }

            for(int i = missing; i < arity; i++)
            {
                set_child_at(root,i, child_at_v(f,i));
            }
            root.n->symbol = f.n->symbol;
            root.n->missing = 0;
            debug(LOW, "fully applied: ");
            debug_expr(LOW, root);
            debug(LOW, "\n");
            if(root.n->symbol->tag < FREE_TAG)
            {
                HNF(root);
            }
            debug(LOW, "fully applied HNF: ");
            debug_expr(LOW, root);
            debug(LOW, "\n");
            return;
        }
        else
        {
            debug(LOW, "too many args (%d/%d)\n", f.n->missing, nargs);
            debug_expr(LOW, f);
            // app(part(f/2,1), 2, 3) => app(f(1,2), 3);
            //copy the contents of f into newf
            //Since we need to copy all the arguments we need the arity.
            //(although we could probably store it in the array, or lower bits of the pointer)
            field newf;
            newf.n = (Node*)malloc(sizeof(Node));
            set_node(newf,f);
            newf.n->nondet = f.n->nondet;
            if(arity > 3)
            {
                field* array = (field*)malloc(sizeof(field) * arity-3);
                for(int i = 3; i < arity; i++)
                {
                    array[i] = child_at_v(f,i);
                }
                newf.n->children[3].a = array;
            }
            debug_expr(LOW, newf);

            while(missing > 0)
            {
                set_child_at(newf, missing-1, child_at_v(root, nargs));
                nargs--;
                missing--;
            }
            debug_expr(LOW, newf);

            newf.n->missing = 0;
            if(newf.n->symbol->tag < FREE_TAG)
            {
                HNF(newf);
            }
            child_at(root,0) = newf;
            root.n->missing = -nargs;
            f = newf;
            debug(LOW, "end too many args (%d/%d)\n", f.n->missing, nargs);
            debug_expr(LOW, f);
        }
        goto* table[f.n->symbol->tag];
    }
}

void forward_hnf(field root)
{
    // rule: all forwarding nodes point to HNF forms
    // if this is true, then I don't need to chase down the forwarding pointers.
    // if it's a forwarding pointer then I know the thing at the end is in head normal form.
    field child = child_at(root,0);
    if(child.n->symbol->tag == FUNCTION_TAG || child.n->symbol->tag == CHOICE_TAG)
    {
        HNF(child);
    }
    if(child.n->nondet)
    {
        if(root.n == RET.n)
        {
            set_RET_nondet();
        }
        else
        {
            root.n->nondet = true;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////
// code for backtracking
//////////////////////////////////////////////////////////////////////////////

// Save a node n, and a copy of n to the backtracking stack
// If we ever backtrack, I'll overwrite the current contents
// of n with it's saved copy.
// This will let me redo a computation.
void save_copy(field n)
{
    debug(HIGH, "save copy: ");
    debug_expr(HIGH, n);
    field saved;
    saved.n = (Node*)malloc(sizeof(Node));
    memcpy(saved.n, n.n, sizeof(Node));
    n.n->nondet = true;

    stack_push(bt_stack, n, saved, false);
}
void save(field n, field saved)
{
    debug(HIGH, "save: ");
    debug_expr(HIGH, n);
    debug_expr(HIGH, saved);
    if(n.n == RET.n)
    {
        debug(HIGH, "RET->nondet = %ld\n", RET.n->nondet);
        set_RET_nondet();
        debug(HIGH, "RET->nondet = %ld\n", RET.n->nondet);
        stack_push(bt_stack, (field){.c = RET.n->nondet}, saved, false);
        debug(HIGH, "RET->nondet = %ld\n", RET.n->nondet);
        debug(MED, "RET frame\n");
    }
    else
    {
        n.n->nondet = true;
        stack_push(bt_stack, n, saved, false);
    }
}


//push a choice onto the backtrack stack
//This is our stopping condition for backtracking.
void push_choice(field left, field right)
{
    stack_push(bt_stack, left, right, true);
    left.n->nondet = true;
}

void choose(field root)
{
    debug(HIGH, "in choice\n");
    //choices = {left, right}
    //side == 0 -> left
    //side == 1 -> right
    field choices[2] = {child_at(root,0), child_at(root,1)};
    int side = child_at_i(root,2);

    //if we're RET and we've already made a node, then use that one.
    field saved;
    if(root.n == RET.n && RET.n->nondet)
    {
        saved.c = RET.n->nondet;
    }
    else
    {
        saved.n = (Node*)malloc(sizeof(Node));
    }

    //save = left ? right
    memcpy(saved.n, root.n, sizeof(Node));
    child_at_i(saved,2) = !side;
    //this is ok for RET, because we're not using it when we undo, 
    //so it's ok (but pointless) to overwrite it)
    stack_push(bt_stack, root, saved, side == 0);

    //reduce the side, and set us to a forwarding node
    HNF(choices[side]);
    set_forward(root,choices[side]);
    //if root is RET, then it points to the thing we replace it with on the stack
    //if it's not, then it's not false
    root.n->nondet = saved.c;


    debug(HIGH, "leaving choice\n");
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
        memcpy(frame->lhs.n, frame->rhs.n, sizeof(Node));
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
    if(n.i < 1000)
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
        if(t.n->symbol->tag == FORWARD_TAG)
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
    if(n.n->symbol->tag == FORWARD_TAG)
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
    if(expr.n->symbol->tag == FREE_TAG)
    {
        fail(expr);
        return;
    }
    // if we're a constructor, then we don't ned to put ourselves in head normal form
    if(expr.n->symbol->tag <= 4 && expr.n->missing <= 0)
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
            if(e.n->symbol->tag == FAIL_TAG ||
               e.n->symbol->tag == FREE_TAG)
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
        if(e.n->symbol->tag == FAIL_TAG)
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
    debug(HIGH, "%d = %d?\n", expr.n->symbol->tag, FAIL_TAG);
    debug_stack(MED);
    if(expr.n->symbol->tag != FAIL_TAG)
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
        if(expr.n->symbol->tag != FAIL_TAG)
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

