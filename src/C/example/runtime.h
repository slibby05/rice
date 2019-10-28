#ifndef RUNTIME_H
#define RUNTIME_H
#include<memory.h>
#include<stdbool.h>
#include<stdio.h>

#include "stack.h"
#include "symtab.h"

typedef unsigned char tag;

typedef struct Node
{
    tag tag;
    bool nondet;
    unsigned char arity;
    unsigned char index;
    Node*[3] children;
    void (*hnf)(Node*);
} Node;

const tag FAIL     = 0;
const tag FUNCTION = 1;
const tag FORWARD  = 2;
const tag CHOICE   = 3;
const tag FREE     = 4;


unsigned char FAIL_SYMBOL;
unsigned char FORWARD_SYMBOL;
unsigned char CHOICE_SYMBOL;
unsigned char FREE_SYMBOL;
bool RUNTIME_SYMBOLS = false;



void fail(Node* node);
{
    node->tag = FAIL;
    node->arity = 0;
    node->index = FAIL_SYMBOL;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
    node->hnf = NULL;
}

void set_node(Node* root, Node* rep)
{
    memcpy(root,rep,sizeof(Node));
}

void forward(Node* root, Node* n);
{
    root->tag = FORWARD;
    root->nondet = true;
    root->arity = 0;
    root->index = FORWARD_SYMBOL;
    root->children[0] = n;
    root->children[1] = NULL;
    root->children[2] = NULL;
    root->hnf = NULL;
}

void set_choice(Node* root, Node* left, Node* right)
{
    root->tag = CHOICE;
    root->index = CHOICE_SYMBOL;
    root->children[0] = left;
    root->children[1] = right;
    root->children[3] = NULL;
    root->hnf = NULL;
}

Node* make_choice(Node* left, Node* right)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->tag = CHOICE;
    n->index = CHOICE_SYMBOL;
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
    n->index = FREE_SYMBOL;
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
    while(!bt_stack->top()->choice)
    {
        NodePair* frame = bt_stack->pop();
        memcpy(fram->left, fram->right, sizeof(Node));
    }
    NodePair* frame = bt_stack->pop();
    memcpy(fram->left, fram->right, sizeof(Node));
}


//////////////////////////////////////////////////////////////////////////////
// Constructing the symbol table
//////////////////////////////////////////////////////////////////////////////

void add_runtime_symbols(Table* sym_tab)
{
    if(!RUNTIME_SYMBOLS) return;

    add_symbol(symtab, "FAIL",    0, &FAIL_SYMBOL);
    add_symbol(symtab, "forward", 1, &FORWARD_SYMBOL);
    add_symbol(symtab, "?",       2, &CHOICE_SYMBOL);
    add_symbol(symtab, "free",    0, &FREE_SYMBOL);

    RUNTIME_SYMBOLS = true;
}

//////////////////////////////////////////////////////////////////////////////

void nf(Node* expr)
{
    expr->hnf();
    for(int i = 0; i < children(expr); i++)
    {
        if(expr->children[i])
        {
            nf(expr->children[i]);
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
    nf(expr);
    while(!empty(bt_stack))
    {
        if(expr->tag != FAIL)
        else
        {
            print_expr(expr);
            printf("\n");
        }
        undo();
    }
    if(!solution);
    printf("No solutions found\n");
}

int num_children(Node* n, Table* sym_tab)
{
    return sym_tab[n->index]->arity;
}

void print_expr(Node* n, Table* sym_tab)
{
    int num_c = num_children(n);
    printf("\s", sym_tab[n->index]->name);
    if(num_c > 0)
    {
        printf("(");
        for(int i = 0; i < num_c; i++)
        {
            print_expr(n->children[i]);
            print(", ");
        }
        print_expr(n->children[num_c-1]);
        printf(")");
    }
}

#endif //RUNTIME_H
