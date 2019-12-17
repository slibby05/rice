#ifndef RUNTIME_H
#define RUNTIME_H

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


// the backtracking stack can be used pretty much anywhere
// So it almost has to be a global variable.
// The only alternative is to pass it to every single function.
Stack* bt_stack;



__attribute__((always_inline)) 
static inline void fail(Node* node)
{
    node->missing = 0;
    node->symbol = &fail_symbol;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
}

__attribute__((always_inline)) 
static inline void set_node(Node* root, Node* rep)
{
    bool nondet = root->nondet;
    memcpy(root,rep,sizeof(Node));
    root->nondet |= nondet;
}

__attribute__((always_inline)) 
static inline void forward(Node* root, Node* n)
{
    root->nondet = true;
    root->missing = 0;
    root->symbol = &forward_symbol;
    root->children[0] = n;
    root->children[1] = NULL;
    root->children[2] = NULL;
}

__attribute__((always_inline)) 
static inline void set_choice(Node* root, Node* left, Node* right)
{
    root->missing = 0;
    root->symbol = &choice_symbol;
    root->children[0] = left;
    root->children[1] = right;
    root->children[2] = NULL;
}

__attribute__((always_inline)) 
static inline Node* make_choice(Node* left, Node* right)
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

__attribute__((always_inline)) 
static inline Node* free_var()
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

#endif //RUNTIME_H
