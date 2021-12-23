#include "node.h"
#include "runtime.h"
#include "Prelude.h"


bool unify(field s, field t)
{
    while(s.n->symbol->tag == FORWARD_TAG) s = child_at(s,0);
    while(t.n->symbol->tag == FORWARD_TAG) t = child_at(t,0);

    if(s.n->symbol->tag == FAIL_TAG ||
       t.n->symbol->tag == FAIL_TAG)
    {
        return false;
    }
    if(s.n->symbol->tag == FREE_TAG)
    {
        save_copy(s);
        set_forward(s, t);
        return true;
    }
    if(t.n->symbol->tag == FREE_TAG)
    {
        save_copy(t);
        set_forward(t, s);
        return true;
    }
    if(s.n->symbol->tag != t.n->symbol->tag)
    {
        return false;
    }
    if(child_at_i(s,1) == INT_CTR)
    {
        return child_at_i(s,0) == child_at_i(t,0);
    }
    if(child_at_i(s,1) == CHAR_CTR)
    {
        return child_at_c(s,0) == child_at_c(t,0);
    }
    if(child_at_i(s,1) == FLOAT_CTR)
    {
        return child_at_f(s,0) == child_at_f(t,0);
    }

    int i = s.n->symbol->arity;
    while(i --> 0)
    {

        if(!unify(child_at_v(s,i), child_at_v(t,i)))
        {
            return false;
        }
    }
    return true;
}

bool lazyBind(field s, field t)
{
    HNF(s);
    HNF(t);

    while(s.n->symbol->tag == FORWARD_TAG) s = child_at(s,0);
    while(t.n->symbol->tag == FORWARD_TAG) t = child_at(t,0);

    if(s.n->symbol->tag == FAIL_TAG ||
       t.n->symbol->tag == FAIL_TAG)
    {
        return false;
    }
    if(s.n->symbol->tag == FREE_TAG)
    {
        save_copy(s);
        set_forward(s, t);
        return true;
    }
    if(t.n->symbol->tag == FREE_TAG)
    {
        save_copy(t);
        set_forward(t, s);
        return true;
    }
    if(s.n->symbol->tag != t.n->symbol->tag)
    {
        return false;
    }
    if(child_at_i(s,1) == INT_CTR)
    {
        return child_at_i(s,0) == child_at_i(t,0);
    }
    if(child_at_i(s,1) == CHAR_CTR)
    {
        return child_at_c(s,0) == child_at_c(t,0);
    }
    if(child_at_i(s,1) == FLOAT_CTR)
    {
        return child_at_f(s,0) == child_at_f(t,0);
    }

    int i = s.n->symbol->arity;
    while(i --> 0)
    {
        if(!lazyBind(child_at_v(s,i), child_at_v(t,i)))
        {
            return false;
        }
    }
    return true;
}

//////////////////////////////////////////////////////////////////////////////
// code for strings
//////////////////////////////////////////////////////////////////////////////
char* toCStr_rec(Node* str, int i)
{
    char* cstr;
    if(str->symbol->tag == Prelude__LB_RB_TAG)
    {
        cstr = malloc(i+1);
        cstr[i] = '\0';
        return cstr;
    }
    Node* c = str->children[1].n;
    Node* cs = str->children[0].n;
    cstr = toCStr_rec(cs, i+1);
    cstr[i] = (char)c->children[0].c;
    return cstr;
}

char* toCStr(field string)
{
    return toCStr_rec(string.n, 0);
}

field toCurryString(char* str)
{
    if(*str == '\0')
    {
        return make_Prelude__LB_RB(0);
    }

    return make_Prelude__CO(make__char(*str,0), toCurryString(str+1), 0);
}

void setCurryString(field root, char* str)
{
    if(*str == '\0')
    {
        return set_Prelude__LB_RB(root,0);
    }

    set_Prelude__CO(root, make__char(*str,0), toCurryString(str+1), 0);
}



// ensureNotFree
void Prelude_ensureNotFree_hnf(field root)
{
  printf("ensureNotFree is undefined\n");
  exit(0);
}

Node* Prelude_ensureNotFree_RET_hnf(Node* backup)
{
  printf("ensureNotFree is undefined\n");
  exit(0);
}

// $!
void Prelude__DL_EX_hnf(field root)
{
    field v2 = root.n->children[0];
    field v1 = root.n->children[1];
    HNF(v2);
    if(v2.n->nondet)
    {
        save_copy(root);
    }
    if(v2.n->symbol->tag == FAIL_TAG)
    {
        fail(root);
    }
    else
    {
        set_apply1(root, v1, v2);
        apply_hnf(root);
    }
}

Node* Prelude__DL_EX_RET_hnf(Node* backup)
{
    field v2 = RET.n->children[0];
    field v1 = RET.n->children[1];
    HNF(v2);
    if(v2.n->nondet)
    {
        save_RET(backup, copy(RET));
    }
    if(v2.n->symbol->tag == FAIL_TAG)
    {
        fail(RET);
        return backup;
    }
    else
    {
        set_apply1(RET, v1, v2);
        return apply_RET_hnf(backup);
    }
}

// $!!
void Prelude__DL_EX_EX_hnf(field root)
{
    field v2 = root.n->children[0];
    field v1 = root.n->children[1];
    nf(v2);
    if(v2.n->nondet)
    {
        save_copy(root);
    }
    if(v2.n->symbol->tag == FAIL_TAG ||
       v2.n->symbol->tag == FREE_TAG)
    {
        fail(root);
    }
    else
    {
        set_apply1(root, v1, v2);
        apply_hnf(root);
    }
}

Node* Prelude__DL_EX_EX_RET_hnf(Node* backup)
{
    field v2 = RET.n->children[0];
    field v1 = RET.n->children[1];
    nf(v2);
    if(v2.n->nondet)
    {
        save_RET(backup, copy(RET));
    }
    if(v2.n->symbol->tag == FAIL_TAG ||
       v2.n->symbol->tag == FREE_TAG)
    {
        fail(RET);
        return backup;
    }
    else
    {
        set_apply1(RET, v1, v2);
        return apply_RET_hnf(backup);
    }
}

// $##
void Prelude__DL_HT_HT_hnf(field root)
{
    field v2 = root.n->children[0];
    field v1 = root.n->children[1];
    ground_nf(v2);
    if(v2.n->nondet)
    {
        save_copy(root);
    }
    if(v2.n->symbol->tag == FAIL_TAG)
    {
        fail(root);
    }
    else
    {
        set_apply1(root, v1, v2);
        apply_hnf(root);
    }
}

Node* Prelude__DL_HT_HT_RET_hnf(Node* backup)
{
    field v2 = RET.n->children[0];
    field v1 = RET.n->children[1];
    ground_nf(v2);
    if(v2.n->nondet)
    {
        save_RET(backup, copy(RET));
    }
    if(v2.n->symbol->tag == FAIL_TAG)
    {
        fail(RET);
        return backup;
    }
    else
    {
        set_apply1(RET, v1, v2);
        return apply_RET_hnf(backup);
    }
}

// prim_error
void Prelude_prim_USerror_hnf(field root)
{
    char* c = toCStr(root.n->children[0]);
    fprintf(stderr, "%s\n", c);
    exit(0);
}

Node* Prelude_prim_USerror_RET_hnf(Node* backup)
{
    char* c = toCStr(RET.n->children[0]);
    fprintf(stderr, "%s\n", c);
    exit(0);
    return backup;
}

// failed
void Prelude_failed_hnf(field root)
{
    fail(root);
}

Node* Prelude_failed_RET_hnf(Node* backup)
{
    fail(RET);
    return backup;
}

// =:=
void Prelude__EQ_CO_EQ_hnf(field root)
{
    field s = child_at(root,1);
    field t = child_at(root,0);
    nf(s);
    nf(t);

    if(s.n->nondet || t.n->nondet)
    {
      save(root, make_Prelude__EQ_CO_EQ(s,t,0));
    }

    if(unify(s,t))
    {
        set_Prelude_True(root,0);
    }
    else
    {
        fail(root);
    }
}

Node* Prelude__EQ_CO_EQ_RET_hnf(Node* backup)
{
    field s = child_at(RET,1);
    field t = child_at(RET,0);
    nf(s);
    nf(t);

    if(s.n->nondet || t.n->nondet)
    {
      save_RET(backup, make_Prelude__EQ_CO_EQ(s,t,0));
    }

    if(unify(s,t))
    {
        set_Prelude_True(RET,0);
        return backup;
    }
    else
    {
        fail(RET);
        return backup;
    }
}

//////////////////////////////////////////////
// I/O
//////////////////////////////////////////////

// >>=$
void Prelude__GT_GT_EQ_DL_hnf(field root)
{
    field v2 = root.n->children[0];
    field v1 = root.n->children[1];
    HNF(v2);
    set_apply1(root, v1, v2);
    apply_hnf(root);
}

Node* Prelude__GT_GT_EQ_DL_RET_hnf(Node* backup)
{
    field v2 = RET.n->children[0];
    field v1 = RET.n->children[1];
    HNF(v2);
    set_apply1(RET, v1, v2);
    return apply_RET_hnf(backup);
}

// returnIO
void Prelude_returnIO_hnf(field root) 
{
    set_forward(root, child_at(root, 1));
}

Node* Prelude_returnIO_RET_hnf(Node* backup)
{
    set_forward(RET, child_at(RET, 1));
    return backup;
}

// catch
void Prelude_catch_hnf(field root)
{
    error("catch not implemented", root);
}

Node* Prelude_catch_RET_hnf(Node* backup)
{
    error("catch not implemented", RET);
    return backup;
}

// prim_show
void Prelude_prim_USshow_hnf(field root)
{
    char str[50];
    if(root.n->symbol->tag == _float_TAG)
    {
        sprintf(str, "%f", root.n->children[0].f);
    }
    if(root.n->symbol->tag == _int_TAG)
    {
        sprintf(str, "%ld", root.n->children[0].i);
    }
    if(root.n->symbol->tag == _char_TAG)
    {
        sprintf(str, "%c", (char)root.n->children[0].c);
    }
    setCurryString(root, str);
}

Node* Prelude_prim_USshow_RET_hnf(Node* backup)
{
    Prelude_prim_USshow_hnf(RET);
    return backup;
}

// failure
void Prelude_failure_hnf(field root)
{
    error("failure not implemented", root);
}

Node* Prelude_failure_RET_hnf(Node* backup)
{
    error("failure not implemented", RET);
    return backup;
}

// letrec
void Prelude_letrec_hnf(field root)
{
    error("letrec not implemented (or used?)", root);
}

Node* Prelude_letrec_RET_hnf(Node* backup)
{
    error("letrec not implemented (or used?)", RET);
    return backup;
}

// =:<=
void Prelude__EQ_CO_LT_EQ_hnf(field root)
{
    field s = child_at(root,1);
    field t = child_at(root,0);

    if(s.n->nondet || t.n->nondet)
    {
      save(root, make_Prelude__EQ_CO_EQ(s,t,0));
    }

    if(lazyBind(s,t))
    {
        set_Prelude_True(root,0);
    }
    else
    {
        fail(root);
    }
}

Node* Prelude__EQ_CO_LT_EQ_RET_hnf(Node* backup)
{
    field s = child_at(RET,1);
    field t = child_at(RET,0);

    if(s.n->nondet || t.n->nondet)
    {
      save_RET(backup, make_Prelude__EQ_CO_EQ(s,t,0));
    }

    if(lazyBind(s,t))
    {
        set_Prelude_True(RET,0);
        return backup;
    }
    else
    {
        fail(RET);
        return backup;
    }
}

// =:<<=
void Prelude__EQ_CO_LT_LT_EQ_hnf(field root)
{
    error("=:<<= (for function patterns) not implemented", root);
}

Node* Prelude__EQ_CO_LT_LT_EQ_RET_hnf(Node* backup)
{
    error("=:<<= (for function patterns) not implemented", RET);
    return backup;
}

void Prelude_ifVar_hnf(field root)
{
    if(root.n->symbol->tag == FREE_TAG)
    {
        set_Prelude_True(root,0);
    }
    else
    {
        set_Prelude_False(root,0);
    }
}

Node* Prelude_ifVar_RET_hnf(Node* backup)
{
    if(RET.n->symbol->tag == FREE_TAG)
    {
        set_Prelude_True(RET,0);
    }
    else
    {
        set_Prelude_False(RET,0);
    }
    return backup;
}

void Prelude_prim_USputChar_hnf(field root)
{
    putchar((char)child_at_c(root,0));
    set_Prelude__LP_RP(root,0);
}

Node* Prelude_prim_USputChar_RET_hnf(Node* backup)
{
    putchar((char)child_at_c(RET,0));
    set_Prelude__LP_RP(RET,0);
    return backup;
}

void Prelude_getChar_hnf(field root)
{
    char c = getchar();
    set__char(root, c, 0);
}

Node* Prelude_getChar_RET_hnf(Node* backup)
{
    char c = getchar();
    set__char(RET, c, 0);
    return backup;
}

void Prelude_prim_USreadFile_hnf(field root)
{
    nf(root.n->children[0]);
    char* filename = toCStr(root.n->children[0]);
    FILE* file = fopen(filename, "r");

    if(file == NULL)
    {
        fprintf(stderr, "Error: file %s could not be opened\n", filename);
        exit(1);
    }

    fseek(file, 0L, SEEK_END);
    int size = ftell(file);
    char* text = (char*)malloc(size+1);
    rewind(file);

    if(fgets(text, size, file) == NULL)
    {
        fprintf(stderr, "Error: file %s could not be read\n", filename);
        exit(1);
    }

    fclose(file);

    memcpy(root.n, toCurryString(text).n, sizeof(Node));
}

Node* Prelude_prim_USreadFile_RET_hnf(Node* backup)
{
    Prelude_prim_USreadFile_hnf(RET);
    return backup;
}

void Prelude_prim_USwriteFile_hnf(field root)
{
    nf(root.n->children[1]);
    char* filename = toCStr(root.n->children[1]);
    nf(root.n->children[0]);
    char* text = toCStr(root.n->children[0]);
    FILE* file = fopen(filename, "w");

    if(file == NULL)
    {
        fprintf(stderr, "Error: file %s could not be opened\n", filename);
        exit(1);
    }

    if(fputs(text, file) == EOF)
    {
        fprintf(stderr, "Error: file %s could not be written to\n", filename);
        exit(1);
    }

    fclose(file);

    set_Prelude__LP_RP(root,0);
}
Node* Prelude_prim_USwriteFile_RET_hnf(Node* backup)
{
    Prelude_prim_USwriteFile_hnf(RET);
    return backup;
}

void Prelude_prim_USappendFile_hnf(field root)
{
    nf(root.n->children[1]);
    char* filename = toCStr(root.n->children[1]);
    nf(root.n->children[0]);
    char* text = toCStr(root.n->children[0]);
    FILE* file = fopen(filename, "a");

    if(file == NULL)
    {
        fprintf(stderr, "Error: file %s could not be opened\n", filename);
        exit(1);
    }

    if(fputs(text, file) == EOF)
    {
        fprintf(stderr, "Error: file %s could not be written to\n", filename);
        exit(1);
    }

    fclose(file);

    set_Prelude__LP_RP(root,0);
}

Node* Prelude_prim_USappendFile_RET_hnf(Node* backup)
{
    Prelude_prim_USappendFile_hnf(RET);
    return backup;
}
