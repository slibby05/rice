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

void FORWARD_hnf(Node* root)
{
    debug_expr(LOW, root);
    while(child_at_n(root,0)->symbol->tag == FORWARD_TAG)
    {
        debug_expr(LOW, root);
        child_at_n(root,0) = child_at_n(child_at_n(root,0), 0);
    }
}

void apply_hnf(Node* root)
{
    debug(LOW, "apply ");
    Node* f = child_at_n(root,0);
    // number of arguments that we're applying
    int nargs = root->missing;

    static void* table[] = {&&FAIL, &&FUNCTION, &&FORWARD, &&CHOICE, &&FREE};
    
    goto* table[f->symbol->tag];
    
    FAIL:
    {
        if(f->nondet)
        {
            save(root);
        }
        fail(root);
        return;
    }
    
    FUNCTION:
    {
        if(f->missing > 0)
        {
            goto PART;
        }
        else
        {
            f->symbol->hnf(f);
            goto* table[f->symbol->tag];
        }
    }
    
    FORWARD:
    {
        while (child_at_n(f,0)->symbol->tag == FORWARD_TAG)
        {
            child_at_n(f,0) = child_at_n(child_at_n(f, 0), 0);
        }
        f = child_at_n(f, 0);
        goto* table[f->symbol->tag];
    }
    
    CHOICE:
    {
        choose(f);
        goto* table[f->symbol->tag];
    }
    
    FREE:
    {
        // we can't actually apply a free variable
        // because we don't know what function to make it.
        fprintf(stderr, "Cannot apply free variable!\n");
        exit(1);
    }
    
    PART:
    {
        if(f->nondet)
        {
            save(root);
        }

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
                root->children[3].n = (Node*)calloc(arity-3, sizeof(Node*));
            }
            else
            {
                root->children[3].n = NULL;
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
            debug_expr(LOW, child_at(root,1).n);
            printf("%d\n", missing);
            missing--;
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
                root->children[3].n = (Node*)calloc(arity-3, sizeof(Node*));
            }
            else
            {
                root->children[3].n = NULL;
            }
            
            child_at(root,0) = child_at(root,1);
            child_at(root,1) = child_at(root,2);
            for(int i = 2; i <= nargs; i++)
            {
                set_child_at(root,i, array[i-2]);
            }

            for(int i = missing; i < arity; i++)
            {
                set_child_at(root,i, child_at_v(f,i));
            }
            root->symbol = f->symbol;
            root->nondet = root->nondet | f->nondet;
            root->missing = missing;
            root->symbol->hnf(root);
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
            newf->symbol->hnf(newf);
            child_at_n(root,0) = newf;
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
void save(Node* n)
{
    Node* saved = (Node*)malloc(sizeof(Node));
    memcpy(saved, n, sizeof(Node));
    n->nondet = true;

    debug(MED, "pushing ");
    debug_frame(MED, n, saved);

    stack_push(bt_stack, n, saved, false);
    n->nondet = true;
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

    left->symbol->hnf(left);

    debug(MED, "pushing ?");
    debug_frame(MED, left, right);

    memcpy(root, left, sizeof(Node));
    root->nondet = true;
    stack_push(bt_stack, root, right, true);
}

// backtrack until we find a choice.
// We overwrite all of the node in the stack
// with their saved values.
// Then we recompute the nodes with the new choice.
void undo()
{
    if(bt_stack->size == 0)
        return;

    NodePair* frame = pop(bt_stack);
    debug(MED, "UNDOING ");
    debug_frame(MED, frame->lhs, frame->rhs);
    while(!frame->choice)
    {
        memcpy(frame->lhs, frame->rhs, sizeof(Node));
        //frame->lhs->nondet = false;
        frame = pop(bt_stack);
        debug(MED, "UNDOING ");
        debug_frame(MED, frame->lhs, frame->rhs);
    }
    memcpy(frame->lhs, frame->rhs, sizeof(Node));
    //frame->lhs->nondet = false;
}

void print_stack(Stack* s)
{
    for(int i = s->size-1; i >= 0; i--)
    {
        if(s->array[i].choice) printf("?");
        printf("<"); 
        print_expr(s->array[i].lhs);
        printf(", "); 
        print_expr(s->array[i].rhs);
        printf(">\n");
    }
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
    if(n->symbol == &apply_symbol)
    {
        printf("(");
        fflush(stdout);
        print_expr(child_at_n(n,1));
        fflush(stdout);
        for(int i = 1; i < n->missing; i++)
        {
            print_expr(child_at_v(n,i).n);
            printf(", ");
            fflush(stdout);
        }
        print_expr(child_at_v(n,n->missing-1).n);
        printf(")");
        fflush(stdout);
    }
    else if(n->symbol->arity)
    {
        printf("(");
        fflush(stdout);
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
        printf(")");
        fflush(stdout);
    }
}

void display_expr(Node* n)
{
    printf("%s", n->symbol->name);
    if(n->symbol == &apply_symbol)
    {
        printf("(");
        display_expr(child_at_n(n,1));
        for(int i = 1; i < n->missing; i++)
        {
            display_expr(child_at_v(n,i).n);
            printf(", ");
        }
        display_expr(child_at_v(n,n->missing-1).n);
        printf(")");
    }
    else if(n->symbol->arity)
    {
        printf("(");
        for(int i = n->symbol->arity-1; i > 0; i--)
        {
            if(i >= n->missing)
            {
                display_expr(child_at_v(n,i).n);
                printf(", ");
            }
            else
            {
                printf("*, ");
            }
        }
        if(n->missing == 0)
            display_expr(child_at_v(n,0).n);
        else
            printf("*");
        printf(")");
        fflush(stdout);
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
    if(expr->symbol->tag <= 4 && expr->missing == 0)
    {
        expr->symbol->hnf(expr);
    }
    debug(LOW, "HNF: ");
    debug_expr(LOW, expr);
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
    // if we're a constructor, then we don't ned to put ourselves in head normal form
    if(expr->missing == 0)
    {
        expr->symbol->hnf(expr);
    }
    debug(LOW, "HNF: ");
    debug_expr(LOW, expr);
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
        print_expr(expr);
        printf("\n");
        solution = true;
    }
    while(bt_stack->size > 0)
    {
        undo();
        nf(expr);
        debug_stack(MED);
        if(expr->symbol->tag != FAIL_TAG)
        {
            display_expr(expr);
            printf("\n");
            solution = true;
        }
    }
    if(!solution)
    {
        printf("No solutions found\n");
    }
}

