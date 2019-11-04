#ifndef TEST_H
#define TEST_H

#include "runtime.h"

void eqbool_hnf(Node* root);
void eqlist_hnf(Node* root);
void append_hnf(Node* root);
void ifte_hnf(Node* root);
void ift_hnf(Node* root);
void last_hnf(Node* root);

//data test.BOOL
//  = test.TRUE 0
//  | test.FALSE 0

#define TRUE_TAG  5
#define FALSE_TAG 6

//data test.LIST
//  = test.NIL 0
//  | test.CONS 2

#define NIL_TAG  5
#define CONS_TAG 6

static Symbol TRUE_symbol   = { .tag = TRUE_TAG,     .arity = 0, .name = "TRUE",   .hnf = &CTR_hnf   };
static Symbol FALSE_symbol  = { .tag = FALSE_TAG,    .arity = 0, .name = "FALSE",  .hnf = &CTR_hnf   };
static Symbol NIL_symbol    = { .tag = NIL_TAG,      .arity = 0, .name = "NIL",    .hnf = &CTR_hnf   };
static Symbol CONS_symbol   = { .tag = CONS_TAG,     .arity = 2, .name = "CONS",   .hnf = &CTR_hnf   };
static Symbol eqbool_symbol = { .tag = FUNCTION_TAG, .arity = 2, .name = "eqbool", .hnf = &eqbool_hnf};
static Symbol eqlist_symbol = { .tag = FUNCTION_TAG, .arity = 2, .name = "eqlist", .hnf = &eqlist_hnf};
static Symbol append_symbol = { .tag = FUNCTION_TAG, .arity = 2, .name = "append", .hnf = &append_hnf};
static Symbol ifte_symbol   = { .tag = FUNCTION_TAG, .arity = 3, .name = "ifte",   .hnf = &ifte_hnf  };
static Symbol ift_symbol    = { .tag = FUNCTION_TAG, .arity = 2, .name = "ift",    .hnf = &ift_hnf   };
static Symbol last_symbol   = { .tag = FUNCTION_TAG, .arity = 1, .name = "last",   .hnf = &last_hnf  };


void set_TRUE(Node* node)
{
    node->missing = 0;
    node->symbol = &TRUE_symbol;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
}
void set_FALSE(Node* node)
{
    node->missing = 0;
    node->symbol = &FALSE_symbol;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
}
void set_NIL(Node* node)
{
    node->missing = 0;
    node->symbol = &NIL_symbol;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
}
void set_CONS(Node* node, Node* v1, Node* v2)
{
    node->missing = 0;
    node->symbol = &CONS_symbol;
    node->children[0] = v2;
    node->children[1] = v1;
    node->children[2] = NULL;
}
void set_eqbool(Node* root, Node* v1, Node* v2)
{
    root->missing = 0;
    root->symbol = &eqbool_symbol;
    root->children[0] = v2;
    root->children[1] = v1;
    root->children[2] = NULL;
}
void set_eqlist(Node* root, Node* v1, Node* v2)
{
    root->missing = 0;
    root->symbol = &eqlist_symbol;
    root->children[0] = v2;
    root->children[1] = v1;
    root->children[2] = NULL;
}
void set_append(Node* root, Node* v1, Node* v2)
{
    root->missing = 0;
    root->symbol = &append_symbol;
    root->children[0] = v2;
    root->children[1] = v1;
    root->children[2] = NULL;
}
void set_ifte(Node* root, Node* v1, Node* v2, Node* v3)
{
    root->missing = 0;
    root->symbol = &ifte_symbol;
    root->children[0] = v3;
    root->children[1] = v2;
    root->children[2] = v1;
}
void set_ift(Node* root, Node* v1, Node* v2)
{
    root->missing = 0;
    root->symbol = &ift_symbol;
    root->children[0] = v2;
    root->children[1] = v1;
    root->children[2] = NULL;
}
void set_last(Node* root, Node* v1)
{
    root->missing = 0;
    root->symbol = &last_symbol;
    root->children[0] = v1;
    root->children[1] = NULL;
    root->children[2] = NULL;
}

//////////////////
// Make functions
//////////////////

Node* make_TRUE()
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->nondet = false;
    node->missing = 0;
    node->symbol = &TRUE_symbol;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
    return node;
}
Node* make_FALSE()
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->nondet = false;
    node->missing = 0;
    node->symbol = &FALSE_symbol;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
    return node;
}
Node* make_NIL()
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->nondet = false;
    node->missing = 0;
    node->symbol = &NIL_symbol;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
    return node;
}
Node* make_CONS(Node* v1, Node* v2)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->nondet = false;
    node->missing = 0;
    node->symbol = &CONS_symbol;
    node->children[0] = v2;
    node->children[1] = v1;
    node->children[2] = NULL;
    return node;
}
Node* make_eqbool(Node* v1, Node* v2)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->nondet = false;
    n->missing = 0;
    n->symbol = &eqbool_symbol;
    n->children[0] = v2;
    n->children[1] = v1;
    n->children[2] = NULL;
    return n;
}
Node* make_eqlist(Node* v1, Node* v2)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->nondet = false;
    n->missing = 0;
    n->symbol = &eqlist_symbol;
    n->children[0] = v2;
    n->children[1] = v1;
    n->children[2] = NULL;
    return n;
}
Node* make_append(Node* v1, Node* v2)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->nondet = false;
    n->missing = 0;
    n->symbol = &append_symbol;
    n->children[0] = v2;
    n->children[1] = v1;
    n->children[2] = NULL;
    return n;
}
Node* make_ifte(Node* v1, Node* v2, Node* v3)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->nondet = false;
    n->missing = 0;
    n->symbol = &ifte_symbol;
    n->children[0] = v3;
    n->children[1] = v2;
    n->children[2] = v1;
    return n;
}
Node* make_ift(Node* v1, Node* v2)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->nondet = false;
    n->missing = 0;
    n->symbol = &ift_symbol;
    n->children[0] = v2;
    n->children[1] = v1;
    n->children[2] = NULL;
    return n;
}
Node* make_last(Node* v1)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->nondet = false;
    n->missing = 0;
    n->symbol = &last_symbol;
    n->children[0] = v1;
    n->children[1] = NULL;
    n->children[2] = NULL;
    return n;
}

#endif //TEST_H
