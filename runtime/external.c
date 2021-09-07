#include "node.h"
#include "runtime.h"
#include "Prelude.h"

bool unify(field s, field t);


bool unify(field s, field t)
{
    return false;
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
        HNF(root);
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
        HNF(root);
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
        HNF(root);
    }
}

// prim_error
void Prelude_prim_USerror_hnf(field root)
{
    char* c = toCStr(root.n->children[0]);
    fprintf(stderr, "%s\n", c);
    exit(0);
}

// failed
void Prelude_failed_hnf(field root)
{
    fail(root);
}

// =:=
void Prelude__EQ_CO_EQ_hnf(field root)
{
    error("=:= not implemented", root);
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
    HNF(root);
}

// returnIO
void Prelude_returnIO_hnf(field root) 
{
    set_node(root, root.n->children[1]);
    HNF(root);
}

// catch
void Prelude_catch_hnf(field root)
{
    error("catch not implemented", root);
}

// prim_show
void Prelude_prim_USshow_hnf(field root)
{
    char str[50];
    if(root.n->symbol->tag == FLOAT_TAG)
    {
        sprintf(str, "%f", root.n->children[0].f);
    }
    if(root.n->symbol->tag == INT_TAG)
    {
        sprintf(str, "%ld", root.n->children[0].i);
    }
    if(root.n->symbol->tag == CHAR_TAG)
    {
        sprintf(str, "%c", (char)root.n->children[0].c);
    }
    setCurryString(root, str);
}

// failure
void Prelude_failure_hnf(field root)
{
    error("failure not implemented", root);
}

// letrec
void Prelude_letrec_hnf(field root)
{
    error("letrec not implemented (or used?)", root);
}

// =:<=
void Prelude__EQ_CO_LT_EQ_hnf(field root)
{
    error("=:<= (for function patterns) not implemented", root);
}

// =:<<=
void Prelude__EQ_CO_LT_LT_EQ_hnf(field root)
{
    error("=:<<= (for function patterns) not implemented", root);
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

void Prelude_prim_USputChar_hnf(field root)
{
    putchar((char)root.n->children[0].c);
    set_Prelude__LP_RP(root,0);
}

void Prelude_getChar_hnf(field root)
{
    char c = getchar();
    set__char(root, c, 0);
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

    set_node(root, toCurryString(text));
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

