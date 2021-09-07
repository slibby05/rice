#ifndef STACK_H
#define STACK_H

#include<stddef.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

#include "node.h"

#define INIT_CAPACITY 20

typedef struct FieldPair
{
    bool choice;
    field lhs;
    field rhs;
} FieldPair;

typedef struct
{
    FieldPair* array;
    size_t size;
    size_t capacity;
} Stack;

Stack* new_stack();
void stack_push(Stack* s, field from, field rep, bool choice);
FieldPair* pop(Stack* s);
bool empty(Stack* s);

#endif
