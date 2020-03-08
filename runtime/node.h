#ifndef NODE_H
#define NODE_H

#include<stdbool.h>

struct Node;

typedef struct
{
    const unsigned char tag;
    const unsigned int arity;
    const char* name;
    const void (*hnf)(struct Node*);
} Symbol;

typedef struct Node
{
    bool nondet;
    Symbol* symbol;
    struct Node* children[4];
} Node;

#endif // NODE_H
