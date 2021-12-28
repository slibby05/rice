#ifndef RUNTIME_H
#define RUNTIME_H


#define SET_RET(fn,args...) \
  { \
    set_##fn(RET,args); \
    RET_forward.n = NULL; \
    fn##_hnf(RET);\
  }


#include <stdlib.h>
#include "node.h"
#include "stack.h"
#include "debug.h"
#include "memory.h"

#define FAIL_TAG     0
#define FUNCTION_TAG 1
#define CHOICE_TAG   2
#define FORWARD_TAG  3
#define FREE_TAG     4
#define _int_TAG     5
#define _float_TAG   5
#define _char_TAG    5


#define INT_CTR      -1
#define FLOAT_CTR    -2
#define CHAR_CTR     -3

#define HNF(expr) (expr).n->symbol->hnf(expr)
#define HNF_RET(expr) RET.n->symbol->hnf_RET(expr)



#define child_at(r, k) child_at_##k(r.n)
#define child_at_n(r, k) child_at_##k(r.n).n
#define child_at_i(r, k) child_at_##k(r.n).i
#define child_at_c(r, k) child_at_##k(r.n).c
#define child_at_f(r, k) child_at_##k(r.n).f
#define child_at_a(r, k) child_at_##k(r.n).a
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

#define child_at_v(r, i) (i < 3 ? r.n->children[i] : r.n->children[3].a[i-3])
#define set_child_at(r, i, v) if(i < 3) {r.n->children[i] = v;} else {r.n->children[3].a[i-3] = v;}

void CTR_hnf(field root);
Node* CTR_RET_hnf(Node* RET_restore);
void choice_hnf(field root);
Node* choice_RET_hnf(Node* RET_restore);
void apply_hnf(field root);
Node* apply_RET_hnf(Node* backup);
void forward_hnf(field root);
Node* forward_RET_hnf(Node* backup);
field copy(field node);
void save_copy(field n);
void save(field n, field saved);
Node* save_RET(Node* backup, field saved);
void push_choice(field left, field right);
void push_frame(field left, field right);
void choose(field root);
Node* choose_RET(Node* backup);
bool undo();
void print_stack(Stack* s);
void print_frame(FieldPair* f);
void print_expr(field n);
void print_final(field n);
void print_tuple(field n, int i);
void print_list(field n);
void nf(field expr);
void ground_nf(field expr);
void nf_all(field expr);
void error(char* msg, field expr);

// functions for manipulating curry strings
field toCurryString(char* str);
void setCurryString(field root, char* str);
char* toCStr(field string);

static Symbol fail_symbol    = { .tag = FAIL_TAG,     .arity = 0, .name = "FAIL",    .hnf = &CTR_hnf,     .hnf_RET = &CTR_RET_hnf      };
static Symbol choice_symbol  = { .tag = CHOICE_TAG,   .arity = 2, .name = "?",       .hnf = &choice_hnf,  .hnf_RET = &choice_RET_hnf   };
static Symbol forward_symbol = { .tag = FORWARD_TAG,  .arity = 1, .name = "->",      .hnf = &forward_hnf, .hnf_RET = &forward_RET_hnf  };
static Symbol free_symbol    = { .tag = FREE_TAG,     .arity = 0, .name = "free",    .hnf = &CTR_hnf,     .hnf_RET = &CTR_RET_hnf      };
static Symbol int_symbol     = { .tag = _int_TAG,     .arity = 1, .name = "int",     .hnf = &CTR_hnf,     .hnf_RET = &CTR_RET_hnf      };
static Symbol char_symbol    = { .tag = _char_TAG,    .arity = 1, .name = "char",    .hnf = &CTR_hnf,     .hnf_RET = &CTR_RET_hnf      };
static Symbol float_symbol   = { .tag = _float_TAG,   .arity = 1, .name = "float",   .hnf = &CTR_hnf,     .hnf_RET = &CTR_RET_hnf      };
static Symbol apply_symbol   = { .tag = FUNCTION_TAG, .arity = 0, .name = "apply",   .hnf = &apply_hnf,   .hnf_RET = &apply_RET_hnf    };
static Symbol RET_symbol     = { .tag = FUNCTION_TAG, .arity = 0, .name = "RET",     .hnf = &CTR_hnf,     .hnf_RET = &CTR_RET_hnf      };

extern field RET;

// the backtracking stack can be used pretty much anywhere
// So it almost has to be a global variable.
// The only alternative is to pass it to every single function.
extern Stack* bt_stack;

// usued to print out the total number of memory allocations.
extern unsigned long mem;

// when I know I'm going to reduce an apply node, I already have the number of arguments
// as part of the name.
// So, I just want these to pass through to apply_hnf.
// This is actually a potential chance for optimization in the future, but I want to graduate sometime.
__attribute__((always_inline)) 
static inline void apply1_hnf(field root) {apply_hnf(root);}
__attribute__((always_inline)) 
static inline void apply2_hnf(field root) {apply_hnf(root);}
__attribute__((always_inline)) 
static inline void apply3_hnf(field root) {apply_hnf(root);}


__attribute__((always_inline)) 
static inline Node* make_restore(Node* backup)
{
    if(!backup)
    {
        backup = (Node*)alloc(sizeof(Node));
    }
    return backup;
}

__attribute__((always_inline)) 
static inline void fail(field root)
{
    root.n->symbol = &fail_symbol;
    root.n->missing = 0;
    child_at_n(root, 0) = NULL;
    child_at_n(root, 1) = NULL;
    child_at_n(root, 2) = NULL;
    root.n->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline void set_choice(field root, field left, field right)
{
    root.n->missing = 0;
    root.n->symbol = &choice_symbol;
    child_at(root,0) = left;
    child_at(root,1) = right;
    child_at(root,2).i = 0;
    root.n->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline void set_forward(field root, field child)
{
    root.n->missing = 0;
    root.n->symbol = &forward_symbol;
    child_at(root,0) = child;
    child_at_n(root,1) = NULL;
    child_at_n(root,2) = NULL;
    root.n->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline field make_forward(field child)
{
    field n;
    n.n = (Node*)alloc(sizeof(Node));
    n.n->nondet = false;
    n.n->missing = 0;
    n.n->symbol = &forward_symbol;
    child_at(n, 0) = child;
    return n;
}

    __attribute__((always_inline)) 
static inline field make_choice(field left, field right)
{
    field n;
    n.n = (Node*)alloc(sizeof(Node));
    n.n->nondet = false;
    n.n->missing = 0;
    n.n->symbol = &choice_symbol;
    child_at(n, 0) = left;
    child_at(n, 1) = right;
    child_at(n, 2).i = 0;
    return n;
}


__attribute__((always_inline)) 
static inline void set__int(field root, long i, int missing)
{
    root.n->missing = 0;
    root.n->symbol = &int_symbol;
    root.n->missing = missing;
    child_at_i(root,0) = i;
    child_at_i(root,1) = INT_CTR;
    child_at_n(root,2) = NULL;
    root.n->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline field make__int(long i, int missing)
{
    field n;
    n.n = (Node*)alloc(sizeof(Node));
    n.n->symbol = &int_symbol;
    n.n->missing = missing;
    child_at_i(n,0) = i;
    child_at_i(n,1) = INT_CTR;
    return n;
}

__attribute__((always_inline)) 
static inline void set__char(field root, long c, int missing)
{
    root.n->missing = 0;
    root.n->symbol = &char_symbol;
    root.n->missing = missing;
    child_at_c(root,0) = c;
    child_at_i(root,1) = CHAR_CTR;
    child_at_n(root,2) = NULL;
    root.n->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline field make__char(long c, int missing)
{
    field n;
    n.n = (Node*)alloc(sizeof(Node));
    n.n->symbol = &char_symbol;
    n.n->missing = missing;
    child_at_c(n,0) = c;
    child_at_i(n,1) = CHAR_CTR;
    return n;
}

__attribute__((always_inline)) 
static inline void set__float(field root, double f, int missing)
{
    root.n->missing = 0;
    root.n->symbol = &float_symbol;
    root.n->missing = missing;
    child_at_f(root,0) = f;
    child_at_i(root,1) = FLOAT_CTR;
    child_at_n(root,2) = NULL;
    root.n->children[3].a = NULL;
}

__attribute__((always_inline)) 
static inline field make__float(double f, int missing)
{
    field n;
    n.n = (Node*)alloc(sizeof(Node));
    n.n->symbol = &float_symbol;
    n.n->missing = missing;
    child_at_f(n,0) = f;
    child_at_i(n,1) = FLOAT_CTR;
    return n;
}


__attribute__((always_inline)) 
static inline field free_var()
{
    field n;
    n.n = (Node*)alloc(sizeof(Node));
    n.n->symbol = &free_symbol;
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
static inline void set_apply1(field root, field f, field v1)
{
    root.n->symbol = &apply_symbol;
    root.n->missing = -1;
    child_at(root,0) = f;
    child_at(root,1) = v1;
}

__attribute__((always_inline)) 
static inline field make_apply1(field f, field v1)
{
    field n;
    n.n = (Node*)alloc(sizeof(Node));
    n.n->symbol = &apply_symbol;
    n.n->missing = -1;
    child_at(n,0) = f;
    child_at(n,1) = v1;
    return n;
}

__attribute__((always_inline)) 
static inline void set_apply2(field root, field f, field v1, field v2)
{
    root.n->symbol = &apply_symbol;
    root.n->missing = -2;
    child_at(root,0) = f;
    child_at(root,1) = v2;
    child_at(root,2) = v1;
}

__attribute__((always_inline)) 
static inline field make_apply2(field f, field v1, field v2)
{
    field n;
    n.n = (Node*)alloc(sizeof(Node));
    n.n->symbol = &apply_symbol;
    n.n->missing = -2;
    child_at(n,0) = f;
    child_at(n,1) = v2;
    child_at(n,2) = v1;
    return n;
}

__attribute__((always_inline)) 
static inline void set_apply3(field root, field f, field v1, field v2, field v3)
{
    root.n->symbol = &apply_symbol;
    root.n->missing = -3;
    root.n->children[3].a = (field*)alloc(sizeof(field) * 1);
    child_at(root,0) = f;
    child_at(root,1) = v3;
    child_at(root,2) = v2;
    child_at(root,3) = v1;
}

__attribute__((always_inline)) 
static inline field make_apply3(field f, field v1, field v2, field v3)
{
    field n;
    n.n = (Node*)alloc(sizeof(Node));
    n.n->symbol = &apply_symbol;
    n.n->missing = -3;
    n.n->children[3].a = (field*)alloc(sizeof(field) * 1);
    child_at(n,0) = f;
    child_at(n,1) = v3;
    child_at(n,2) = v2;
    child_at(n,3) = v1;
    return n;
}


__attribute__((always_inline)) 
static inline unsigned char TAG(field root)
{
    return root.n->symbol->tag;
}

#endif //RUNTIME_H
