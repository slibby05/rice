#include "test.h"
#include "debug.h"
#include "runtime.h"

Node* global_root;

// eqbool
void test_eqbool_hnf(Node* root)
{
  debug(LOW, "hnf: eqbool\n");
  debug_expr(LOW, global_root);
  Node* v1;
  Node* v2;
  v2 = child_at_n(root, 0);
  v1 = child_at_n(root, 1);
  static void* table[] = {&&FAIL, &&FUNCTION, &&FORWARD, &&CHOICE, &&FREE, &&test_FALSE, &&test_TRUE};
  
  goto* table[v1->symbol->tag];
  
  FAIL:
  {
    if(v1->nondet)
    {
      save(root);
    }
    fail(root);
    return;
  }
  
  FUNCTION:
  {
    v1->symbol->hnf(v1);
    goto* table[v1->symbol->tag];
  }
  
  FORWARD:
  {
    while (child_at_n(v1, 0)->symbol->tag == FORWARD_TAG)
    {
      child_at_n(v1, 0) = child_at_n(child_at_n(v1, 0), 0);
    }
    v1 = child_at_n(v1, 0);
    goto* table[v1->symbol->tag];
  }
  
  CHOICE:
  {
    choose(v1);
    goto* table[v1->symbol->tag];
  }
  
  FREE:
  {
    push_choice(v1, make_test_TRUE_free());
    set_test_FALSE_free(v1);
    goto* table[v1->symbol->tag];
  }
  
  test_FALSE:
  {
    if(v1->nondet)
    {
      save(root);
    }
    static void* table0[] = {&&FAIL0, &&FUNCTION0, &&FORWARD0, &&CHOICE0, &&FREE0, &&test_FALSE0, &&test_TRUE0};
    
    goto* table0[v2->symbol->tag];
    
    FAIL0:
    {
      if(v2->nondet)
      {
        save(root);
      }
      fail(root);
      return;
    }
    
    FUNCTION0:
    {
      v2->symbol->hnf(v2);
      goto* table0[v2->symbol->tag];
    }
    
    FORWARD0:
    {
      while (child_at_n(v2, 0)->symbol->tag == FORWARD_TAG)
      {
        child_at_n(v2, 0) = child_at_n(child_at_n(v2, 0), 0);
      }
      v2 = child_at_n(v2, 0);
      goto* table0[v2->symbol->tag];
    }
    
    CHOICE0:
    {
      choose(v2);
      goto* table0[v2->symbol->tag];
    }
    
    FREE0:
    {
      push_choice(v2, make_test_TRUE_free());
      set_test_FALSE_free(v2);
      goto* table0[v2->symbol->tag];
    }
    
    test_FALSE0:
    {
      if(v2->nondet)
      {
        save(root);
      }
      set_test_TRUE(root, 0);
      return;
    }
    test_TRUE0:
    {
      if(v2->nondet)
      {
        save(root);
      }
      set_test_FALSE(root, 0);
      return;
    }
  }
  test_TRUE:
  {
    if(v1->nondet)
    {
      save(root);
    }
    static void* table1[] = {&&FAIL1, &&FUNCTION1, &&FORWARD1, &&CHOICE1, &&FREE1, &&test_FALSE1, &&test_TRUE1};
    
    goto* table1[v2->symbol->tag];
    
    FAIL1:
    {
      if(v2->nondet)
      {
        save(root);
      }
      fail(root);
      return;
    }
    
    FUNCTION1:
    {
      v2->symbol->hnf(v2);
      goto* table1[v2->symbol->tag];
    }
    
    FORWARD1:
    {
      while (child_at_n(v2, 0)->symbol->tag == FORWARD_TAG)
      {
        child_at_n(v2, 0) = child_at_n(child_at_n(v2, 0), 0);
      }
      v2 = child_at_n(v2, 0);
      goto* table1[v2->symbol->tag];
    }
    
    CHOICE1:
    {
      choose(v2);
      goto* table1[v2->symbol->tag];
    }
    
    FREE1:
    {
      push_choice(v2, make_test_TRUE_free());
      set_test_FALSE_free(v2);
      goto* table1[v2->symbol->tag];
    }
    
    test_FALSE1:
    {
      if(v2->nondet)
      {
        save(root);
      }
      set_test_FALSE(root, 0);
      return;
    }
    test_TRUE1:
    {
      if(v2->nondet)
      {
        save(root);
      }
      set_test_TRUE(root, 0);
      return;
    }
  }
}

// eqlist
void test_eqlist_hnf(Node* root)
{
  debug(LOW, "hnf: eqlist\n");
  debug_expr(LOW, global_root);
  Node* v1;
  Node* v2;
  v2 = child_at_n(root, 0);
  v1 = child_at_n(root, 1);
  static void* table[] = {&&FAIL, &&FUNCTION, &&FORWARD, &&CHOICE, &&FREE, &&test_CONS, &&test_NIL};
  
  goto* table[v1->symbol->tag];
  
  FAIL:
  {
    if(v1->nondet)
    {
      save(root);
    }
    fail(root);
    return;
  }
  
  FUNCTION:
  {
    v1->symbol->hnf(v1);
    goto* table[v1->symbol->tag];
  }
  
  FORWARD:
  {
    while (child_at_n(v1, 0)->symbol->tag == FORWARD_TAG)
    {
      child_at_n(v1, 0) = child_at_n(child_at_n(v1, 0), 0);
    }
    v1 = child_at_n(v1, 0);
    goto* table[v1->symbol->tag];
  }
  
  CHOICE:
  {
    choose(v1);
    goto* table[v1->symbol->tag];
  }
  
  FREE:
  {
    push_choice(v1, make_test_NIL_free());
    set_test_CONS_free(v1);
    goto* table[v1->symbol->tag];
  }
  
  test_CONS:
  {
    if(v1->nondet)
    {
      save(root);
    }
    Node* v5;
    Node* v6;
    v6 = child_at_n(v1, 0);
    v5 = child_at_n(v1, 1);
    static void* table0[] = {&&FAIL0, &&FUNCTION0, &&FORWARD0, &&CHOICE0, &&FREE0, &&test_CONS0, &&test_NIL0};
    
    goto* table0[v2->symbol->tag];
    
    FAIL0:
    {
      if(v2->nondet)
      {
        save(root);
      }
      fail(root);
      return;
    }
    
    FUNCTION0:
    {
      v2->symbol->hnf(v2);
      goto* table0[v2->symbol->tag];
    }
    
    FORWARD0:
    {
      while (child_at_n(v2, 0)->symbol->tag == FORWARD_TAG)
      {
        child_at_n(v2, 0) = child_at_n(child_at_n(v2, 0), 0);
      }
      v2 = child_at_n(v2, 0);
      goto* table0[v2->symbol->tag];
    }
    
    CHOICE0:
    {
      choose(v2);
      goto* table0[v2->symbol->tag];
    }
    
    FREE0:
    {
      push_choice(v2, make_test_NIL_free());
      set_test_CONS_free(v2);
      goto* table0[v2->symbol->tag];
    }
    
    test_CONS0:
    {
      if(v2->nondet)
      {
        save(root);
      }
      Node* v7;
      Node* v8;
      v8 = child_at_n(v2, 0);
      v7 = child_at_n(v2, 1);
      set_test_ifte(root, make_test_eqbool(v5, v7, 0), make_test_eqlist(v6, v8, 0), make_test_FALSE(0), 0);
      root->symbol->hnf(root);
      return;
    }
    test_NIL0:
    {
      if(v2->nondet)
      {
        save(root);
      }
      set_test_FALSE(root, 0);
      return;
    }
  }
  test_NIL:
  {
    if(v1->nondet)
    {
      save(root);
    }
    static void* table1[] = {&&FAIL1, &&FUNCTION1, &&FORWARD1, &&CHOICE1, &&FREE1, &&test_CONS1, &&test_NIL1};
    
    goto* table1[v2->symbol->tag];
    
    FAIL1:
    {
      if(v2->nondet)
      {
        save(root);
      }
      fail(root);
      return;
    }
    
    FUNCTION1:
    {
      v2->symbol->hnf(v2);
      goto* table1[v2->symbol->tag];
    }
    
    FORWARD1:
    {
      while (child_at_n(v2, 0)->symbol->tag == FORWARD_TAG)
      {
        child_at_n(v2, 0) = child_at_n(child_at_n(v2, 0), 0);
      }
      v2 = child_at_n(v2, 0);
      goto* table1[v2->symbol->tag];
    }
    
    CHOICE1:
    {
      choose(v2);
      goto* table1[v2->symbol->tag];
    }
    
    FREE1:
    {
      push_choice(v2, make_test_NIL_free());
      set_test_CONS_free(v2);
      goto* table1[v2->symbol->tag];
    }
    
    test_CONS1:
    {
      if(v2->nondet)
      {
        save(root);
      }
      Node* v3;
      Node* v4;
      v4 = child_at_n(v2, 0);
      v3 = child_at_n(v2, 1);
      set_test_FALSE(root, 0);
      return;
    }
    test_NIL1:
    {
      if(v2->nondet)
      {
        save(root);
      }
      set_test_TRUE(root, 0);
      return;
    }
  }
}

// append
void test_append_hnf(Node* root)
{
  debug(LOW, "hnf: append\n");
  debug_expr(LOW, global_root);
  Node* v1;
  Node* v2;
  v2 = child_at_n(root, 0);
  v1 = child_at_n(root, 1);
  static void* table[] = {&&FAIL, &&FUNCTION, &&FORWARD, &&CHOICE, &&FREE, &&test_CONS, &&test_NIL};
  
  goto* table[v1->symbol->tag];
  
  FAIL:
  {
    if(v1->nondet)
    {
      save(root);
    }
    fail(root);
    return;
  }
  
  FUNCTION:
  {
    v1->symbol->hnf(v1);
    goto* table[v1->symbol->tag];
  }
  
  FORWARD:
  {
    while (child_at_n(v1, 0)->symbol->tag == FORWARD_TAG)
    {
      child_at_n(v1, 0) = child_at_n(child_at_n(v1, 0), 0);
    }
    v1 = child_at_n(v1, 0);
    goto* table[v1->symbol->tag];
  }
  
  CHOICE:
  {
    choose(v1);
    goto* table[v1->symbol->tag];
  }
  
  FREE:
  {
    push_choice(v1, make_test_NIL_free());
    set_test_CONS_free(v1);
    goto* table[v1->symbol->tag];
  }
  
  test_CONS:
  {
    if(v1->nondet)
    {
      save(root);
    }
    Node* v3;
    Node* v4;
    v4 = child_at_n(v1, 0);
    v3 = child_at_n(v1, 1);
    set_test_CONS(root, v3, make_test_append(v4, v2, 0), 0);
    return;
  }
  test_NIL:
  {
    if(v1->nondet)
    {
      save(root);
    }
    if(FUNCTION_TAG <= v2->symbol->tag && v2->symbol->tag <= CHOICE_TAG)
    {
      v2->symbol->hnf(v2);
    }
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
}

// ifte
void test_ifte_hnf(Node* root)
{
  debug(LOW, "hnf: ifte\n");
  debug_expr(LOW, global_root);
  Node* v1;
  Node* v2;
  Node* v3;
  v3 = child_at_n(root, 0);
  v2 = child_at_n(root, 1);
  v1 = child_at_n(root, 2);
  static void* table[] = {&&FAIL, &&FUNCTION, &&FORWARD, &&CHOICE, &&FREE, &&test_FALSE, &&test_TRUE};
  
  goto* table[v1->symbol->tag];
  
  FAIL:
  {
    if(v1->nondet)
    {
      save(root);
    }
    fail(root);
    return;
  }
  
  FUNCTION:
  {
    v1->symbol->hnf(v1);
    goto* table[v1->symbol->tag];
  }
  
  FORWARD:
  {
    while (child_at_n(v1, 0)->symbol->tag == FORWARD_TAG)
    {
      child_at_n(v1, 0) = child_at_n(child_at_n(v1, 0), 0);
    }
    v1 = child_at_n(v1, 0);
    goto* table[v1->symbol->tag];
  }
  
  CHOICE:
  {
    choose(v1);
    goto* table[v1->symbol->tag];
  }
  
  FREE:
  {
    push_choice(v1, make_test_TRUE_free());
    set_test_FALSE_free(v1);
    goto* table[v1->symbol->tag];
  }
  
  test_FALSE:
  {
    if(v1->nondet)
    {
      save(root);
    }
    if(FUNCTION_TAG <= v3->symbol->tag && v3->symbol->tag <= CHOICE_TAG)
    {
      v3->symbol->hnf(v3);
    }
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
  test_TRUE:
  {
    if(v1->nondet)
    {
      save(root);
    }
    if(FUNCTION_TAG <= v2->symbol->tag && v2->symbol->tag <= CHOICE_TAG)
    {
      v2->symbol->hnf(v2);
    }
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
}

// ift
void test_ift_hnf(Node* root)
{
  debug(LOW, "hnf: ift\n");
  debug_expr(LOW, global_root);
  Node* v1;
  Node* v2;
  v2 = child_at_n(root, 0);
  v1 = child_at_n(root, 1);
  static void* table[] = {&&FAIL, &&FUNCTION, &&FORWARD, &&CHOICE, &&FREE, &&test_FALSE, &&test_TRUE};
  
  goto* table[v1->symbol->tag];
  
  FAIL:
  {
    if(v1->nondet)
    {
      save(root);
    }
    fail(root);
    return;
  }
  
  FUNCTION:
  {
    v1->symbol->hnf(v1);
    goto* table[v1->symbol->tag];
  }
  
  FORWARD:
  {
    while (child_at_n(v1, 0)->symbol->tag == FORWARD_TAG)
    {
      child_at_n(v1, 0) = child_at_n(child_at_n(v1, 0), 0);
    }
    v1 = child_at_n(v1, 0);
    goto* table[v1->symbol->tag];
  }
  
  CHOICE:
  {
    choose(v1);
    goto* table[v1->symbol->tag];
  }
  
  FREE:
  {
    push_choice(v1, make_test_TRUE_free());
    set_test_FALSE_free(v1);
    goto* table[v1->symbol->tag];
  }
  
  test_FALSE:
  {
    if(v1->nondet)
    {
      save(root);
    }
    fail(root);
    return;
  }
  test_TRUE:
  {
    if(v1->nondet)
    {
      save(root);
    }
    if(FUNCTION_TAG <= v2->symbol->tag && v2->symbol->tag <= CHOICE_TAG)
    {
      v2->symbol->hnf(v2);
    }
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
}

// last
void test_last_hnf(Node* root)
{
  global_root = root;
  debug(LOW, "hnf: last\n");
  debug_expr(LOW, global_root);
  Node* v1;
  Node* v2 = free_var();
  Node* v3 = free_var();
  v1 = child_at_n(root, 0);
  set_test_ift(root, make_test_eqlist(v1, make_test_append(v3, make_test_CONS(v2, make_test_NIL(0), 0), 0), 0), v2, 0);
  root->symbol->hnf(root);
  return;
}

