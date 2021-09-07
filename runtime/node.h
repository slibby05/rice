#ifndef NODE_H
#define NODE_H

#include<stdbool.h>

struct Node;

typedef union field
{
    struct Node*  n; //normal node child
    union field*  a; //array child (for children[3])
    unsigned long c; //primitive character
    long          i; //primitive int
    double        f; //primitive float
} field ;


typedef struct
{
    const unsigned char tag;
    const unsigned int arity;
    const char* name;
    const void (*hnf)(field);
} Symbol;


typedef struct Node
{
    int missing;
    unsigned long nondet;
    Symbol* symbol;
    field children[4];
} Node;

#endif // NODE_H
