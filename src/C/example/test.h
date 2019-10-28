#ifndef TEST_H
#define TEST_H

#include "runtime.h"

unsigned char TRUE_SYMBOL;
unsigned char FALSE_SYMBOL;
unsigned char NIL_SYMBOL;
unsigned char CONS_SYMBOL;
unsigned char eqbool_SYMBOL;
unsigned char eqlist_SYMBOL;
unsigned char append_SYMBOL;
unsigned char ifte_SYMBOL;
unsigned char ift_SYMBOL;
unsigned char last_SYMBOL;
bool test_SYMBOLS = false;


void eqbool_hnf(Node* root);
void eqlist_hnf(Node* root);
void append_hnf(Node* root);
void ifte_hnf(Node* root);
void ift_hnf(Node* root);
void last_hnf(Node* root);

//data test.BOOL
//  = test.TRUE 0
//  | test.FALSE 0

const unsigned char TRUE  = 5;
const unsigned char FALSE = 6;

void set_TRUE(Node* node)
{
    node->tag = TRUE;
    node->arity = 0;
    node->symbol = TRUE_SYMBOL;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
    node->hnf = NULL;
}

Node* make_TRUE()
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->tag = TRUE;
    node->nondet = false;
    node->arity = 0;
    node->symbol = TRUE_SYMBOL;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
    node->hnf = NULL;
    return node;
}


void set_FALSE(Node* node)
{
    node->tag = FALSE;
    node->arity = 0;
    node->symbol = FALSE_SYMBOL;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
    node->hnf = NULL;
}
Node* make_FALSE()
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->tag = FALSE;
    node->nondet = false;
    node->arity = 0;
    node->symbol = FALSE_SYMBOL;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
    node->hnf = NULL;
    return node;
}

//data test.LIST
//  = test.NIL 0
//  | test.CONS 2

const unsigned char NIL  = 5;
const unsigned char CONS = 6;


void set_NIL(Node* node)
{
    node->tag = NIL;
    node->arity = 0;
    node->symbol = NIL_SYMBOL;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
    node->hnf = NULL;
}
Node* make_NIL()
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->tag = NIL;
    node->nondet = false;
    node->arity = 0;
    node->symbol = NIL_SYMBOL;
    node->children[0] = NULL;
    node->children[1] = NULL;
    node->children[2] = NULL;
    node->hnf = NULL;
    return node;
}

void set_CONS(Node* node, Node* v1, Node* v2)
{
    node->tag = CONS;
    node->arity = 0;
    node->symbol = CONS_SYMBOL;
    node->children[0] = v2;
    node->children[1] = v1;
    node->children[2] = NULL;
    node->hnf = NULL;
}
Node* make_CONS(Node* v1, Node* v2)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->tag = CONS;
    node->nondet = false;
    node->arity = 0;
    node->symbol = CONS_SYMBOL;
    node->children[0] = v2;
    node->children[1] = v1;
    node->children[2] = NULL;
    node->hnf = NULL;
    return node;
}


void set_last(Node* root, Node* v1)
{
    root->nondet = false;
    root->arity = 0;
    root->tag = FUNCTION;
    root->symbol = last_SYMBOL;
    root->children[0] = v1;
    root->children[1] = NULL;
    root->children[2] = NULL;
    root->hnf = &last_hnf;
}

void set_ift(Node* root, Node* v1, Node* v2)
{
    root->nondet = false;
    root->arity = 0;
    root->tag = FUNCTION;
    root->symbol = ift_SYMBOL;
    root->children[0] = v2;
    root->children[1] = v1;
    root->children[2] = NULL;
    root->hnf = &ift_hnf;
}

void set_ifte(Node* root, Node* v1, Node* v2, Node* v3)
{
    root->nondet = false;
    root->arity = 0;
    root->tag = FUNCTION;
    root->symbol = ifte_SYMBOL;
    root->children[0] = v3;
    root->children[1] = v2;
    root->children[2] = v1;
    root->hnf = &ifte_hnf;
}

void set_append(Node* root, Node* v1, Node* v2)
{
    root->nondet = false;
    root->arity = 0;
    root->tag = FUNCTION;
    root->symbol = append_SYMBOL;
    root->children[0] = v2;
    root->children[1] = v1;
    root->children[2] = NULL;
    root->hnf = &append_hnf;
}

void set_eqlist(Node* root, Node* v1, Node* v2)
{
    root->nondet = false;
    root->arity = 0;
    root->tag = FUNCTION;
    root->symbol = eqlist_SYMBOL;
    root->children[0] = v2;
    root->children[1] = v1;
    root->children[2] = NULL;
    root->hnf = &eqlist_hnf;
}

void set_eqbool(Node* root, Node* v1, Node* v2)
{
    root->nondet = false;
    root->arity = 0;
    root->tag = FUNCTION;
    root->symbol = eqbool_SYMBOL;
    root->children[0] = v2;
    root->children[1] = v1;
    root->children[2] = NULL;
    root->hnf = &eqbool_hnf;
}

//////////////////
// Make functions
//////////////////

Node* make_last(Node* v1)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->nondet = false;
    n->arity = 0;
    n->tag = FUNCTION;
    n->symbol = last_SYMBOL;
    n->children[0] = v1;
    n->children[1] = NULL;
    n->children[2] = NULL;
    n->hnf = &last_hnf;
    return n;
}

Node* make_ift(Node* v1, Node* v2)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->nondet = false;
    n->arity = 0;
    n->tag = FUNCTION;
    n->symbol = ift_SYMBOL;
    n->children[0] = v2;
    n->children[1] = v1;
    n->children[2] = NULL;
    n->hnf = &ift_hnf;
    return n;
}
void make_ifte(Node* v1, Node* v2, Node* v3)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->nondet = false;
    n->arity = 0;
    n->tag = FUNCTION;
    n->symbol = ifte_SYMBOL;
    n->children[0] = v3;
    n->children[1] = v2;
    n->children[2] = v1;
    n->hnf = &ifte_hnf;
}
Node* make_append(Node* v1, Node* v2)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->nondet = false;
    n->arity = 0;
    n->tag = FUNCTION;
    n->symbol = append_SYMBOL;
    n->children[0] = v2;
    n->children[1] = v1;
    n->children[2] = NULL;
    n->hnf = &append_hnf;
    return n;
}
Node* make_eqlist(Node* v1, Node* v2)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->nondet = false;
    n->arity = 0;
    n->tag = FUNCTION;
    n->symbol = eqlist_SYMBOL;
    n->children[0] = v2;
    n->children[1] = v1;
    n->children[2] = NULL;
    n->hnf = &eqlist_hnf;
    return n;
}
Node* make_eqbool(Node* v1, Node* v2)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->nondet = false;
    n->arity = 0;
    n->tag = FUNCTION;
    n->symbol = eqbool_SYMBOL;
    n->children[0] = v2;
    n->children[1] = v1;
    n->children[2] = NULL;
    n->hnf = &eqbool_hnf;
    return n;
}

#endif //TEST_H
