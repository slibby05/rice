#include<stddef.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

#include "node.h"
#include "stack.h"
#include "debug.h"
#include "runtime.h"

Stack* new_stack()
{
    Stack* s = (Stack*)malloc(sizeof(Stack));
    s->size = 0;
    s->capacity = INIT_CAPACITY;
    s->array = (FieldPair*)malloc(sizeof(FieldPair)*INIT_CAPACITY);
    return s;
}


void stack_push(Stack* s, field from, field rep, bool choice)
{
    if(s->size == s->capacity)
    {
        FieldPair* new_array = (FieldPair*)malloc(2*s->capacity*sizeof(FieldPair));
        memcpy(new_array, s->array, s->capacity*sizeof(FieldPair));
        s->capacity *= 2;
        free(s->array);
        s->array = new_array;
    }
    s->array[s->size].choice = choice;
    s->array[s->size].lhs = from;
    s->array[s->size].rhs = rep;
    debug(HIGH, "pushing ");
    debug_frame(HIGH, &s->array[s->size]);
    debug(HIGH, "\n");
    s->size++;
}

FieldPair* pop(Stack* s)
{
    s->size--;
    debug_frame(HIGH, &s->array[s->size]);
    debug(HIGH, "\n");
    return &s->array[s->size];
}

bool empty(Stack* s)
{
    return s->size == 0;
}
