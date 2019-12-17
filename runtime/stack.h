#ifndef STACK_H
#define STACK_H

#include<stddef.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

#include "node.h"

#define INIT_CAPACITY 20

typedef struct NodePair
{
    bool choice;
    Node* lhs;
    Node* rhs;
} NodePair;

typedef struct
{
    NodePair* array;
    size_t size;
    size_t capacity;
} Stack;

Stack* new_stack();
void stack_push(Stack* s, Node* from, Node* rep, bool choice);
NodePair* pop(Stack* s);

#endif
