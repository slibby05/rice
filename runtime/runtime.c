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
    while(root->children[0]->symbol->tag == FORWARD_TAG)
    {
        debug_expr(LOW, root);
        root->children[0] = root->children[0]->children[0];
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
    Node* left  = root->children[0];
    Node* right = root->children[1];

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
    if(n->nondet)
    {
        printf("?");
    }
    if(n->symbol->arity)
    {
        printf("(");
        for(int i = n->symbol->arity-1; i > 0; i--)
        {
            print_expr(n->children[i]);
            printf(", ");
        }
        print_expr(n->children[0]);
        printf(")");
    }
}

void nf(Node* expr)
{
    debug(LOW, "solving: ");
    debug_expr(LOW, expr);
    // if we're a constructor, then we don't ned to put ourselves in head normal form
    if(expr->symbol->hnf)
    {
        expr->symbol->hnf(expr);
    }
    debug(LOW, "HNF: ");
    debug_expr(LOW, expr);
    for(int i = expr->symbol->arity-1; i >= 0; i--)
    {
        if(expr->children[i])
        {
            nf(expr->children[i]);
            if(expr->children[i]->symbol->tag == FAIL_TAG)
            {
                fail(expr);
            }
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
            print_expr(expr);
            printf("\n");
            solution = true;
        }
    }
    if(!solution)
    {
        printf("No solutions found\n");
    }
}

