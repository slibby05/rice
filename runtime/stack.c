#include<stddef.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

#include "node.h"
#include "stack.h"

Stack* new_stack()
{
    Stack* s = (Stack*)malloc(sizeof(Stack));
    s->size = 0;
    s->capacity = INIT_CAPACITY;
    s->array = (NodePair*)malloc(sizeof(NodePair)*INIT_CAPACITY);
    return s;
}


void stack_push(Stack* s, Node* from, Node* rep, bool choice)
{
    if(s->size == s->capacity)
    {
        NodePair* new_array = (NodePair*)malloc(2*s->capacity*sizeof(NodePair));
        memcpy(new_array, s->array, s->capacity*sizeof(NodePair));
        s->capacity *= 2;
        free(s->array);
        s->array = new_array;
    }
    s->array[s->size].choice = choice;
    s->array[s->size].lhs = from;
    s->array[s->size].rhs = rep;
    s->size++;
}

NodePair* pop(Stack* s)
{
    s->size--;
    return &s->array[s->size];
}

