#ifndef RUNTIME_H
#define RUNTIME_H

#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "node.h"
#include "stack.h"
#include "symtab.h"

const unsigned char FAIL     = 0;
const unsigned char FUNCTION = 1;
const unsigned char FORWARD  = 2;
const unsigned char CHOICE   = 3;
const unsigned char FREE     = 4;


unsigned char FAIL_SYMBOL;
unsigned char FORWARD_SYMBOL;
unsigned char CHOICE_SYMBOL;
unsigned char FREE_SYMBOL;
bool RUNTIME_SYMBOLS = false;



void fail(Node* node)
{
    node->tag = FAIL;
    node->arity = 0;
    node->symbol = FAIL_SYMBOL;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
    node->hnf = NULL;
}

void set_node(Node* root, Node* rep)
{
    memcpy(root,rep,sizeof(Node));
}

void forward(Node* root, Node* n)
{
    root->tag = FORWARD;
    root->nondet = true;
    root->arity = 0;
    root->symbol = FORWARD_SYMBOL;
    root->children[0] = n;
    root->children[1] = NULL;
    root->children[2] = NULL;
    root->hnf = NULL;
}

void set_choice(Node* root, Node* left, Node* right)
{
    root->tag = CHOICE;
    root->symbol = CHOICE_SYMBOL;
    root->children[0] = left;
    root->children[1] = right;
    root->children[3] = NULL;
    root->hnf = NULL;
}

Node* make_choice(Node* left, Node* right)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->tag = CHOICE;
    n->symbol = CHOICE_SYMBOL;
    n->children[0] = left;
    n->children[1] = right;
    n->children[3] = NULL;
    n->hnf = NULL;
    return n;
}

Node* free_var()
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->tag = FREE;
    n->symbol = FREE_SYMBOL;
    n->children[0] = NULL;
    n->children[1] = NULL;
    n->children[3] = NULL;
    n->hnf = NULL;
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
    memcpy(saved,n, sizeof(Node));
    stack_push(bt_stack, n, saved, false);
}

//push a choice onto the backtrack stack
//This is our stopping condition for backtracking.
void push_choice(Node* left, Node* right)
{
    stack_push(bt_stack, left, right, true);
}

// backtrack until we find a choice.
// We overwrite all of the node in the stack
// with their saved values.
// Then we recompute the nodes with the new choice.
void undo()
{
    if(bt_stack->size == 0) return;
    NodePair* frame = pop(bt_stack);
    while(!frame->choice)
    {
        memcpy(frame->lhs, frame->rhs, sizeof(Node));
        frame = pop(bt_stack);
    }
    memcpy(frame->lhs, frame->rhs, sizeof(Node));
}


//////////////////////////////////////////////////////////////////////////////
// Constructing the symbol table
//////////////////////////////////////////////////////////////////////////////

void add_runtime_symbols(Table* sym_tab)
{
    if(RUNTIME_SYMBOLS) return;

    add_symbol(sym_tab, "FAIL",    0, &FAIL_SYMBOL);
    add_symbol(sym_tab, "forward", 1, &FORWARD_SYMBOL);
    add_symbol(sym_tab, "?",       2, &CHOICE_SYMBOL);
    add_symbol(sym_tab, "free",    0, &FREE_SYMBOL);

    RUNTIME_SYMBOLS = true;
}

//////////////////////////////////////////////////////////////////////////////


int num_children(Node* n, Table* sym_tab)
{
    return sym_tab->symbols[n->symbol].arity;
}

void print_expr(Node* n, Table* sym_tab)
{
    int num_c = num_children(n, sym_tab);
    printf("%s", sym_tab->symbols[n->symbol].name);
    if(num_c > 0)
    {
        printf("(");
        for(int i = num_c-1; i > 0; i--)
        {
            print_expr(n->children[i], sym_tab);
            printf(", ");
        }
        print_expr(n->children[0], sym_tab);
        printf(")");
    }
}

void nf(Node* expr, Table* sym_tab)
{
    // if we're a constructor, then we don't ned to put ourselves in head normal form
    if(expr->hnf)
    {
        expr->hnf(expr);
    }
    for(int i = num_children(expr, sym_tab)-1; i >= 0; i--)
    {
        if(expr->children[i])
        {
            nf(expr->children[i], sym_tab);
            if(expr->children[i]->tag == FAIL)
            {
                fail(expr);
            }
        }
    }
}

void nf_all(Node* expr, Table* sym_tab)
{
    bool solution = false;
    do {
        nf(expr, sym_tab);
        if(expr->tag != FAIL)
        {
            print_expr(expr, sym_tab);
            printf("\n");
            solution = true;
        }
        undo();
    } while(bt_stack->size > 0);
    if(!solution)
    {
        printf("No solutions found\n");
    }
}

#endif //RUNTIME_H
