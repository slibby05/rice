#include "Node.h"
#include "Prelude.h"

Node* contract(Node* v)
{
    if(v->symbol->tag == FORWARD_TAG)
    {
        while(v->children[0]->symbol->tag == FORWARD_TAG)
        {
            v->children[0] = v->children[0]->children[0];
        }
        return v->children[0];
    }
    return v;
}

char* toCStr(Node* string)
{
    return toCStr(contract(string), 0);
}

char* toCStr(Node* str, int i)
{
    char* cstr;
    if(str->symbol->tag == Prelude_LB_RB_TAG)
    {
        cstr = malloc(i+1);
        cstr[i] = '\0';
        return cstr;
    }
    Node* c = contract(str->children[1]);
    Node* cs = contract(str->children[0]);
    cstr = toCStr(cs, i+1);
    cstr[i] = c->children[0];
    return cstr;
}

Node* toCurryString(char* str)
{
    if(*str == '\0')
    {
        return make__LB_RB();
    }

    return make__CO(make_char(*str), toCurryString(str+1));
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
    Node* v2 = root->children[0];
    Node* v1 = contract(root->children[1]);
    v2->symbol->hnf(v2);
    v2 = contract(v2);
    if(v2->nondet)
    {
        save(root);
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
    Node* v2 = root->children[0];
    Node* v1 = contract(root->children[1]);
    nf(v2);
    v2 = contract(v2);
    if(v2->nondet)
    {
        save(root);
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
    Node* v2 = root->children[0];
    Node* v1 = contract(root->children[1]);
    ground_nf(v2);
    v2 = contract(v2);
    if(v2->nondet)
    {
        save(root);
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
    char* c = to_c_str(root->children[0]);
    printf(stderr, "%s\n", c);
    exit(0);
}

// failed
void Prelude_failed_hnf(Node* root)
{
    fail(root);
}


//////////////////////////////////////////////
// I/O
//////////////////////////////////////////////

// >>=$
void Prelude_GT_GT_EQ_DL_hnf(Node* root)
{
    Node* v2 = root->children[0];
    Node* v1 = root->children[1];
    v2->symbol->hnf(v2);
    set_apply1(root, v1, v2);
}

// return$
void Prelude_return_DL_hnf(Node* root) 
{
    set_node(root, root->children[1]);
    root->symbol->hnf(root);
}

void Prelude_primPutChar_hnf(Node* root)
{
    putc((char) root->children[0]);
    set__LP_RP(root);
}

void Prelude_getChar_hnf(Node* root)
{
    char c = getc(c);
    set__char(root, c);
}

void Prelude_readFile_hnf(Node* root)
{
    char* filename = toCStr(nf(root->children[0]));
    FILE* file = fopen(filename, "r");

    if(file == NULL)
    {
        printf(stderr, "Error: file %s could not be opened\n", filename);
        exit(1);
    }

    fseek(file, 0L, SEEK_END);
    int size = ftell(file);
    char* text = (char*)malloc(size+1);
    rewind(file);

    if(fgets(text, size, file) == NULL)
    {
        printf(stderr, "Error: file %s could not be read\n", filename);
        exit(1);
    }

    fclose(file);

    set_node(root, toCurryString(text));
}


void Prelude_writeFile_hnf(Node* root)
{
    char* filename = toCStr(nf(root->children[1]));
    char* text = toCStr(nf(root->children[0]));
    FIlE* file = fopen(filename, "w");

    if(file == NULL)
    {
        printf(stderr, "Error: file %s could not be opened\n", filename);
        exit(1);
    }

    if(fputs(text, file) == NULL)
    {
        printf(stderr, "Error: file %s could not be written to\n", filename);
        exit(1);
    }

    fclose(file);

    set_Prelude__LP_RP(root);
}

void Prelude_appendFile_hnf(Node* root)
{
    char* filename = toCStr(nf(root->children[1]));
    char* text = toCStr(nf(root->children[0]));
    FIlE* file = fopen(filename, "a");

    if(file == NULL)
    {
        printf(stderr, "Error: file %s could not be opened\n", filename);
        exit(1);
    }

    if(fputs(text, file) == NULL)
    {
        printf(stderr, "Error: file %s could not be written to\n", filename);
        exit(1);
    }

    fclose(file);

    set_Prelude__LP_RP(root);
}



Prelude__DL_EX_hnf'
Prelude__DL_EX_EX_hnf'
Prelude__DL_HT_HT_hnf'
Prelude_prim_USerror_hnf'
Prelude_failed_hnf'
Prelude__EQ_CO_EQ_hnf'
Prelude_prim_USeqChar_hnf'
Prelude_prim_USeqInt_hnf'
Prelude_prim_USeqFloat_hnf'
Prelude_prim_USltEqChar_hnf'
Prelude_prim_USltEqInt_hnf'
Prelude_prim_USltEqFloat_hnf'
Prelude_prim_USord_hnf'
Prelude_prim_USchr_hnf'
Prelude_prim_USInt_USplus_hnf'
Prelude_prim_USInt_USminus_hnf'
Prelude_prim_USInt_UStimes_hnf'
Prelude_prim_USInt_USdiv_hnf'
Prelude_prim_USInt_USmod_hnf'
Prelude_prim_USInt_USquot_hnf'
Prelude_prim_USInt_USrem_hnf'
Prelude_prim_USnegateFloat_hnf'
Prelude__GT_GT_EQ_DL_hnf'
Prelude_returnIO_hnf'
Prelude_prim_USputChar_hnf'
Prelude_getChar_hnf'
Prelude_prim_USreadFile_hnf'
Prelude_prim_USreadFileContents_hnf'
Prelude_prim_USwriteFile_hnf'
Prelude_prim_USappendFile_hnf'
Prelude_catch_hnf'
Prelude_prim_USshow_hnf'
Prelude_apply_hnf'
Prelude_cond_hnf'
Prelude_letrec_hnf'
Prelude__EQ_CO_LT_EQ_hnf'
Prelude__EQ_CO_LT_LT_EQ_hnf'
Prelude_ifVar_hnf'
Prelude_failure_hnf'
Prelude_prim_USreadNatLiteral_hnf'
Prelude_prim_USreadFloatLiteral_hnf'
Prelude_prim_USreadCharLiteral_hnf'
Prelude_prim_USreadStringLiteral_hnf'
Prelude_prim_USFloat_USplus_hnf'
Prelude_prim_USFloat_USminus_hnf'
Prelude_prim_USFloat_UStimes_hnf'
Prelude_prim_USFloat_USdiv_hnf'
Prelude_prim_USi2f_hnf'
Prelude__DL_EX_hnf'
Prelude__DL_EX_EX_hnf'
Prelude__DL_HT_HT_hnf'
Prelude_prim_USerror_hnf'
Prelude_failed_hnf'
Prelude__EQ_CO_EQ_hnf'
Prelude_prim_USeqChar_hnf'
Prelude_prim_USeqInt_hnf'
Prelude_prim_USeqFloat_hnf'
Prelude_prim_USltEqChar_hnf'
Prelude_prim_USltEqInt_hnf'
Prelude_prim_USltEqFloat_hnf'
Prelude_prim_USord_hnf'
Prelude_prim_USchr_hnf'
Prelude_prim_USInt_USplus_hnf'
Prelude_prim_USInt_USminus_hnf'
Prelude_prim_USInt_UStimes_hnf'
Prelude_prim_USInt_USdiv_hnf'
Prelude_prim_USInt_USmod_hnf'
Prelude_prim_USInt_USquot_hnf'
Prelude_prim_USInt_USrem_hnf'
Prelude_prim_USnegateFloat_hnf'
Prelude__GT_GT_EQ_DL_hnf'
Prelude_returnIO_hnf'
Prelude_prim_USputChar_hnf'
Prelude_getChar_hnf'
Prelude_prim_USreadFile_hnf'
Prelude_prim_USreadFileContents_hnf'
Prelude_prim_USwriteFile_hnf'
Prelude_prim_USappendFile_hnf'
Prelude_catch_hnf'
Prelude_prim_USshow_hnf'
Prelude_apply_hnf'
Prelude_cond_hnf'
Prelude_letrec_hnf'
Prelude__EQ_CO_LT_EQ_hnf'
Prelude__EQ_CO_LT_LT_EQ_hnf'
Prelude_ifVar_hnf'
Prelude_failure_hnf'
Prelude_prim_USreadNatLiteral_hnf'
Prelude_prim_USreadFloatLiteral_hnf'
Prelude_prim_USreadCharLiteral_hnf'
Prelude_prim_USreadStringLiteral_hnf'
Prelude_prim_USFloat_USplus_hnf'
Prelude_prim_USFloat_USminus_hnf'
Prelude_prim_USFloat_UStimes_hnf'
Prelude_prim_USFloat_USdiv_hnf'
Prelude_prim_USi2f_hnf'
