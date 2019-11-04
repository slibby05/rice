#ifndef RUNTIME_H
#define RUNTIME_H

#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "node.h"
#include "stack.h"
#include "debug.h"

#define FAIL_TAG     0
#define FUNCTION_TAG 1
#define FORWARD_TAG  2
#define CHOICE_TAG   3
#define FREE_TAG     4


void CTR_hnf(Node* root);
void choice_hnf(Node* root);
void FORWARD_hnf(Node* root);
void fail(Node* node);
void set_node(Node* root, Node* rep);
void forward(Node* root, Node* n);
void set_choice(Node* root, Node* left, Node* right);
Node* make_choice(Node* left, Node* right);
Node* free_var();
void save(Node* n);
void push_choice(Node* left, Node* right);
void choose(Node* root);
void undo();
void print_stack(Stack* s);
void print_expr(Node* n);
void nf(Node* expr);
void nf_all(Node* expr);

static Symbol fail_symbol    = { .tag = FAIL_TAG,    .arity = 0, .name = "FAIL",    .hnf = &CTR_hnf    };
static Symbol forward_symbol = { .tag = FORWARD_TAG, .arity = 1, .name = "FORWARD", .hnf = &FORWARD_hnf};
static Symbol choice_symbol  = { .tag = CHOICE_TAG,  .arity = 2, .name = "?",       .hnf = choice_hnf  };
static Symbol free_symbol    = { .tag = FREE_TAG,    .arity = 0, .name = "free",    .hnf = CTR_hnf     };



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


void fail(Node* node)
{
    node->missing = 0;
    node->symbol = &fail_symbol;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
}

void set_node(Node* root, Node* rep)
{
    bool nondet = root->nondet;
    memcpy(root,rep,sizeof(Node));
    root->nondet |= nondet;
}

void forward(Node* root, Node* n)
{
    root->nondet = true;
    root->missing = 0;
    root->symbol = &forward_symbol;
    root->children[0] = n;
    root->children[1] = NULL;
    root->children[2] = NULL;
}

void set_choice(Node* root, Node* left, Node* right)
{
    root->missing = 0;
    root->symbol = &choice_symbol;
    root->children[0] = left;
    root->children[1] = right;
    root->children[2] = NULL;
}

Node* make_choice(Node* left, Node* right)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->nondet = false;
    n->missing = 0;
    n->symbol = &choice_symbol;
    n->children[0] = left;
    n->children[1] = right;
    n->children[2] = NULL;
    return n;
}

Node* free_var()
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->nondet = false;
    n->missing = 0;
    n->symbol = &free_symbol;
    n->children[0] = NULL;
    n->children[1] = NULL;
    n->children[2] = NULL;
    return n;
}


//////////////////////////////////////////////////////////////////////////////
// code for backtracking
//////////////////////////////////////////////////////////////////////////////


// the backtracking stack can be used pretty much anywhere
// So it almost has to be a global variable.
// The only alternative is to pass it to every single function.
Stack* bt_stack;

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
        frame->lhs->nondet = false;
        frame = pop(bt_stack);
        debug(MED, "UNDOING ");
        debug_frame(MED, frame->lhs, frame->rhs);
    }
    memcpy(frame->lhs, frame->rhs, sizeof(Node));
    frame->lhs->nondet = false;
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

#endif //RUNTIME_H
