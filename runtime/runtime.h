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
#define INT_TAG      5
#define FLOAT_TAG    5
#define CHAR_TAG     5
#define PART_TAG     5


void CTR_hnf(Node* root);
void choice_hnf(Node* root);
void FORWARD_hnf(Node* root);
//void apply_hnf(Node* root);
void save(Node* n);
void push_choice(Node* left, Node* right);
void choose(Node* root);
void undo();
void print_stack(Stack* s);
void print_expr(Node* n);
void nf(Node* expr);
void nf_all(Node* expr);

static Symbol fail_symbol    = { .tag = FAIL_TAG,     .arity = 0, .name = "FAIL",    .hnf = &CTR_hnf    };
static Symbol forward_symbol = { .tag = FORWARD_TAG,  .arity = 1, .name = "FORWARD", .hnf = &FORWARD_hnf};
static Symbol choice_symbol  = { .tag = CHOICE_TAG,   .arity = 2, .name = "?",       .hnf = choice_hnf  };
static Symbol free_symbol    = { .tag = FREE_TAG,     .arity = 0, .name = "free",    .hnf = CTR_hnf     };
static Symbol int_symbol     = { .tag = INT_TAG,      .arity = 1, .name = "int",     .hnf = CTR_hnf     };
static Symbol char_symbol    = { .tag = CHAR_TAG,     .arity = 1, .name = "char",    .hnf = CTR_hnf     };
static Symbol float_symbol   = { .tag = FLOAT_TAG,    .arity = 1, .name = "float",   .hnf = CTR_hnf     };
static Symbol part_symbol    = { .tag = PART_TAG,     .arity = 0, .name = "part",    .hnf = CTR_hnf     };
//static Symbol apply_symbol   = { .tag = FUNCTION_TAG, .arity = 0, .name = "apply",   .hnf = apply_hnf   };


// the backtracking stack can be used pretty much anywhere
// So it almost has to be a global variable.
// The only alternative is to pass it to every single function.
Stack* bt_stack;



__attribute__((always_inline)) 
static inline void fail(Node* node)
{
    node->symbol = &fail_symbol;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
    node->children[3] = NULL;
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
    root->symbol = &forward_symbol;
    root->children[0] = n;
    root->children[1] = NULL;
    root->children[2] = NULL;
    root->children[3] = NULL;
}

__attribute__((always_inline)) 
static inline void set_choice(Node* root, Node* left, Node* right)
{
    root->symbol = &choice_symbol;
    root->children[0] = left;
    root->children[1] = right;
    root->children[2] = NULL;
    root->children[3] = NULL;
}

__attribute__((always_inline)) 
static inline Node* make_choice(Node* left, Node* right)
{
    Node* n = (Node*)calloc(1, sizeof(Node));
    n->nondet = false;
    n->symbol = &choice_symbol;
    n->children[0] = left;
    n->children[1] = right;
    return n;
}


__attribute__((always_inline)) 
static inline void set_int(Node* root, long i)
{
    root->symbol = &int_symbol;
    root->children[0] = (Node*)i;
    root->children[1] = NULL;
    root->children[2] = NULL;
    root->children[3] = NULL;
}

__attribute__((always_inline)) 
static inline Node* make_int(long i)
{
    Node* n = (Node*)calloc(1, sizeof(Node));
    n->symbol = &int_symbol;
    n->children[0] = (Node*)i;
    return n;
}

__attribute__((always_inline)) 
static inline void set_char(Node* root, char c)
{
    root->symbol = &char_symbol;
    root->children[0] = (Node*)c;
    root->children[1] = NULL;
    root->children[2] = NULL;
    root->children[3] = NULL;
}

__attribute__((always_inline)) 
static inline Node* make_char(char c)
{
    Node* n = (Node*)calloc(1, sizeof(Node));
    n->symbol = &char_symbol;
    n->children[0] = (Node*)c;
    return n;
}

__attribute__((always_inline)) 
static inline void set_float(Node* root, double f)
{
    root->symbol = &float_symbol;
    root->children[0] = *(Node**)&f;
    root->children[1] = NULL;
    root->children[2] = NULL;
    root->children[3] = NULL;
}

__attribute__((always_inline)) 
static inline Node* make_float(double f)
{
    Node* n = (Node*)calloc(1, sizeof(Node));
    n->symbol = &float_symbol;
    n->children[0] = *(Node**)&f;
    return n;
}


__attribute__((always_inline)) 
static inline Node* free_var()
{
    Node* n = (Node*)calloc(1, sizeof(Node));
    n->symbol = &free_symbol;
    return n;
}

////////////////////////////////////////////////////////////////////////
//
// Partial application
//
////////////////////////////////////////////////////////////////////////

/*
__attribute__((always_inline)) 
static inline Node* set_apply0(Node* root, Node* f)
{
    root->symbol = &apply_symbol;
    root->children[0] = f;
}

__attribute__((always_inline)) 
static inline Node* make_apply0(Node* f)
{
    Node* n = (Node*)calloc(1, sizeof(Node));
    n->symbol = &apply_symbol;
    n->children[0] = f;
    return n;
}

__attribute__((always_inline)) 
static inline Node* set_PART0(Symbol* sym, int missing)
{
    root->symbol = &PART_symbol;
    root->children[0] = (Node*)symbol;
    root->children[1] = (Node*)missing;
    return n;
}

__attribute__((always_inline)) 
static inline Node* make_PART0(Symbol* sym, Node* v1)
{
    Node* n = (Node*)calloc(1, sizeof(Node));
    n->symbol = sym;
    n->children[0] = v1;
    return n;
}
*/

#endif //RUNTIME_H
