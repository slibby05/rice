#ifndef test_H
#define test_H

#include "runtime.h"

void test_eqbool_hnf(Node* root);
void test_eqlist_hnf(Node* root);
void test_append_hnf(Node* root);
void test_ifte_hnf(Node* root);
void test_ift_hnf(Node* root);
void test_last_hnf(Node* root);

#define test_FALSE_TAG 5
#define test_TRUE_TAG 6

#define test_CONS_TAG 5
#define test_NIL_TAG 6

static Symbol test_FALSE_symbol = {.tag = test_FALSE_TAG, .arity = 0, .name = "test.FALSE", .hnf = &CTR_hnf};
static Symbol test_TRUE_symbol = {.tag = test_TRUE_TAG, .arity = 0, .name = "test.TRUE", .hnf = &CTR_hnf};
static Symbol test_CONS_symbol = {.tag = test_CONS_TAG, .arity = 2, .name = "test.CONS", .hnf = &CTR_hnf};
static Symbol test_NIL_symbol = {.tag = test_NIL_TAG, .arity = 0, .name = "test.NIL", .hnf = &CTR_hnf};
static Symbol test_eqbool_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "test.eqbool", .hnf = &test_eqbool_hnf};
static Symbol test_eqlist_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "test.eqlist", .hnf = &test_eqlist_hnf};
static Symbol test_append_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "test.append", .hnf = &test_append_hnf};
static Symbol test_ifte_symbol = {.tag = FUNCTION_TAG, .arity = 3, .name = "test.ifte", .hnf = &test_ifte_hnf};
static Symbol test_ift_symbol = {.tag = FUNCTION_TAG, .arity = 2, .name = "test.ift", .hnf = &test_ift_hnf};
static Symbol test_last_symbol = {.tag = FUNCTION_TAG, .arity = 1, .name = "test.last", .hnf = &test_last_hnf};

// FALSE
__attribute__((always_inline)) 
static inline void set_test_FALSE(Node* root, int missing)
{
  root->symbol = &test_FALSE_symbol;
  root->missing = missing;
  root->children[3].a = NULL;
  child_at_n(root, 0) = NULL;
  child_at_n(root, 1) = NULL;
  child_at_n(root, 2) = NULL;
}

// TRUE
__attribute__((always_inline)) 
static inline void set_test_TRUE(Node* root, int missing)
{
  root->symbol = &test_TRUE_symbol;
  root->missing = missing;
  root->children[3].a = NULL;
  child_at_n(root, 0) = NULL;
  child_at_n(root, 1) = NULL;
  child_at_n(root, 2) = NULL;
}

// CONS
__attribute__((always_inline)) 
static inline void set_test_CONS(Node* root, Node* v1, Node* v2, int missing)
{
  root->symbol = &test_CONS_symbol;
  root->missing = missing;
  root->children[3].a = NULL;
  child_at_n(root, 0) = v2;
  child_at_n(root, 1) = v1;
  child_at_n(root, 2) = NULL;
}

// NIL
__attribute__((always_inline)) 
static inline void set_test_NIL(Node* root, int missing)
{
  root->symbol = &test_NIL_symbol;
  root->missing = missing;
  root->children[3].a = NULL;
  child_at_n(root, 0) = NULL;
  child_at_n(root, 1) = NULL;
  child_at_n(root, 2) = NULL;
}

// eqbool
__attribute__((always_inline)) 
static inline void set_test_eqbool(Node* root, Node* v1, Node* v2, int missing)
{
  root->symbol = &test_eqbool_symbol;
  root->missing = missing;
  root->children[3].a = NULL;
  child_at_n(root, 0) = v2;
  child_at_n(root, 1) = v1;
  child_at_n(root, 2) = NULL;
}

// eqlist
__attribute__((always_inline)) 
static inline void set_test_eqlist(Node* root, Node* v1, Node* v2, int missing)
{
  root->symbol = &test_eqlist_symbol;
  root->missing = missing;
  root->children[3].a = NULL;
  child_at_n(root, 0) = v2;
  child_at_n(root, 1) = v1;
  child_at_n(root, 2) = NULL;
}

// append
__attribute__((always_inline)) 
static inline void set_test_append(Node* root, Node* v1, Node* v2, int missing)
{
  root->symbol = &test_append_symbol;
  root->missing = missing;
  root->children[3].a = NULL;
  child_at_n(root, 0) = v2;
  child_at_n(root, 1) = v1;
  child_at_n(root, 2) = NULL;
}

// ifte
__attribute__((always_inline)) 
static inline void set_test_ifte(Node* root, Node* v1, Node* v2, Node* v3, int missing)
{
  root->symbol = &test_ifte_symbol;
  root->missing = missing;
  root->children[3].a = NULL;
  child_at_n(root, 0) = v3;
  child_at_n(root, 1) = v2;
  child_at_n(root, 2) = v1;
}

// ift
__attribute__((always_inline)) 
static inline void set_test_ift(Node* root, Node* v1, Node* v2, int missing)
{
  root->symbol = &test_ift_symbol;
  root->missing = missing;
  root->children[3].a = NULL;
  child_at_n(root, 0) = v2;
  child_at_n(root, 1) = v1;
  child_at_n(root, 2) = NULL;
}

// last
__attribute__((always_inline)) 
static inline void set_test_last(Node* root, Node* v1, int missing)
{
  root->symbol = &test_last_symbol;
  root->missing = missing;
  root->children[3].a = NULL;
  child_at_n(root, 0) = v1;
  child_at_n(root, 1) = NULL;
  child_at_n(root, 2) = NULL;
}

// FALSE
__attribute__((always_inline)) 
static inline Node* make_test_FALSE(int missing)
{
  Node* root = (Node*)calloc(1, sizeof(Node));
  root->symbol = &test_FALSE_symbol;
  root->missing = missing;
  return root;
}

// TRUE
__attribute__((always_inline)) 
static inline Node* make_test_TRUE(int missing)
{
  Node* root = (Node*)calloc(1, sizeof(Node));
  root->symbol = &test_TRUE_symbol;
  root->missing = missing;
  return root;
}

// CONS
__attribute__((always_inline)) 
static inline Node* make_test_CONS(Node* v1, Node* v2, int missing)
{
  Node* root = (Node*)calloc(1, sizeof(Node));
  root->symbol = &test_CONS_symbol;
  root->missing = missing;
  child_at_n(root, 0) = v2;
  child_at_n(root, 1) = v1;
  return root;
}

// NIL
__attribute__((always_inline)) 
static inline Node* make_test_NIL(int missing)
{
  Node* root = (Node*)calloc(1, sizeof(Node));
  root->symbol = &test_NIL_symbol;
  root->missing = missing;
  return root;
}

// eqbool
__attribute__((always_inline)) 
static inline Node* make_test_eqbool(Node* v1, Node* v2, int missing)
{
  Node* root = (Node*)calloc(1, sizeof(Node));
  root->symbol = &test_eqbool_symbol;
  root->missing = missing;
  child_at_n(root, 0) = v2;
  child_at_n(root, 1) = v1;
  return root;
}

// eqlist
__attribute__((always_inline)) 
static inline Node* make_test_eqlist(Node* v1, Node* v2, int missing)
{
  Node* root = (Node*)calloc(1, sizeof(Node));
  root->symbol = &test_eqlist_symbol;
  root->missing = missing;
  child_at_n(root, 0) = v2;
  child_at_n(root, 1) = v1;
  return root;
}

// append
__attribute__((always_inline)) 
static inline Node* make_test_append(Node* v1, Node* v2, int missing)
{
  Node* root = (Node*)calloc(1, sizeof(Node));
  root->symbol = &test_append_symbol;
  root->missing = missing;
  child_at_n(root, 0) = v2;
  child_at_n(root, 1) = v1;
  return root;
}

// ifte
__attribute__((always_inline)) 
static inline Node* make_test_ifte(Node* v1, Node* v2, Node* v3, int missing)
{
  Node* root = (Node*)calloc(1, sizeof(Node));
  root->symbol = &test_ifte_symbol;
  root->missing = missing;
  child_at_n(root, 0) = v3;
  child_at_n(root, 1) = v2;
  child_at_n(root, 2) = v1;
  return root;
}

// ift
__attribute__((always_inline)) 
static inline Node* make_test_ift(Node* v1, Node* v2, int missing)
{
  Node* root = (Node*)calloc(1, sizeof(Node));
  root->symbol = &test_ift_symbol;
  root->missing = missing;
  child_at_n(root, 0) = v2;
  child_at_n(root, 1) = v1;
  return root;
}

// last
__attribute__((always_inline)) 
static inline Node* make_test_last(Node* v1, int missing)
{
  Node* root = (Node*)calloc(1, sizeof(Node));
  root->symbol = &test_last_symbol;
  root->missing = missing;
  child_at_n(root, 0) = v1;
  return root;
}

__attribute__((always_inline)) 
static inline void set_test_FALSE_free(Node* root)
{
  root->symbol = &test_FALSE_symbol;
  root->missing = 0;
  root->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline void set_test_TRUE_free(Node* root)
{
  root->symbol = &test_TRUE_symbol;
  root->missing = 0;
  root->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline void set_test_CONS_free(Node* root)
{
  root->symbol = &test_CONS_symbol;
  root->missing = 0;
  root->children[3].a = NULL;
  child_at_n(root, 0) = free_var();
  child_at_n(root, 1) = free_var();
}

__attribute__((always_inline)) 
static inline void set_test_NIL_free(Node* root)
{
  root->symbol = &test_NIL_symbol;
  root->missing = 0;
  root->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline Node* make_test_FALSE_free()
{
  Node* root = (Node*)calloc(1, sizeof(Node));
  root->symbol = &test_FALSE_symbol;
  root->missing = 0;
  return root;
}

__attribute__((always_inline)) 
static inline Node* make_test_TRUE_free()
{
  Node* root = (Node*)calloc(1, sizeof(Node));
  root->symbol = &test_TRUE_symbol;
  root->missing = 0;
  return root;
}

__attribute__((always_inline)) 
static inline Node* make_test_CONS_free()
{
  Node* root = (Node*)calloc(1, sizeof(Node));
  root->symbol = &test_CONS_symbol;
  root->missing = 0;
  child_at_n(root, 0) = free_var();
  child_at_n(root, 1) = free_var();
  return root;
}

__attribute__((always_inline)) 
static inline Node* make_test_NIL_free()
{
  Node* root = (Node*)calloc(1, sizeof(Node));
  root->symbol = &test_NIL_symbol;
  root->missing = 0;
  return root;
}

#endif //test_H