#include "test.h"
#include <stdio.h>
#include "runtime.h"

//////////////////////////////////////////////////////////////////////////
// Runtime code
//////////////////////////////////////////////////////////////////////////

int main()
{
    bt_stack = new_stack();

    Node* expr = make_last(make_CONS(make_TRUE(),
                           make_CONS(make_TRUE(),
                           make_CONS(make_TRUE(),
                           make_CONS(make_FALSE(), make_NIL())))));
    nf_all(expr);

    return 0;
}
