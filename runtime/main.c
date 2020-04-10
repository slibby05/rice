#include "test.h"
#include <stdio.h>
#include "runtime.h"

//////////////////////////////////////////////////////////////////////////
// Runtime code
//////////////////////////////////////////////////////////////////////////

int main()
{
    bt_stack = new_stack();

    Node* expr = make_test_last(make_test_CONS(make_test_TRUE(0),
                                make_test_CONS(make_test_TRUE(0),
                                make_test_CONS(make_test_TRUE(0),
                                make_test_CONS(make_test_FALSE(0), make_test_NIL(0),0),0),0),0),0);
    nf_all(expr);

    return 0;
}
