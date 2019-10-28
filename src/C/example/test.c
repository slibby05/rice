#include "test.h"

#include<stdio.h>

#include "runtime.h"
#include "symtab.h"

// eqbool TRUE  TRUE  = TRUE
// eqbool TRUE  FALSE = FALSE
// eqbool FALSE TRUE  = FALSE
// eqbool FALSE FALSE = TRUE
//
//function test.eqbool
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
    goto *table[v1->tag];

    FAIL:
    fail(root);
    return;

    FUN:
    v1->hnf(v1);
    if(v1->nondet)
    {
        save(root);
    }
    goto *table[v1->tag];

    FORWARD:
    while(v1->children[0]->tag == FORWARD)
        v1->children[0] = v1->children[0]->children[0];
    v1 = v1->children[0];
    goto *table[v1->tag];

    CHOICE:
    push_choice(v1, v1->children[1]);
    set_node(v1, v1->children[0]);
    goto *table[v1->tag];

    FREE:
    push_choice(v1, make_FALSE());
    set_TRUE(v1);

    TRUE:
    {
        static void* table_0[] = {&&FAIL_0, 
                                  &&FUN_0, 
                                  &&FORWARD_0, 
                                  &&CHOICE_0, 
                                  &&FREE_0, 
                                  &&TRUE_0, 
                                  &&FALSE_0};
        goto *table[v1->tag];

        FAIL_0:
        fail(root);
        return;

        FUN_0:
        v2->hnf(v2);
        if(v2->nondet)
        {
            save(root);
        }
        goto *table_0[v2->tag];

        FORWARD_0:
        while(v2->children[0]->tag == FORWARD)
            v2->children[0] = v1->children[0]->children[0];
        v2 = v2->children[0];
        goto *table_0[v2->tag];

        CHOICE_0:
        push_choice(v2, v2->children[1]);
        set_node(v2, v2->children[0]);
        goto *table_0[v2->tag];

        FREE_0:
        push_choice(v2, make_FALSE());
        set_TRUE(v2);

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
                                  &&FALSE_1};
        goto *table_1[v2->tag];
        FAIL_1:
        fail(root);
        return;

        FUN_1:
        v2->hnf(v2);
        if(v2->nondet)
        {
            save(root);
        }
        goto *table_1[v2->tag];

        FORWARD_1:
        while(v2->children[0]->tag == FORWARD)
            v2->children[0] = v1->children[0]->children[0];
        v2 = v2->children[0];
        goto *table_1[v2->tag];

        CHOICE_1:
        push_choice(v2, v2->children[1]);
        set_node(v2, v2->children[0]);
        goto *table_1[v2->tag];

        FREE_1:
        push_choice(v2, make_FALSE());
        set_TRUE(v2);

        TRUE_1:
        set_FALSE(root);
        return;

        FALSE_1:
        set_TRUE(root);
        return;
    }
}


//function test.eqlist
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
    goto *table[v1->tag];

    FAIL:
    fail(root);
    return;

    FUN:
    v1->hnf(v1);
    if(v1->nondet)
    {
        save(root);
    }
    goto *table[v1->tag];

    FORWARD:
    while(v1->children[0]->tag == FORWARD)
        v1->children[0] = v1->children[0]->children[0];
    v1 = v1->children[0];
    goto *table[v1->tag];

    CHOICE:
    push_choice(v1, v1->children[1]);
    set_node(v1, v1->children[0]);
    goto *table[v1->tag];

    FREE:
    push_choice(v1, make_CONS(free_var(), free_var()));
    set_node(v1, make_NIL());
    goto *table[v1->tag];

    NIL:
    {
        static void* table_0[] = {&&FAIL_0,
                                  &&FUN_0,
                                  &&FORWARD_0,
                                  &&CHOICE_0,
                                  &&FREE_0,
                                  &&NIL_0,
                                  &&CONS_0};
        goto *table_0[v2->tag];

        FAIL_0:
        fail(root);
        return;

        FUN_0:
        v2->hnf(v2);
        if(v2->nondet)
        {
            save(root);
        }
        goto *table[v2->tag];

        FORWARD_0:
        while(v2->children[0]->tag == FORWARD)
            v2->children[0] = v2->children[0]->children[0];
        v2 = v2->children[0];
        goto *table[v2->tag];

        CHOICE_0:
        push_choice(v2, v2->children[1]);
        set_node(v2, v2->children[0]);
        goto *table[v2->tag];

        FREE_0:
        push_choice(v2, make_CONS(free_var(), free_var()));
        set_NIL(v2);
        goto *table[v2->tag];

        NIL_0:
        set_TRUE(root);
        return;

        CONS_0:
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

        static void* table_1[] = {&&FAIL_1,
                                  &&FUN_1,
                                  &&FORWARD_1,
                                  &&CHOICE_1,
                                  &&FREE_1,
                                  &&NIL_1,
                                  &&CONS_1};
        goto *table_1[v2->tag];


        FAIL_1:
        fail(root);
        return;

        FUN_1:
        v2->hnf(v2);
        if(v2->nondet)
        {
            save(root);
        }
        goto *table[v2->tag];

        FORWARD_1:
        while(v2->children[0]->tag == FORWARD)
            v2->children[0] = v2->children[0]->children[0];
        v2 = v2->children[0];
        goto *table[v2->tag];

        CHOICE_1:
        push_choice(v2, v2->children[1]);
        set_node(v2, v2->children[0]);
        goto *table[v2->tag];

        FREE_1:
        set_NIL(v2);
        push_choice(v2, make_CONS(free_var(), free_var()));

        NIL_1:
        set_FALSE(root);
        return;

        CONS_1:
        {
            Node* v7;
            Node* v8;
            v7 = v2->children[1];
            v8 = v2->children[0];
            set_ifte(root, make_eqbool(v5,v7),
                           make_eqlist(v6,v8),
                           make_FALSE());
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
    goto *table[v1->tag];

    FAIL:
    fail(root);
    return;

    FUN:
    v1->hnf(v1);
    if(v1->nondet)
    {
        save(root);
    }
    goto *table[v1->tag];

    FORWARD:
    while(v1->children[0]->tag == FORWARD)
        v1->children[0] = v1->children[0]->children[0];
    v1 = v1->children[0];
    goto *table[v1->tag];

    CHOICE:
    push_choice(v1, v1->children[1]);
    set_node(v1, v1->children[0]);
    goto *table[v1->tag];

    FREE:
    push_choice(v1, make_CONS(free_var(), free_var()));
    set_node(v1, make_NIL());
    goto *table[v1->tag];

    NIL:
    {
        if(v2->tag == FUNCTION)
        {
            v2->hnf(v2);
        }
        if(v2->nondet)
        {
            save(root);
            forward(root,v2);
        }
        else
        {
            set_node(root,v2);
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


//function test.ifte
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
    goto *table[v1->tag];

    FAIL:
    fail(root);
    return;

    FUN:
    v1->hnf(v1);
    if(v1->nondet)
    {
        save(root);
    }
    goto *table[v1->tag];

    FORWARD:
    while(v1->children[0]->tag == FORWARD)
        v1->children[0] = v1->children[0]->children[0];
    v1 = v1->children[0];
    goto *table[v1->tag];

    CHOICE:
    push_choice(v1, v1->children[1]);
    set_node(v1, v1->children[0]);
    goto *table[v1->tag];

    FREE:
    push_choice(v1, make_FALSE());
    set_TRUE(v1);

    TRUE:
    {
        if(v2->tag == FUNCTION)
        {
            v2->hnf(v2);
        }
        if(v2->nondet)
        {
            save(root);
            forward(root,v2);
        }
        else
        {
            set_node(root,v2);
        }
        return;
    }

    FALSE:
    {
        if(v3->tag == FUNCTION)
        {
            v3->hnf(v3);
        }
        if(v3->nondet)
        {
            save(root);
            forward(root,v3);
        }
        else
        {
            set_node(root,v3);
        }
        return;
    }
}

//function test.ift
//  param v1
//  param v2
//  v1 := ROOT[0]
//  v2 := ROOT[1]
//  case v1 of
//    test.TRUE -> return v2
//    test.FALSE -> return NODE (EXEMPT)
void ift_hnf(Node* root)
{
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
    goto *table[v1->tag];

    FAIL:
    fail(root);
    return;

    FUN:
    v1->hnf(v1);
    if(v1->nondet)
    {
        save(root);
    }
    goto *table[v1->tag];

    FORWARD:
    while(v1->children[0]->tag == FORWARD)
        v1->children[0] = v1->children[0]->children[0];
    v1 = v1->children[0];
    goto *table[v1->tag];

    CHOICE:
    push_choice(v1, v1->children[1]);
    set_node(v1, v1->children[0]);
    goto *table[v1->tag];

    FREE:
    push_choice(v1, make_FALSE());
    set_TRUE(v1);

    TRUE:
    {
        if(v2->tag == FUNCTION)
        {
            v2->hnf(v2);
        }
        if(v2->nondet)
        {
            save(root);
            forward(root,v2);
        }
        else
        {
            set_node(root,v2);
        }
        return;
    }

    FALSE:
    {
        fail(root);
    }
}

//function test.last
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
    Node* v1;
    Node* v2 = free_var();
    Node* v3 = free_var();

    v1 = root->children[0];

    set_ift(root, make_eqlist(v1, make_append(v3, make_CONS(v2, make_NIL()))), v2);
}


//////////////////////////////////////////////////////////////////////////
// Runtime code
//////////////////////////////////////////////////////////////////////////



void add_test_symbols(Table* sym_tab)
{
    if(test_SYMBOLS) return;

    add_runtime_symbols(sym_tab);

    add_symbol(sym_tab, "TRUE",   0, &TRUE_SYMBOL);
    add_symbol(sym_tab, "FALSE",  0, &FALSE_SYMBOL);
    add_symbol(sym_tab, "NIL",    0, &NIL_SYMBOL);
    add_symbol(sym_tab, "CONS",   2, &CONS_SYMBOL);
    add_symbol(sym_tab, "eqbool", 2, &eqbool_SYMBOL);
    add_symbol(sym_tab, "eqlist", 2, &eqlist_SYMBOL);
    add_symbol(sym_tab, "append", 2, &append_SYMBOL);
    add_symbol(sym_tab, "ifte",   3, &ifte_SYMBOL);
    add_symbol(sym_tab, "ift",    2, &ift_SYMBOL);
    add_symbol(sym_tab, "last",   1, &last_SYMBOL);
    test_SYMBOLS = true;
}

int main()
{
    bt_stack = new_stack();
    Table* sym_tab = new_table();
    add_test_symbols(sym_tab);

    //// last [True,True,True,False] should be False
    //Node* expr = make_last(make_CONS(make_TRUE(), 
    //                        make_CONS(make_TRUE(),
    //                         make_CONS(make_TRUE(),
    //                          make_CONS(make_FALSE(),
    //                           make_NIL())))));
    Node* expr = make_append(make_CONS(make_TRUE(), make_NIL()), 
                             make_CONS(make_FALSE(), make_NIL()));
    nf_all(expr, sym_tab);

    return 0;
}
