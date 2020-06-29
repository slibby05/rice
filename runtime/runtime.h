#ifndef RUNTIME_H
#define RUNTIME_H


#include "node.h"
#include "stack.h"
#include "debug.h"

#define FAIL_TAG     0
#define FUNCTION_TAG 1
#define CHOICE_TAG   2
#define FREE_TAG     3
#define INT_TAG      4
#define FLOAT_TAG    4
#define CHAR_TAG     4


#define INT_CTR      -1
#define FLOAT_CTR    -2
#define CHAR_CTR     -3

#define child_at(r, i) child_at_##i(r)
#define child_at_n(r, k) child_at_##k(r).n
#define child_at_i(r, k) child_at_##k(r).i
#define child_at_c(r, k) child_at_##k(r).c
#define child_at_f(r, k) child_at_##k(r).f
#define child_at_0(r) r->children[0]
#define child_at_1(r) r->children[1]
#define child_at_2(r) r->children[2]
#define child_at_3(r) r->children[3].a[0]
#define child_at_4(r) r->children[3].a[1]
#define child_at_5(r) r->children[3].a[2]
#define child_at_6(r) r->children[3].a[3]
#define child_at_7(r) r->children[3].a[4]
#define child_at_8(r) r->children[3].a[5]
#define child_at_9(r) r->children[3].a[6]
#define child_at_10(r) r->children[3].a[7]
#define child_at_11(r) r->children[3].a[8]
#define child_at_12(r) r->children[3].a[9]
#define child_at_13(r) r->children[3].a[10]
#define child_at_14(r) r->children[3].a[11]
#define child_at_15(r) r->children[3].a[13]
#define child_at_16(r) r->children[3].a[14]
#define child_at_17(r) r->children[3].a[15]
#define child_at_18(r) r->children[3].a[16]
#define child_at_19(r) r->children[3].a[17]
#define child_at_20(r) r->children[3].a[18]
#define child_at_21(r) r->children[3].a[19]
#define child_at_22(r) r->children[3].a[20]
#define child_at_23(r) r->children[3].a[21]
#define child_at_24(r) r->children[3].a[22]
#define child_at_25(r) r->children[3].a[23]
#define child_at_26(r) r->children[3].a[24]
#define child_at_27(r) r->children[3].a[25]
#define child_at_28(r) r->children[3].a[26]
#define child_at_29(r) r->children[3].a[27]
#define child_at_30(r) r->children[3].a[28]
#define child_at_31(r) r->children[3].a[29]
#define child_at_32(r) r->children[3].a[30]
#define child_at_33(r) r->children[3].a[31]
#define child_at_34(r) r->children[3].a[32]
#define child_at_35(r) r->children[3].a[33]
#define child_at_36(r) r->children[3].a[34]
#define child_at_37(r) r->children[3].a[35]
#define child_at_38(r) r->children[3].a[36]
#define child_at_39(r) r->children[3].a[37]
#define child_at_40(r) r->children[3].a[38]
#define child_at_41(r) r->children[3].a[39]
#define child_at_42(r) r->children[3].a[40]
#define child_at_43(r) r->children[3].a[41]
#define child_at_44(r) r->children[3].a[42]
#define child_at_45(r) r->children[3].a[43]
#define child_at_46(r) r->children[3].a[44]
#define child_at_47(r) r->children[3].a[45]
#define child_at_48(r) r->children[3].a[46]
#define child_at_49(r) r->children[3].a[47]

#define child_at_v(n, i) (i < 3 ? n->children[i] : n->children[3].a[i-3])
#define set_child_at(n, i, v) if(i < 3) {n->children[i] = v;} else {n->children[3].a[i-3] = v;}

#define tochar(n) ((field)n).c
#define toint(n) ((field)n).i
#define tofloat(n) ((field)n).f
#define tonode(n) ((field)n).n

void CTR_hnf(Node* root);
void choice_hnf(Node* root);
void apply_hnf(Node* root);
void save_copy(Node* n);
void save(Node* n, Node* saved);
void push_choice(Node* left, Node* right);
void choose(Node* root);
bool undo();
void print_stack(Stack* s);
void print_frame(NodePair* f);
void print_expr(Node* n);
void print_final(Node* n);
void nf(Node* expr);
void ground_nf(Node* expr);
void nf_all(Node* expr);
void error(char* msg, Node* expr);

static Symbol fail_symbol    = { .tag = FAIL_TAG,     .arity = 0, .name = "FAIL",    .hnf = &CTR_hnf};
static Symbol choice_symbol  = { .tag = CHOICE_TAG,   .arity = 2, .name = "?",       .hnf = &choice_hnf};
static Symbol free_symbol    = { .tag = FREE_TAG,     .arity = 0, .name = "free",    .hnf = &CTR_hnf};
static Symbol int_symbol     = { .tag = INT_TAG,      .arity = 1, .name = "int",     .hnf = &CTR_hnf};
static Symbol char_symbol    = { .tag = CHAR_TAG,     .arity = 1, .name = "char",    .hnf = &CTR_hnf};
static Symbol float_symbol   = { .tag = FLOAT_TAG,    .arity = 1, .name = "float",   .hnf = &CTR_hnf};
static Symbol apply_symbol   = { .tag = FUNCTION_TAG, .arity = 0, .name = "apply",   .hnf = &apply_hnf};


// the backtracking stack can be used pretty much anywhere
// So it almost has to be a global variable.
// The only alternative is to pass it to every single function.
Stack* bt_stack;



__attribute__((always_inline)) 
static inline void fail(Node* root)
{
    root->symbol = &fail_symbol;
    root->missing = 0;
    child_at_n(root, 0) = NULL;
    child_at_n(root, 1) = NULL;
    child_at_n(root, 2) = NULL;
    root->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline void set_node(Node* root, Node* rep)
{
    bool nondet = root->nondet;
    memcpy(root,rep,sizeof(Node));
    root->nondet |= nondet;
}

__attribute__((always_inline)) 
static inline void set_choice(Node* root, Node* left, Node* right)
{
    root->missing = 0;
    root->symbol = &choice_symbol;
    child_at_n(root,0) = left;
    child_at_n(root,1) = right;
    child_at_i(root,2) = 0;
    root->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline Node* make_choice(Node* left, Node* right)
{
    Node* n = (Node*)calloc(1, sizeof(Node));
    n->nondet = false;
    n->missing = 0;
    n->symbol = &choice_symbol;
    child_at_n(n, 0) = left;
    child_at_n(n, 1) = right;
    child_at_i(n, 2) = 0;
    return n;
}


__attribute__((always_inline)) 
static inline void set__int(Node* root, long i, int missing)
{
    root->missing = 0;
    root->symbol = &int_symbol;
    root->missing = missing;
    child_at_i(root,0) = i;
    child_at_i(root,1) = INT_CTR;
    child_at_n(root,2) = NULL;
    root->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline Node* make__int(long i, int missing)
{
    Node* n = (Node*)calloc(1, sizeof(Node));
    n->symbol = &int_symbol;
    n->missing = missing;
    child_at_i(n,0) = i;
    child_at_i(n,1) = INT_CTR;
    return n;
}

__attribute__((always_inline)) 
static inline void set__char(Node* root, char c, int missing)
{
    root->missing = 0;
    root->symbol = &char_symbol;
    root->missing = missing;
    child_at_c(root,0) = c;
    child_at_i(root,1) = CHAR_CTR;
    child_at_n(root,2) = NULL;
    root->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline Node* make__char(char c, int missing)
{
    Node* n = (Node*)calloc(1, sizeof(Node));
    n->symbol = &char_symbol;
    n->missing = missing;
    child_at_c(n,0) = c;
    child_at_i(n,1) = CHAR_CTR;
    return n;
}

__attribute__((always_inline)) 
static inline void set__float(Node* root, double f, int missing)
{
    root->missing = 0;
    root->symbol = &float_symbol;
    root->missing = missing;
    child_at_f(root,0) = f;
    child_at_i(root,1) = FLOAT_CTR;
    child_at_n(root,2) = NULL;
    root->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline Node* make__float(double f, int missing)
{
    Node* n = (Node*)calloc(1, sizeof(Node));
    n->symbol = &float_symbol;
    n->missing = missing;
    child_at_f(n,0) = f;
    child_at_i(n,1) = FLOAT_CTR;
    return n;
}


__attribute__((always_inline)) 
static inline Node* free_var()
{
    Node* n = (Node*)calloc(1, sizeof(Node));
    n->symbol = &free_symbol;
    return n;
}

////////////////////////////////////////////////////////////////////////
//
// Partial application
//
////////////////////////////////////////////////////////////////////////

//////////////////////////////////////
// app1
//////////////////////////////////////

__attribute__((always_inline)) 
static inline Node* set_apply1(Node* root, Node* f, Node* v1)
{
    root->symbol = &apply_symbol;
    root->missing = -1;
    child_at_n(root,0) = f;
    child_at_n(root,1) = v1;
}

__attribute__((always_inline)) 
static inline Node* make_apply1(Node* f, Node* v1)
{
    Node* n = (Node*)calloc(1, sizeof(Node));
    n->symbol = &apply_symbol;
    n->missing = -1;
    child_at_n(n,0) = f;
    child_at_n(n,1) = v1;
    return n;
}

__attribute__((always_inline)) 
static inline Node* set_apply2(Node* root, Node* f, Node* v1, Node* v2)
{
    root->symbol = &apply_symbol;
    root->missing = -2;
    child_at_n(root,0) = f;
    child_at_n(root,1) = v2;
    child_at_n(root,2) = v1;
}

__attribute__((always_inline)) 
static inline Node* make_apply2(Node* f, Node* v1, Node* v2)
{
    Node* n = (Node*)calloc(1, sizeof(Node));
    n->symbol = &apply_symbol;
    n->missing = -2;
    child_at_n(n,0) = f;
    child_at_n(n,1) = v2;
    child_at_n(n,2) = v1;
    return n;
}

__attribute__((always_inline)) 
static inline Node* set_apply3(Node* root, Node* f, Node* v1, Node* v2, Node* v3)
{
    root->symbol = &apply_symbol;
    root->missing = -3;
    root->children[3].a = (field*)malloc(sizeof(Node*) * 1);
    child_at_n(root,0) = f;
    child_at_n(root,1) = v3;
    child_at_n(root,2) = v2;
    child_at_n(root,3) = v1;
}

__attribute__((always_inline)) 
static inline Node* make_apply3(Node* f, Node* v1, Node* v2, Node* v3)
{
    Node* n = (Node*)calloc(1, sizeof(Node));
    n->symbol = &apply_symbol;
    n->missing = -3;
    n->children[3].a = (field*)malloc(sizeof(Node*) * 1);
    child_at_n(n,0) = f;
    child_at_n(n,1) = v3;
    child_at_n(n,2) = v2;
    child_at_n(n,3) = v1;
    return n;
}

#endif //RUNTIME_H
