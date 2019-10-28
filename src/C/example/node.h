#ifndef NODE_H
#define NODE_H

typedef struct Node
{
    unsigned char tag;
    bool nondet;
    unsigned char arity;
    unsigned char symbol;
    struct Node* children[3];
    void (*hnf)(struct Node*);
} Node;

#endif // NODE_H
