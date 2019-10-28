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

//data test.BOOL
//  = test.TRUE 0
//  | test.FALSE 0

const tag TRUE  = 5;
const tag FALSE = 6;

inline void set_TRUE(Node* node)
{
    node->tag = TRUE;
    node->arity = 0;
    node->children[0] == NULL;
    node->children[1] == NULL;
    node->children[2] == NULL;
    node->hnf = NULL;
}

inline Node* make_TRUE()
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->tag = TRUE;
    node->nondet = false;
    node->arity = 0;
    node->children[0] == NULL;
    node->children[1] == NULL;
    node->children[2] == NULL;
    node->hnf = NULL:
    return node;
}


inline void set_FALSE(Node* node)
{
    node->tag = FALSE;
    node->arity = 0;
    node->children[0] == NULL;
    node->children[1] == NULL;
    node->children[2] == NULL;
    node->hnf = NULL;
}
inline Node* make_FALSE()
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->tag = FALSE;
    node->nondet = false;
    node->arity = 0;
    node->children[0] == NULL;
    node->children[1] == NULL;
    node->children[2] == NULL;
    node->hnf = NULL;
    return node;
}

//data test.LIST
//  = test.NIL 0
//  | test.CONS 2

const tag NIL  = 5;
const tag CONS = 6;


inline void set_NIL(Node* node)
{
    node->tag = NIL;
    node->arity = 0;
    node->children[0] == NULL;
    node->children[1] == NULL;
    node->children[2] == NULL;
    node->hnf = NULL;
}
inline Node* make_NIL()
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->tag = NIL;
    node->nondet = false;
    node->arity = 0;
    node->children[0] == NULL;
    node->children[1] == NULL;
    node->children[2] == NULL;
    node->hnf = NULL;
    return node;
}

inline void set_CONS(Node* node)
{
    node->tag = CONS;
    node->arity = 0;
    node->children[0] == NULL;
    node->children[1] == NULL;
    node->children[2] == NULL;
    node->hnf = NULL;
}
inline Node* make_CONS(Node* v0, Node* v1)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->tag = CONS;
    node->nondet = false;
    node->arity = 0;
    node->children[0] == v0;
    node->children[1] == v1;
    node->children[2] == NULL;
    node->hnf = NULL;
    return node;
}


inline Node* set_last(Node* v1, Node* v2, Node* v3)
{
    Node* n = (Node*)malloc(sizeof(Node));
    node->nondet = false;
    node->arity = 0;
    node->tag = FUNCITON;
    node->children[0] = v3;
    node->children[1] = v2;
    node->children[2] = v1;
    node->hnf = NULL;
    return n;
}
inline Node* set_ift(Node* v1, Node* v2)
{
    Node* n = (Node*)malloc(sizeof(Node));
    node->nondet = false;
    node->arity = 0;
    node->tag = FUNCITON;
    node->children[0] = v2;
    node->children[1] = v1;
    node->children[2] = NULL;
    node->hnf = NULL;
    return n;
}
inline Node* set_ifte(Node* n)
{
    Node* n = (Node*)malloc(sizeof(Node));
    node->nondet = false;
    node->arity = 0;
    node->tag = FUNCITON;
    node->children[0] = v1;
    node->children[1] = NULL;
    node->children[2] = NULL;
    node->hnf = NULL;
    return n;
}
inline Node* set_append(Node* v1, Node* v1)
{
    Node* n = (Node*)malloc(sizeof(Node));
    node->nondet = false;
    node->arity = 0;
    node->tag = FUNCITON;
    node->children[0] = v2;
    node->children[1] = v1;
    node->children[2] = NULL;
    node->hnf = NULL;
    return n;
}
inline Node* set_eqlist(Node* v1, Node* v2)
{
    Node* n = (Node*)malloc(sizeof(Node));
    node->nondet = false;
    node->arity = 0;
    node->tag = FUNCITON;
    node->children[0] = v2;
    node->children[1] = v1;
    node->children[2] = NULL;
    node->hnf = NULL;
    return n;
}
inline Node* set_eqbool(Node* v1, Node* v2)
{
    Node* n = (Node*)malloc(sizeof(Node));
    node->nondet = false;
    node->arity = 0;
    node->tag = FUNCITON;
    node->children[0] = v2;
    node->children[1] = v1;
    node->children[2] = NULL;
    node->hnf = NULL;
    return n;
}


void eqbool_hnf(Node* root);
void eqlist_hnf(Node* root);
void append_hnf(Node* root);
void ifte_hnf(Node* root);
void ift_hnf(Node* root);
void last_hnf(Node* root);

#endif //TEST_H
