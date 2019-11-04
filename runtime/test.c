#include "test.h"
#include "debug.h"

#include <stdio.h>

#include "runtime.h"

// rules for Non-determinism:
// If all arguments in a case (needed nodes) are deterministic,
// then I can just reduce
// If any argument is non-deterministic (found by evaluating it)
// then I mark this node as non-deterministic
// If this node is deterministc, then the last thing I do vefore I update the
// node is save it and a copy to the stack. This has to be the very last thing I
// do.
//
// Suppose I were to save the node when the argument is evaluated
// then we coudl have the function
// solve2 True True = True
//
// ifI call (solve2 (False ? True) (False ? True)
// Then I need to produce the single True answer.
// Since both of the arguments are needed, and non-deterministic,
// I need to be careful to not push solve2 onto the backtracking stack twice.
// If I push after I've evaluated one of the arguments, then I will end up
// pushing it twice.
//
// This means that I need to push after all of the arguments have been
// evaluated.

// eqbool TRUE  TRUE  = TRUE
// eqbool TRUE  FALSE = FALSE
// eqbool FALSE TRUE  = FALSE
// eqbool FALSE FALSE = TRUE
//
// function test.eqbool
//  param v1
//  param v2
//  v1 := ROOT[0]
//  v2 := ROOT[1]
//  case v1 of
//    test.TRUE -> case v2 of
//                   test.TRUE -> return NODE (TRUE)
//                   test.FALSE -> return NODE (FALSE)
//    test.FALSE -> case v2 of
//                    test.TRUE -> return NODE (FALSE)
//                    test.FALSE -> return NODE (TRUE)
void eqbool_hnf(Node* root)
{
    debug_expr(LOW, root);
    Node* v1;
    Node* v2;
    v1 = root->children[1];
    v2 = root->children[0];

    static void* table[] = {&&FAIL, 
                            &&FUN,  
                            &&FORWARD, 
                            &&CHOICE,
                            &&FREE, 
                            &&TRUE, 
                            &&FALSE };
    goto* table[v1->symbol->tag];

    FAIL:
    fail(root);
    return;

    FUN:
    v1->symbol->hnf(v1);
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    FORWARD:
    while(v1->children[0]->symbol->tag == FORWARD_TAG)
        v1->children[0] = v1->children[0]->children[0];
    v1 = v1->children[0];
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    CHOICE:
    choose(v1);
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    FREE:
    push_choice(v1, make_FALSE());
    set_TRUE(v1);
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    TRUE:
    {
        static void* table_0[] = {&&FAIL_0, 
                                  &&FUN_0, 
                                  &&FORWARD_0, 
                                  &&CHOICE_0,
                                  &&FREE_0, 
                                  &&TRUE_0, 
                                  &&FALSE_0};
        goto* table_0[v2->symbol->tag];
    
        FAIL_0:
        fail(root);
        return;
    
        FUN_0:
        v2->symbol->hnf(v2);
        if(v2->nondet)
            save(root);
        goto* table_0[v2->symbol->tag];
    
        FORWARD_0:
        while(v2->children[0]->symbol->tag == FORWARD_TAG)
            v2->children[0] = v1->children[0]->children[0];
        v2 = v2->children[0];
        if(v2->nondet)
            save(root);
        goto* table_0[v2->symbol->tag];
    
        CHOICE_0:
        choose(v2);
        if(v2->nondet)
            save(root);
        goto* table_0[v2->symbol->tag];
    
        FREE_0:
        push_choice(v2, make_FALSE());
        set_TRUE(v2);
        if(v2->nondet)
            save(root);
        goto* table_0[v2->symbol->tag];
    
        TRUE_0:
        set_TRUE(root);
        return;
    
        FALSE_0:
        set_FALSE(root);
        return;
    }

    FALSE:
    {
        static void* table_1[] = {&&FAIL_1, 
                                  &&FUN_1, 
                                  &&FORWARD_1, 
                                  &&CHOICE_1, 
                                  &&FREE_1, 
                                  &&TRUE_1, 
                                  &&FALSE_1 };
        goto* table_1[v2->symbol->tag];

        FAIL_1:
        fail(root);
        return;

        FUN_1:
        v2->symbol->hnf(v2);
        if(v2->nondet)
            save(root);
        goto* table_1[v2->symbol->tag];

        FORWARD_1:
        while(v2->children[0]->symbol->tag == FORWARD_TAG)
            v2->children[0] = v1->children[0]->children[0];
        v2 = v2->children[0];
        if(v2->nondet)
            save(root);
        goto* table_1[v2->symbol->tag];

        CHOICE_1:
        choose(v2);
        if(v2->nondet)
            save(root);
        goto* table_1[v2->symbol->tag];

        FREE_1:
        push_choice(v2, make_FALSE());
        set_TRUE(v2);
        if(v2->nondet)
            save(root);
        goto* table_1[v2->symbol->tag];

        TRUE_1:
        set_FALSE(root);
        return;

        FALSE_1:
        set_TRUE(root);
        return;
    }
}

// function test.eqlist
//  param v1
//  param v2
//  v1 := ROOT[0]
//  v2 := ROOT[1]
//  case v1 of
//    test.NIL -> case v2 of
//                  test.NIL -> return NODE (TRUE)
//                  test.CONS -> param v3
//                               param v4
//                               v3 := v2[0]
//                               v4 := v2[1]
//                               return NODE (FALSE)
//    test.CONS -> param v5
//                 param v6
//                 v5 := v1[0]
//                 v6 := v1[1]
//                 case v2 of
//                   test.NIL -> return NODE (FALSE)
//                   test.CONS -> param v7
//                                param v8
//                                v7 := v2[0]
//                                v8 := v2[1]
//                                return NODE (test.ifte
//                                            ,NODE (test.eqbool,v5,v7)
//                                            ,NODE (test.eqlist,v6,v8)
//                                            ,NODE (FALSE))

void eqlist_hnf(Node* root)
{
    debug_expr(LOW, root);
    Node* v1;
    Node* v2;
    v1 = root->children[1];
    v2 = root->children[0];

    static void* table[] = {&&FAIL, 
                            &&FUN, 
                            &&FORWARD,
                            &&CHOICE,
                            &&FREE,
                            &&NIL,
                            &&CONS};

    goto* table[v1->symbol->tag];

    FAIL:
    fail(root);
    return;

    FUN:
    v1->symbol->hnf(v1);
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    FORWARD:
    while(v1->children[0]->symbol->tag == FORWARD_TAG)
        v1->children[0] = v1->children[0]->children[0];
    v1 = v1->children[0];
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    CHOICE:
    choose(v1);
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    FREE:
    push_choice(v1, make_CONS(free_var(), free_var()));
    set_NIL(v1);
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    NIL:
    {
        static void* table_0[] = { &&FAIL_0, &&FUN_0, &&FORWARD_0, &&CHOICE_0,
            &&FREE_0, &&NIL_0, &&CONS_0 };
        goto* table_0[v2->symbol->tag];

        FAIL_0:
        fail(root);
        return;

        FUN_0:
        v2->symbol->hnf(v2);
        if(v2->nondet)
            save(root);
        goto* table_0[v2->symbol->tag];

        FORWARD_0:
        while(v2->children[0]->symbol->tag == FORWARD_TAG)
            v2->children[0] = v2->children[0]->children[0];
        v2 = v2->children[0];
        if(v2->nondet)
            save(root);
        goto* table_0[v2->symbol->tag];

        CHOICE_0:
        choose(v2);
        if(v2->nondet)
            save(root);
        goto* table_0[v2->symbol->tag];

        FREE_0:
        push_choice(v2, make_CONS(free_var(), free_var()));
        set_NIL(v2);
        if(v2->nondet)
            save(root);
        goto* table_0[v2->symbol->tag];

        NIL_0:
        set_TRUE(root);
        return;

        CONS_0 : 
        {
            Node* v3;
            Node* v4;
            v3 = v2->children[1];
            v4 = v2->children[0];
            set_FALSE(root);
            return;
        }
    }

    CONS:
    {
        Node* v5;
        Node* v6;
        v5 = v1->children[1];
        v6 = v1->children[0];

        static void* table_1[] = { &&FAIL_1, &&FUN_1, &&FORWARD_1, &&CHOICE_1,
            &&FREE_1, &&NIL_1, &&CONS_1 };
        goto* table_1[v2->symbol->tag];

        FAIL_1:
        fail(root);
        return;

        FUN_1:
        v2->symbol->hnf(v2);
        if(v2->nondet)
            save(root);
        goto* table_1[v2->symbol->tag];

        FORWARD_1:
        while(v2->children[0]->symbol->tag == FORWARD_TAG)
            v2->children[0] = v2->children[0]->children[0];
        v2 = v2->children[0];
        if(v2->nondet)
            save(root);
        goto* table_1[v2->symbol->tag];

        CHOICE_1:
        choose(v2);
        if(v2->nondet)
            save(root);
        goto* table_1[v2->symbol->tag];

        FREE_1:
        push_choice(v2, make_CONS(free_var(), free_var()));
        set_NIL(v2);
        if(v2->nondet)
            save(root);
        goto* table_1[v2->symbol->tag];

        NIL_1:
        set_FALSE(root);
        return;

        CONS_1:
        {
            Node* v7;
            Node* v8;
            v7 = v2->children[1];
            v8 = v2->children[0];
            set_ifte(root, make_eqbool(v5, v7), make_eqlist(v6, v8), make_FALSE());
            return;
        }
    }
}

// Curry code:
// append NIL ys = ys
// append (CONS x xs) ys = CONS x (append xs ys)
//
// flatcurry code:
//
// append :: [a] -> [a] -> [a]
// append v1 v2 = fcase v1 of
//     NIL -> v2
//     CONS v3 v4 -> CONS v3 (append v4 v2)
//
// icurry code:
// function append
//   param v1
//   param v2
//   v1 := ROOT[0]
//   v2 := ROOT[1]
//   case v1 of
//     NIL  -> return v2
//     CONS -> param v3
//             param v4
//             v3 := v1[0]
//             v4 := v1[1]
//             return NODE (CONS, v3, NODE (NIL,v4,v2))

void append_hnf(Node* root)
{
    debug_expr(LOW, root);
    Node* v1;
    Node* v2;
    v1 = root->children[1];
    v2 = root->children[0];

    static void* table[] = {&&FAIL, 
                            &&FUN, 
                            &&FORWARD, 
                            &&CHOICE, 
                            &&FREE, 
                            &&NIL, 
                            &&CONS};
    goto* table[v1->symbol->tag];

    FAIL:
    fail(root);
    return;

    FUN:
    v1->symbol->hnf(v1);
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    FORWARD:
    while(v1->children[0]->symbol->tag == FORWARD_TAG)
        v1->children[0] = v1->children[0]->children[0];
    v1 = v1->children[0];
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    CHOICE:
    choose(v1);
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    FREE:
    push_choice(v1, make_CONS(free_var(), free_var()));
    set_NIL(v1);
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    NIL:
    {
        v2->symbol->hnf(v2);
        if(v2->nondet)
        {
            save(root);
            forward(root, v2);
        }
        else
        {
            set_node(root, v2);
        }
        return;
    }

    CONS:
    {
        Node* v3;
        Node* v4;
        v3 = v1->children[1];
        v4 = v1->children[0];
        set_CONS(root, v3, make_append(v4, v2));
        return;
    }
}

// function test.ifte
//  param v1
//  param v2
//  param v3
//  v1 := ROOT[0]
//  v2 := ROOT[1]
//  v3 := ROOT[2]
//  case v1 of
//    test.TRUE -> return v2
//    test.FALSE -> return v3
void ifte_hnf(Node* root)
{
    debug_expr(LOW, root);
    Node* v1;
    Node* v2;
    Node* v3;
    v1 = root->children[2];
    v2 = root->children[1];
    v3 = root->children[0];

    static void* table[] = {&&FAIL, 
                            &&FUN, 
                            &&FORWARD, 
                            &&CHOICE,
                            &&FREE,
                            &&TRUE,
                            &&FALSE};

    goto* table[v1->symbol->tag];

    FAIL:
    fail(root);
    return;

    FUN:
    v1->symbol->hnf(v1);
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    FORWARD:
    while(v1->children[0]->symbol->tag == FORWARD_TAG)
        v1->children[0] = v1->children[0]->children[0];
    v1 = v1->children[0];
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    CHOICE:
    choose(v1);
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    FREE:
    push_choice(v1, make_FALSE());
    set_TRUE(v1);
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    TRUE:
    {
        v2->symbol->hnf(v2);
        if(v2->nondet)
        {
            save(root);
            forward(root, v2);
        }
        else
        {
            set_node(root, v2);
        }
        return;
    }

    FALSE:
    {
        v3->symbol->hnf(v3);
        if(v3->nondet)
        {
            save(root);
            forward(root, v3);
        }
        else
        {
            set_node(root, v3);
        }
        return;
    }
}

// function test.ift
//  param v1
//  param v2
//  v1 := ROOT[0]
//  v2 := ROOT[1]
//  case v1 of
//    test.TRUE -> return v2
//    test.FALSE -> return NODE (EXEMPT)
void ift_hnf(Node* root)
{
    debug_expr(LOW, root);
    Node* v1;
    Node* v2;
    v1 = root->children[1];
    v2 = root->children[0];

    static void* table[] = {&&FAIL,
                            &&FUN,
                            &&FORWARD,
                            &&CHOICE,
                            &&FREE,
                            &&TRUE,
                            &&FALSE};

    goto* table[v1->symbol->tag];

    FAIL:
    fail(root);
    return;

    FUN:
    v1->symbol->hnf(v1);
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    FORWARD:
    while(v1->children[0]->symbol->tag == FORWARD_TAG)
        v1->children[0] = v1->children[0]->children[0];
    v1 = v1->children[0];
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    CHOICE:
    choose(v1);
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    FREE:
    push_choice(v1, make_FALSE());
    set_TRUE(v1);
    if(v1->nondet)
        save(root);
    goto* table[v1->symbol->tag];

    TRUE:
    {
        v2->symbol->hnf(v2);
        if(v2->nondet)
        {
            save(root);
            forward(root, v2);
        }
        else
        {
            set_node(root, v2);
        }
        return;
    }

    FALSE:
    {
        fail(root);
    }
}

// function test.last
//  param v1
//  free v2
//  free v3
//  v1 := ROOT[0]
//  return NODE (test.ift
//              ,NODE (test.eqlist
//                    ,v1
//                    ,NODE (test.append,v3,NODE (CONS,v2,NODE (NIL))))
//              ,v2)

void last_hnf(Node* root)
{
    debug_expr(LOW, root);
    Node* v1;
    Node* v2 = free_var();
    Node* v3 = free_var();

    v1 = root->children[0];

    set_ift(root, make_eqlist(v1, make_append(v3, make_CONS(v2, make_NIL()))), v2);
    root->symbol->hnf(root);
}

//////////////////////////////////////////////////////////////////////////
// Runtime code
//////////////////////////////////////////////////////////////////////////

int main()
{
    bt_stack = new_stack();

    // last [True,True,True,False] should be False
    Node* expr = make_last(make_CONS(make_TRUE(),
                           make_CONS(make_TRUE(),
                           make_CONS(make_TRUE(), 
                           make_CONS(make_FALSE(), make_NIL())))));
    //Node* expr = make_append(make_CONS(make_TRUE(), make_NIL()),
    //                         make_CONS(make_FALSE(), make_NIL()));
    nf_all(expr);

    return 0;
}
