#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "runtime.h"

#include "node.h"
#include "stack.h"
#include "debug.h"

void CTR_hnf(Node* root)
{
    debug_expr(LOW, root);
    return;
}

void choice_hnf(Node* root)
{
    debug_expr(LOW, root);
    choose(root);
}

void apply_hnf(Node* root)
{
    debug(LOW, "apply\n");
    debug(HIGH, "apply high\n");
    Node* f = child_at_n(root,0);

    if(f->missing > 0)
    {
        goto PART;
    }
    
    static void* table[] = {&&FAIL, &&FUNCTION, &&CHOICE, &&FREE};
    goto* table[f->symbol->tag];
    
    FAIL:
    {
        debug(HIGH, "apply FAIL\n");
        if(f->nondet)
        {
            save_copy(root);
        }
        fail(root);
        return;
    }
    
    FUNCTION:
    {
        debug(HIGH, "apply FUNCTION\n");
        if(f->missing > 0)
        {
            goto PART;
        }
        else
        {
            f->symbol->hnf(f);
            //if(f->missing > 0)
            //{
            //    goto PART;
            //}
            goto* table[f->symbol->tag];
        }
    }
    
    CHOICE:
    {
        debug(HIGH, "apply CHOICE\n");
        choose(f);
        //if(f->missing > 0)
        //{
        //    goto PART;
        //}
        goto* table[f->symbol->tag];
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
        if(f->nondet)
        {
            save_copy(root);
        }

        // number of arguments that we're applying
        int nargs = -root->missing;
        debug(LOW, "apply: ");
        debug_expr(LOW, f);
        debug(LOW, "/%d\n", nargs);

        //the actual function to apply
        int arity = f->symbol->arity;

        //number of arguments we have left
        int missing = f->missing;

        //we're missing more arugments then we're applying
        //so this will result in another partial application
        if(missing > nargs)
        {
            debug(LOW, "too few args (%d/%d)\n", f->missing, nargs);
            debug_expr(LOW, f);
            //hold the old array of children.
            //we'll need to move this to a bigger array
            field* array = root->children[3].a;
            if(arity > 3)
            {
                root->children[3].a = (field*)calloc(arity-3, sizeof(field));
            }
            else
            {
                root->children[3].a = NULL;
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
            debug_expr(LOW, child_at(root,1).n);
            debug(LOW, "%d\n", missing);
            root->symbol = f->symbol;
            root->nondet = root->nondet | f->nondet;
            root->missing = missing;
            return;
        }
        // we're applying exactly the right number of arguments.
        // So, set the root to be f, and copy all of the arguments.
        else if(missing == nargs)
        {
            debug(LOW, "equal args (%d/%d)\n", f->missing, nargs);
            debug_expr(LOW, f);
            //hold the old array of children.
            //we'll need to move this to a bigger array
            field* array = root->children[3].a;
            if(arity > 3)
            {
                root->children[3].a = (field*)calloc(arity-3, sizeof(field));
            }
            else
            {
                root->children[3].n = NULL;
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
            root->symbol = f->symbol;
            root->nondet = root->nondet | f->nondet;
            root->missing = 0;
            debug(LOW, "BEG_OUT: ");
            debug_expr(LOW, root);
            debug(LOW, "\n");
            if(root->symbol->tag < FREE_TAG)
            {
                root->symbol->hnf(root);
            }
            debug(LOW, "END_OUT: ");
            debug_expr(LOW, root);
            debug(LOW, "\n");
            return;
        }
        else
        {
            debug(LOW, "too many args (%d/%d)\n", f->missing, nargs);
            debug_expr(LOW, f);
            // app(part(f/2,1), 2, 3) => app(f(1,2), 3);
            //copy the contents of f into newf
            //Since we need to copy all the arguments we need the arity.
            //(although we could probably store it in the array, or lower bits of the pointer)
            Node* newf = (Node*)calloc(1,sizeof(Node));
            set_node(newf,f);
            if(arity > 3)
            {
                field* array = (field*)malloc(sizeof(Node*) * arity-3);
                for(int i = 3; i < arity; i++)
                {
                    array[i] = child_at_v(f,i);
                }
                newf->children[3].a = array;
            }
            debug_expr(LOW, newf);

            while(missing > 0)
            {
                set_child_at(newf, missing-1, child_at_v(root, nargs));
                nargs--;
                missing--;
            }
            debug_expr(LOW, newf);

            newf->missing = 0;
            if(newf->symbol->tag < FREE_TAG)
            {
                newf->symbol->hnf(newf);
            }
            child_at_n(root,0) = newf;
            root->missing = -nargs;
            f = newf;
            debug(LOW, "end too many args (%d/%d)\n", f->missing, nargs);
            debug_expr(LOW, f);
        }
        goto* table[f->symbol->tag];
    }
}

//////////////////////////////////////////////////////////////////////////////
// code for backtracking
//////////////////////////////////////////////////////////////////////////////

// Save a node n, and a copy of n to the backtracking stack
// If we ever backtrack, I'll over write the current contents
// of n with it's saved copy.
// This will let me redo a computation.
void save_copy(Node* n)
{
    Node* saved = (Node*)malloc(sizeof(Node));
    memcpy(saved, n, sizeof(Node));
    n->nondet = true;

    debug(MED, "pushing ");
    debug_frame(MED, n, saved);

    stack_push(bt_stack, n, saved, false);
}
void save(Node* n, Node* saved)
{
    n->nondet = true;

    debug(MED, "pushing ");
    debug_frame(MED, n, saved);

    stack_push(bt_stack, n, saved, false);
}

//push a choice onto the backtrack stack
//This is our stopping condition for backtracking.
void push_choice(Node* left, Node* right)
{
    stack_push(bt_stack, left, right, true);
    left->nondet = true;
}

void choose(Node* root)
{
    Node* left  = child_at_n(root,0);
    Node* right = child_at_n(root,1);

    if(child_at_i(root,2) == 0)
    {
        left->symbol->hnf(left);
        Node* saved = (Node*)malloc(sizeof(Node));
        memcpy(saved, root, sizeof(Node));
        set_node(root,left);
        child_at_i(saved,2) = 1;
        stack_push(bt_stack, root, saved, true);
        root->nondet = true;
    }
    else
    {
        right->symbol->hnf(right);
        Node* saved = (Node*)malloc(sizeof(Node));
        memcpy(saved, root, sizeof(Node));
        set_node(root,right);
        child_at_i(saved,2) = 0;
        stack_push(bt_stack, root, saved, false);
        root->nondet = true;
    }

    //print_stack(bt_stack);
    //printf("stacksize: %ld %ld\n", bt_stack->size, bt_stack->capacity);
}

// backtrack until we find a choice.
// We overwrite all of the node in the stack
// with their saved values.
// Then we recompute the nodes with the new choice.
bool undo()
{
    if(bt_stack->size == 0)
        return false;

    NodePair* frame;
    do 
    {
        frame = pop(bt_stack);
        memcpy(frame->lhs, frame->rhs, sizeof(Node));
    } while(!frame->choice && !empty(bt_stack));

    return frame->choice;
}

void print_frame(NodePair* f)
{
    printf("%p:", f->lhs);
    print_expr(f->lhs);
    if(f->choice)
        printf(" T-> ");
    else
        printf(" F-> ");

    printf("%p:", f->rhs);
    print_expr(f->rhs);
}

void print_stack(Stack* s)
{
    if(bt_stack->size == 0)
    {
        printf("[]\n");
        return;
    }
    for(int i = 0; i < bt_stack->size-1; i++)
    {
        print_frame(&bt_stack->array[i]);
        printf(", \n");
    }
    print_frame(&bt_stack->array[bt_stack->size-1]);
    printf("stacksize: %ld %ld\n", bt_stack->size, bt_stack->capacity);
}

void print_expr(Node* n)
{
    printf("%s", n->symbol->name);
    fflush(stdout);
    if(n->nondet)
    {
        printf("?");
        fflush(stdout);
    }
    if(n->missing < 0) // this is only ever true in an apply symbol
    {
        printf("(");
        fflush(stdout);
        print_expr(child_at_n(n,0));
        printf(": ");
        fflush(stdout);
        for(int i = -n->missing; i > 1; i--)
        {
            print_expr(child_at_v(n,i).n);
            printf(", ");
            fflush(stdout);
        }
        print_expr(child_at_n(n,1));
        printf(")");
        fflush(stdout);
    }
    else if(n->symbol->arity)
    {
        printf("(");
        fflush(stdout);
        if(child_at_i(n,1) == INT_CTR)
        {
            printf("%ld", child_at_i(n,0));
        }
        else if(child_at_i(n,1) == CHAR_CTR)
        {
            printf("%c", child_at_c(n,0));
        }
        else if(child_at_i(n,1) == FLOAT_CTR)
        {
            printf("%lf", child_at_f(n,0));
        }
        else
        {
            for(int i = n->symbol->arity-1; i > 0; i--)
            {
                if(i >= n->missing)
                {
                    print_expr(child_at_v(n,i).n);
                    printf(", ");
                    fflush(stdout);
                }
                else
                {
                    printf("*, ");
                    fflush(stdout);
                }
            }
            if(n->missing == 0)
                print_expr(child_at_v(n,0).n);
            else
                printf("*");
        }
        printf(")");
        fflush(stdout);
    }
}

void print_final(Node* n)
{
    printf("%s", n->symbol->name);
    if(n->symbol->arity)
    {
        printf("(");
        if(child_at_i(n,1) == INT_CTR)
        {
            printf("%ld", child_at_i(n,0));
        }
        else if(child_at_i(n,1) == CHAR_CTR)
        {
            printf("%c", child_at_c(n,0));
        }
        else if(child_at_i(n,1) == FLOAT_CTR)
        {
            printf("%lf", child_at_f(n,0));
        }
        else
        {
            for(int i = n->symbol->arity-1; i > 0; i--)
            {
                if(i >= n->missing)
                {
                    print_final(child_at_v(n,i).n);
                    printf(", ");
                }
                else
                {
                    printf("*, ");
                }
            }
            if(n->missing == 0)
                print_final(child_at_v(n,0).n);
            else
                printf("*");
        }
        printf(")");
    }
}

void error(char* msg, Node* n)
{
    printf("Error: %s\n", msg);
    print_expr(n);
    exit(1);
}

void ground_nf(Node* expr)
{
    debug(LOW, "solving: ");
    debug_expr(LOW, expr);
    // if we're a variable, then we can't reduce to ground normal from
    if(expr->symbol->tag == FREE_TAG)
    {
        fail(expr);
        return;
    }
    // if we're a constructor, then we don't ned to put ourselves in head normal form
    if(expr->symbol->tag <= 4 && expr->missing <= 0)
    {
        expr->symbol->hnf(expr);
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
    
    for(int i = 0; i < expr->symbol->arity; i++)
    {
        if(child_at_v(expr,i).n)
        {
            Node* e = child_at_v(expr,i).n;
            ground_nf(e);
            if(e->symbol->tag == FAIL_TAG ||
               e->symbol->tag == FREE_TAG)
            {
                fail(expr);
            }
        }
    }
}

void nf(Node* expr)
{
    debug(LOW, "solving: ");
    debug_expr(LOW, expr);
    // if we're a constructor, then we don't need to put ourselves in head normal form
    if(expr->missing <= 0)
    {
        expr->symbol->hnf(expr);
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
    
    for(int i = expr->symbol->arity-1; i >= 0 ; i--)
    {
        Node* e = child_at_v(expr,i).n;
        nf(e);
        if(e->symbol->tag == FAIL_TAG)
        {
            fail(expr);
        }
    }
}

void nf_all(Node* expr)
{
    bool solution = false;
    nf(expr);
    debug_stack(MED);
    if(expr->symbol->tag != FAIL_TAG)
    {
        printf("SOLUTION: ");
        print_final(expr);
        printf("\n");
        solution = true;
    }
    while(undo())
    {
        nf(expr);
        debug_stack(MED);
        if(expr->symbol->tag != FAIL_TAG)
        {
            printf("SOLUTION: ");
            print_final(expr);
            printf("\n");
            solution = true;
        }
    }
    if(!solution)
    {
        printf("No solutions found\n");
    }
}

