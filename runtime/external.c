#include "node.h"
#include "runtime.h"
#include "Prelude.h"

Node* toCurryString(char* str);
char* toCStr_rec(Node* str, int i);
char* toCStr(Node* string);
//Node* contract(Node* v);

bool unify(Node* s, Node* t);


char* toCStr(Node* string)
{
    return toCStr_rec(string, 0);
}

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
    cstr[i] = c->children[0].c;
    return cstr;
}

Node* toCurryString(char* str)
{
    if(*str == '\0')
    {
        return make_Prelude__LB_RB(0);
    }

    return make_Prelude__CO(make__char(*str,0), toCurryString(str+1), 0);
}

bool unify(Node* s, Node* t)
{
    return false;
}


// ensureNotFree
void Prelude_ensureNotFree_hnf(Node* root)
{
  printf("ensureNotFree is undefined\n");
  exit(0);
}

// $!
void Prelude__DL_EX_hnf(Node* root)
{
    Node* v2 = root->children[0].n;
    Node* v1 = root->children[1].n;
    v2->symbol->hnf(v2);
    v2 = v2;
    if(v2->nondet)
    {
        save_copy(root);
    }
    if(v2->symbol->tag == FAIL_TAG)
    {
        fail(root);
    }
    else
    {
        set_apply1(root, v1, v2);
        root->symbol->hnf(root);
    }
}

// $!!
void Prelude__DL_EX_EX_hnf(Node* root)
{
    Node* v2 = root->children[0].n;
    Node* v1 = root->children[1].n;
    nf(v2);
    v2 = v2;
    if(v2->nondet)
    {
        save_copy(root);
    }
    if(v2->symbol->tag == FAIL_TAG ||
       v2->symbol->tag == FREE_TAG)
    {
        fail(root);
    }
    else
    {
        set_apply1(root, v1, v2);
        root->symbol->hnf(root);
    }
}

// $##
void Prelude__DL_HT_HT_hnf(Node* root)
{
    Node* v2 = root->children[0].n;
    Node* v1 = root->children[1].n;
    ground_nf(v2);
    if(v2->nondet)
    {
        save_copy(root);
    }
    if(v2->symbol->tag == FAIL_TAG)
    {
        fail(root);
    }
    else
    {
        set_apply1(root, v1, v2);
        root->symbol->hnf(root);
    }
}

// prim_error
void Prelude_prim_USerror_hnf(Node* root)
{
    char* c = toCStr(root->children[0].n);
    fprintf(stderr, "%s\n", c);
    exit(0);
}

// failed
void Prelude_failed_hnf(Node* root)
{
    fail(root);
}

// =:=
void Prelude__EQ_CO_EQ_hnf(Node* root)
{
    error("=:= not implemented", root);
}

//////////////////////////////////////////////
// I/O
//////////////////////////////////////////////

// >>=$
void Prelude__GT_GT_EQ_DL_hnf(Node* root)
{
    Node* v2 = root->children[0].n;
    Node* v1 = root->children[1].n;
    v2->symbol->hnf(v2);
    set_apply1(root, v1, v2);
}

// returnIO
void Prelude_returnIO_hnf(Node* root) 
{
    set_node(root, root->children[1].n);
    root->symbol->hnf(root);
}

// catch
void Prelude_catch_hnf(Node* root)
{
    error("catch not implemented", root);
}

// show_
void Prelude_prim_USshow_hnf(Node* root)
{
    error("_show is now redundant, use show", root);
}

// failure
void Prelude_failure_hnf(Node* root)
{
    error("failure not implemented", root);
}

// letrec
void Prelude_letrec_hnf(Node* root)
{
    error("letrec not implemented (or used?)", root);
}

// =:<=
void Prelude__EQ_CO_LT_EQ_hnf(Node* root)
{
    error("=:<= (for function patterns) not implemented", root);
}

// =:<<=
void Prelude__EQ_CO_LT_LT_EQ_hnf(Node* root)
{
    error("=:<<= (for function patterns) not implemented", root);
}

void Prelude_ifVar_hnf(Node* root)
{
    if(root->symbol->tag == FREE_TAG)
    {
        set_Prelude_True(root,0);
    }
    else
    {
        set_Prelude_False(root,0);
    }
}

void Prelude_prim_USputChar_hnf(Node* root)
{
    putchar(root->children[0].c);
    set_Prelude__LP_RP(root,0);
}

void Prelude_getChar_hnf(Node* root)
{
    char c = getchar();
    set__char(root, c, 0);
}

void Prelude_prim_USreadFile_hnf(Node* root)
{
    nf(root->children[0].n);
    char* filename = toCStr(root->children[0].n);
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



void Prelude_prim_USwriteFile_hnf(Node* root)
{
    nf(root->children[1].n);
    char* filename = toCStr(root->children[1].n);
    nf(root->children[0].n);
    char* text = toCStr(root->children[0].n);
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

void Prelude_prim_USappendFile_hnf(Node* root)
{
    nf(root->children[1].n);
    char* filename = toCStr(root->children[1].n);
    nf(root->children[0].n);
    char* text = toCStr(root->children[0].n);
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

