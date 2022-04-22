#include "PreludeNum.h"
#include "debug.h"
#include "runtime.h"
#include "PreludeBase.h"
#include "PreludeCompare.h"

// powaux
void Prelude_powaux_hnf(field root)
{
  debug(LOW, "HNF powaux:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_powaux_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving powaux\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_powaux_(v2, v3, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v4;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_powaux__0(v3, v4, v5, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving powaux\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_powaux__0(v3, v4, v5, 0));
                  }
                  field v6;
                  v6 = child_at(scrutinee, 0);
                  set_Prelude_powaux_HTworker(root, v3, v5, v6, 0);
                  Prelude_powaux_HTworker_hnf(root);
                  debug(LOW, "leaving powaux\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// powaux at []
void Prelude_powaux__hnf(field root)
{
  debug(LOW, "HNF powaux@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_powaux_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving powaux\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_powaux_(v2, v3, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v4;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_powaux__0(v3, v4, v5, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving powaux\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_powaux__0(v3, v4, v5, 0));
                  }
                  field v6;
                  v6 = child_at(scrutinee, 0);
                  set_Prelude_powaux_HTworker(root, v3, v5, v6, 0);
                  Prelude_powaux_HTworker_hnf(root);
                  debug(LOW, "leaving powaux\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// powaux at [0]
void Prelude_powaux__0_hnf(field root)
{
  debug(LOW, "HNF powaux@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  {
    bool nondet = false;
    field scrutinee = v4;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_powaux__0(v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving powaux\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_powaux__0(v3, v4, v5, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
          set_Prelude_powaux_HTworker(root, v3, v5, v6, 0);
          Prelude_powaux_HTworker_hnf(root);
          debug(LOW, "leaving powaux\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// powaux
Node* Prelude_powaux_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF powaux:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_powaux_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving powaux\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_powaux_(v2, v3, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v4;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_powaux__0(v3, v4, v5, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving powaux\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_powaux__0(v3, v4, v5, 0));
                  }
                  field v6;
                  v6 = child_at(scrutinee, 0);
                  set_Prelude_powaux_HTworker(root, v3, v5, v6, 0);
                  backup = Prelude_powaux_HTworker_RET_hnf(backup);
                  debug(LOW, "leaving powaux\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// default for + in Num
void Prelude__USdef_HT_PL_HTPrelude_DONum_hnf(field root)
{
  debug(LOW, "HNF _def#+#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `+\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving _def#+#Prelude.Num\n");
  debug_expr(LOW, root);
  return;
}

// default for + in Num
Node* Prelude__USdef_HT_PL_HTPrelude_DONum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#+#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `+\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving _def#+#Prelude.Num\n");
  debug_expr(LOW, root);
  return backup;
}

// default for * in Num
void Prelude__USdef_HT_ST_HTPrelude_DONum_hnf(field root)
{
  debug(LOW, "HNF _def#*#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `*\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving _def#*#Prelude.Num\n");
  debug_expr(LOW, root);
  return;
}

// default for * in Num
Node* Prelude__USdef_HT_ST_HTPrelude_DONum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#*#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `*\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving _def#*#Prelude.Num\n");
  debug_expr(LOW, root);
  return backup;
}

// default for abs in Num
void Prelude__USdef_HTabs_HTPrelude_DONum_hnf(field root)
{
  debug(LOW, "HNF _def#abs#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `abs\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving _def#abs#Prelude.Num\n");
  debug_expr(LOW, root);
  return;
}

// default for abs in Num
Node* Prelude__USdef_HTabs_HTPrelude_DONum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#abs#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `abs\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving _def#abs#Prelude.Num\n");
  debug_expr(LOW, root);
  return backup;
}

// default for signum in Num
void Prelude__USdef_HTsignum_HTPrelude_DONum_hnf(field root)
{
  debug(LOW, "HNF _def#signum#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `signum\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving _def#signum#Prelude.Num\n");
  debug_expr(LOW, root);
  return;
}

// default for signum in Num
Node* Prelude__USdef_HTsignum_HTPrelude_DONum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#signum#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `signum\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving _def#signum#Prelude.Num\n");
  debug_expr(LOW, root);
  return backup;
}

// default for fromInt in Num
void Prelude__USdef_HTfromInt_HTPrelude_DONum_hnf(field root)
{
  debug(LOW, "HNF _def#fromInt#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `fromInt\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving _def#fromInt#Prelude.Num\n");
  debug_expr(LOW, root);
  return;
}

// default for fromInt in Num
Node* Prelude__USdef_HTfromInt_HTPrelude_DONum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#fromInt#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `fromInt\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving _def#fromInt#Prelude.Num\n");
  debug_expr(LOW, root);
  return backup;
}

// default for fromFloat in Fractional
void Prelude__USdef_HTfromFloat_HTPrelude_DOFractional_hnf(field root)
{
  debug(LOW, "HNF _def#fromFloat#Prelude.Fractional:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `fromFloat\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving _def#fromFloat#Prelude.Fractional\n");
  debug_expr(LOW, root);
  return;
}

// default for fromFloat in Fractional
Node* Prelude__USdef_HTfromFloat_HTPrelude_DOFractional_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#fromFloat#Prelude.Fractional:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `fromFloat\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving _def#fromFloat#Prelude.Fractional\n");
  debug_expr(LOW, root);
  return backup;
}

// default for divMod in Integral
void Prelude__USdef_HTdivMod_HTPrelude_DOIntegral_hnf(field root)
{
  debug(LOW, "HNF _def#divMod#Prelude.Integral:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `divMod\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving _def#divMod#Prelude.Integral\n");
  debug_expr(LOW, root);
  return;
}

// default for divMod in Integral
Node* Prelude__USdef_HTdivMod_HTPrelude_DOIntegral_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#divMod#Prelude.Integral:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `divMod\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving _def#divMod#Prelude.Integral\n");
  debug_expr(LOW, root);
  return backup;
}

// default for quotRem in Integral
void Prelude__USdef_HTquotRem_HTPrelude_DOIntegral_hnf(field root)
{
  debug(LOW, "HNF _def#quotRem#Prelude.Integral:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `quotRem\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving _def#quotRem#Prelude.Integral\n");
  debug_expr(LOW, root);
  return;
}

// default for quotRem in Integral
Node* Prelude__USdef_HTquotRem_HTPrelude_DOIntegral_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#quotRem#Prelude.Integral:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `quotRem\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving _def#quotRem#Prelude.Integral\n");
  debug_expr(LOW, root);
  return backup;
}

// abs
void Prelude_abs_hnf(field root)
{
  debug(LOW, "HNF abs:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_abs_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving abs\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_abs_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v7);
          debug(LOW, "leaving abs\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// abs at []
void Prelude_abs__hnf(field root)
{
  debug(LOW, "HNF abs@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_abs_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving abs\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_abs_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v7);
          debug(LOW, "leaving abs\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// abs at [0]
void Prelude_abs__0_hnf(field root)
{
  debug(LOW, "HNF abs@[0]\n");
  debug_expr(LOW, root);
  field v7;
  v7 = child_at(root, 0);
  set_forward(root, v7);
  debug(LOW, "leaving abs\n");
  debug_expr(LOW, root);
  return;
}

// abs
Node* Prelude_abs_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF abs:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_abs_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving abs\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_abs_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v7);
          debug(LOW, "leaving abs\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// signum
void Prelude_signum_hnf(field root)
{
  debug(LOW, "HNF signum:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_signum_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving signum\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_signum_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v8);
          debug(LOW, "leaving signum\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// signum at []
void Prelude_signum__hnf(field root)
{
  debug(LOW, "HNF signum@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_signum_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving signum\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_signum_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v8);
          debug(LOW, "leaving signum\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// signum at [0]
void Prelude_signum__0_hnf(field root)
{
  debug(LOW, "HNF signum@[0]\n");
  debug_expr(LOW, root);
  field v8;
  v8 = child_at(root, 0);
  set_forward(root, v8);
  debug(LOW, "leaving signum\n");
  debug_expr(LOW, root);
  return;
}

// signum
Node* Prelude_signum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF signum:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_signum_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving signum\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_signum_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v8);
          debug(LOW, "leaving signum\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// fromFloat
void Prelude_fromFloat_hnf(field root)
{
  debug(LOW, "HNF fromFloat:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_fromFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fromFloat\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_fromFloat_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v6);
          debug(LOW, "leaving fromFloat\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// fromFloat at []
void Prelude_fromFloat__hnf(field root)
{
  debug(LOW, "HNF fromFloat@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_fromFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fromFloat\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_fromFloat_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v6);
          debug(LOW, "leaving fromFloat\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// fromFloat at [0]
void Prelude_fromFloat__0_hnf(field root)
{
  debug(LOW, "HNF fromFloat@[0]\n");
  debug_expr(LOW, root);
  field v6;
  v6 = child_at(root, 0);
  set_forward(root, v6);
  debug(LOW, "leaving fromFloat\n");
  debug_expr(LOW, root);
  return;
}

// fromFloat
Node* Prelude_fromFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF fromFloat:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_fromFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fromFloat\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_fromFloat_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v6);
          debug(LOW, "leaving fromFloat\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// _super#Prelude.Real#Prelude.Num
void Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_hnf(field root)
{
  debug(LOW, "HNF _super#Prelude.Real#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _super#Prelude.Real#Prelude.Num\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTReal_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTReal_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v3);
          debug(LOW, "leaving _super#Prelude.Real#Prelude.Num\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// _super#Prelude.Real#Prelude.Num at []
void Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum__hnf(field root)
{
  debug(LOW, "HNF _super#Prelude.Real#Prelude.Num@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _super#Prelude.Real#Prelude.Num\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTReal_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTReal_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v3);
          debug(LOW, "leaving _super#Prelude.Real#Prelude.Num\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// _super#Prelude.Real#Prelude.Num at [0]
void Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum__0_hnf(field root)
{
  debug(LOW, "HNF _super#Prelude.Real#Prelude.Num@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving _super#Prelude.Real#Prelude.Num\n");
  debug_expr(LOW, root);
  return;
}

// _super#Prelude.Real#Prelude.Num
Node* Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _super#Prelude.Real#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _super#Prelude.Real#Prelude.Num\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTReal_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTReal_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DONum_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v3);
          debug(LOW, "leaving _super#Prelude.Real#Prelude.Num\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// _super#Prelude.Real#Prelude.Ord
void Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_hnf(field root)
{
  debug(LOW, "HNF _super#Prelude.Real#Prelude.Ord:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _super#Prelude.Real#Prelude.Ord\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTReal_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTReal_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v4);
          debug(LOW, "leaving _super#Prelude.Real#Prelude.Ord\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// _super#Prelude.Real#Prelude.Ord at []
void Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd__hnf(field root)
{
  debug(LOW, "HNF _super#Prelude.Real#Prelude.Ord@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _super#Prelude.Real#Prelude.Ord\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTReal_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTReal_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v4);
          debug(LOW, "leaving _super#Prelude.Real#Prelude.Ord\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// _super#Prelude.Real#Prelude.Ord at [0]
void Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd__0_hnf(field root)
{
  debug(LOW, "HNF _super#Prelude.Real#Prelude.Ord@[0]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving _super#Prelude.Real#Prelude.Ord\n");
  debug_expr(LOW, root);
  return;
}

// _super#Prelude.Real#Prelude.Ord
Node* Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _super#Prelude.Real#Prelude.Ord:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _super#Prelude.Real#Prelude.Ord\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTReal_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTReal_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USsuper_HTPrelude_DOReal_HTPrelude_DOOrd_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v4);
          debug(LOW, "leaving _super#Prelude.Real#Prelude.Ord\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// _super#Prelude.Integral#Prelude.Real
void Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_hnf(field root)
{
  debug(LOW, "HNF _super#Prelude.Integral#Prelude.Real:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _super#Prelude.Integral#Prelude.Real\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v3);
          debug(LOW, "leaving _super#Prelude.Integral#Prelude.Real\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// _super#Prelude.Integral#Prelude.Real at []
void Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal__hnf(field root)
{
  debug(LOW, "HNF _super#Prelude.Integral#Prelude.Real@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _super#Prelude.Integral#Prelude.Real\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v3);
          debug(LOW, "leaving _super#Prelude.Integral#Prelude.Real\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// _super#Prelude.Integral#Prelude.Real at [0]
void Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal__0_hnf(field root)
{
  debug(LOW, "HNF _super#Prelude.Integral#Prelude.Real@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving _super#Prelude.Integral#Prelude.Real\n");
  debug_expr(LOW, root);
  return;
}

// _super#Prelude.Integral#Prelude.Real
Node* Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _super#Prelude.Integral#Prelude.Real:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _super#Prelude.Integral#Prelude.Real\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USsuper_HTPrelude_DOIntegral_HTPrelude_DOReal_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v3);
          debug(LOW, "leaving _super#Prelude.Integral#Prelude.Real\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// div
void Prelude_div_hnf(field root)
{
  debug(LOW, "HNF div:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_div_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving div\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_div_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v4);
          debug(LOW, "leaving div\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// div at []
void Prelude_div__hnf(field root)
{
  debug(LOW, "HNF div@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_div_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving div\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_div_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v4);
          debug(LOW, "leaving div\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// div at [0]
void Prelude_div__0_hnf(field root)
{
  debug(LOW, "HNF div@[0]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving div\n");
  debug_expr(LOW, root);
  return;
}

// div
Node* Prelude_div_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF div:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_div_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving div\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_div_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v4);
          debug(LOW, "leaving div\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// mod
void Prelude_mod_hnf(field root)
{
  debug(LOW, "HNF mod:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_mod_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving mod\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_mod_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v5);
          debug(LOW, "leaving mod\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// mod at []
void Prelude_mod__hnf(field root)
{
  debug(LOW, "HNF mod@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_mod_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving mod\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_mod_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v5);
          debug(LOW, "leaving mod\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// mod at [0]
void Prelude_mod__0_hnf(field root)
{
  debug(LOW, "HNF mod@[0]\n");
  debug_expr(LOW, root);
  field v5;
  v5 = child_at(root, 0);
  set_forward(root, v5);
  debug(LOW, "leaving mod\n");
  debug_expr(LOW, root);
  return;
}

// mod
Node* Prelude_mod_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF mod:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_mod_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving mod\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_mod_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v5);
          debug(LOW, "leaving mod\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// quot
void Prelude_quot_hnf(field root)
{
  debug(LOW, "HNF quot:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_quot_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving quot\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_quot_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v6);
          debug(LOW, "leaving quot\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// quot at []
void Prelude_quot__hnf(field root)
{
  debug(LOW, "HNF quot@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_quot_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving quot\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_quot_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v6);
          debug(LOW, "leaving quot\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// quot at [0]
void Prelude_quot__0_hnf(field root)
{
  debug(LOW, "HNF quot@[0]\n");
  debug_expr(LOW, root);
  field v6;
  v6 = child_at(root, 0);
  set_forward(root, v6);
  debug(LOW, "leaving quot\n");
  debug_expr(LOW, root);
  return;
}

// quot
Node* Prelude_quot_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF quot:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_quot_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving quot\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_quot_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v6);
          debug(LOW, "leaving quot\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// rem
void Prelude_rem_hnf(field root)
{
  debug(LOW, "HNF rem:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_rem_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving rem\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_rem_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v7);
          debug(LOW, "leaving rem\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// rem at []
void Prelude_rem__hnf(field root)
{
  debug(LOW, "HNF rem@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_rem_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving rem\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_rem_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v7);
          debug(LOW, "leaving rem\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// rem at [0]
void Prelude_rem__0_hnf(field root)
{
  debug(LOW, "HNF rem@[0]\n");
  debug_expr(LOW, root);
  field v7;
  v7 = child_at(root, 0);
  set_forward(root, v7);
  debug(LOW, "leaving rem\n");
  debug_expr(LOW, root);
  return;
}

// rem
Node* Prelude_rem_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF rem:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_rem_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving rem\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_rem_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v7);
          debug(LOW, "leaving rem\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of fromInt in Num for Int
void Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#fromInt#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving _impl#fromInt#Prelude.Num#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// implementation of fromInt in Num for Int at []
void Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt__hnf(field root)
{
  debug(LOW, "HNF _impl#fromInt#Prelude.Num#Prelude.Int@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving _impl#fromInt#Prelude.Num#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// implementation of fromInt in Num for Int
Node* Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#fromInt#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving _impl#fromInt#Prelude.Num#Prelude.Int\n");
  debug_expr(LOW, root);
  return backup;
}

// /.
void Prelude__FS_DO_hnf(field root)
{
  debug(LOW, "HNF /.:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__FS_DO_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving /.\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__FS_DO_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__FS_DO__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving /.\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__FS_DO__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f / v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving /.\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// /. at []
void Prelude__FS_DO__hnf(field root)
{
  debug(LOW, "HNF /.@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__FS_DO_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving /.\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__FS_DO_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__FS_DO__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving /.\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__FS_DO__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f / v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving /.\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// /. at [0]
void Prelude__FS_DO__0_hnf(field root)
{
  debug(LOW, "HNF /.@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__FS_DO__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving /.\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__FS_DO__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(double)(v4.f / v5.f);
          set__float(root, v6.f, 0);
          debug(LOW, "leaving /.\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// /.
Node* Prelude__FS_DO_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF /.:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__FS_DO_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving /.\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__FS_DO_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__FS_DO__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving /.\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__FS_DO__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f / v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving /.\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// *.
void Prelude__ST_DO_hnf(field root)
{
  debug(LOW, "HNF *.:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_DO_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving *.\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_DO_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__ST_DO__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving *.\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__ST_DO__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f * v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving *.\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// *. at []
void Prelude__ST_DO__hnf(field root)
{
  debug(LOW, "HNF *.@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_DO_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving *.\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_DO_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__ST_DO__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving *.\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__ST_DO__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f * v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving *.\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// *. at [0]
void Prelude__ST_DO__0_hnf(field root)
{
  debug(LOW, "HNF *.@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_DO__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving *.\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_DO__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(double)(v4.f * v5.f);
          set__float(root, v6.f, 0);
          debug(LOW, "leaving *.\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// *.
Node* Prelude__ST_DO_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF *.:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__ST_DO_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving *.\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__ST_DO_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__ST_DO__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving *.\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__ST_DO__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f * v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving *.\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// -.
void Prelude__MI_DO_hnf(field root)
{
  debug(LOW, "HNF -.:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_DO_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving -.\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_DO_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__MI_DO__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving -.\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__MI_DO__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f - v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving -.\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// -. at []
void Prelude__MI_DO__hnf(field root)
{
  debug(LOW, "HNF -.@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_DO_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving -.\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_DO_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__MI_DO__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving -.\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__MI_DO__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f - v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving -.\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// -. at [0]
void Prelude__MI_DO__0_hnf(field root)
{
  debug(LOW, "HNF -.@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_DO__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving -.\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_DO__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(double)(v4.f - v5.f);
          set__float(root, v6.f, 0);
          debug(LOW, "leaving -.\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// -.
Node* Prelude__MI_DO_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF -.:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__MI_DO_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving -.\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__MI_DO_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__MI_DO__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving -.\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__MI_DO__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f - v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving -.\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// +.
void Prelude__PL_DO_hnf(field root)
{
  debug(LOW, "HNF +.:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_DO_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving +.\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_DO_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__PL_DO__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving +.\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__PL_DO__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f + v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving +.\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// +. at []
void Prelude__PL_DO__hnf(field root)
{
  debug(LOW, "HNF +.@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_DO_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving +.\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_DO_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__PL_DO__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving +.\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__PL_DO__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f + v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving +.\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// +. at [0]
void Prelude__PL_DO__0_hnf(field root)
{
  debug(LOW, "HNF +.@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_DO__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving +.\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_DO__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(double)(v4.f + v5.f);
          set__float(root, v6.f, 0);
          debug(LOW, "leaving +.\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// +.
Node* Prelude__PL_DO_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF +.:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__PL_DO_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving +.\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__PL_DO_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__PL_DO__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving +.\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__PL_DO__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f + v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving +.\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// negateFloat
void Prelude_negateFloat_hnf(field root)
{
  debug(LOW, "HNF negateFloat:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_negateFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving negateFloat\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_negateFloat_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(-v3.f);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving negateFloat\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// negateFloat at []
void Prelude_negateFloat__hnf(field root)
{
  debug(LOW, "HNF negateFloat@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_negateFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving negateFloat\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_negateFloat_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(-v3.f);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving negateFloat\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// negateFloat
Node* Prelude_negateFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF negateFloat:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_negateFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving negateFloat\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_negateFloat_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(-v3.f);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving negateFloat\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// rem_
void Prelude_rem_US_hnf(field root)
{
  debug(LOW, "HNF rem_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_rem_US_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving rem_\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_rem_US_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_rem_US__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving rem_\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_rem_US__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i<0 ? -(-v4.i%v5.i) : v4.i%v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving rem_\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// rem_ at []
void Prelude_rem_US__hnf(field root)
{
  debug(LOW, "HNF rem_@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_rem_US_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving rem_\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_rem_US_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_rem_US__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving rem_\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_rem_US__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i<0 ? -(-v4.i%v5.i) : v4.i%v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving rem_\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// rem_ at [0]
void Prelude_rem_US__0_hnf(field root)
{
  debug(LOW, "HNF rem_@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_rem_US__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving rem_\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_rem_US__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(long)(v4.i<0 ? -(-v4.i%v5.i) : v4.i%v5.i);
          set__int(root, v6.i, 0);
          debug(LOW, "leaving rem_\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// rem_
Node* Prelude_rem_US_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF rem_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_rem_US_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving rem_\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_rem_US_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_rem_US__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving rem_\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_rem_US__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i<0 ? -(-v4.i%v5.i) : v4.i%v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving rem_\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of rem in Integral for Int
void Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#rem#Prelude.Integral#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#rem#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#rem#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i<0 ? -(-v4.i%v5.i) : v4.i%v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#rem#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of rem in Integral for Int at []
void Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__hnf(field root)
{
  debug(LOW, "HNF _impl#rem#Prelude.Integral#Prelude.Int@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#rem#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#rem#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i<0 ? -(-v4.i%v5.i) : v4.i%v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#rem#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of rem in Integral for Int at [0]
void Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__0_hnf(field root)
{
  debug(LOW, "HNF _impl#rem#Prelude.Integral#Prelude.Int@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#rem#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(long)(v4.i<0 ? -(-v4.i%v5.i) : v4.i%v5.i);
          set__int(root, v6.i, 0);
          debug(LOW, "leaving _impl#rem#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of rem in Integral for Int
Node* Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#rem#Prelude.Integral#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#rem#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#rem#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i<0 ? -(-v4.i%v5.i) : v4.i%v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#rem#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// quot_
void Prelude_quot_US_hnf(field root)
{
  debug(LOW, "HNF quot_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_quot_US_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving quot_\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_quot_US_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_quot_US__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving quot_\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_quot_US__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i<0 ? -(-v4.i/v5.i) : v4.i/v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving quot_\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// quot_ at []
void Prelude_quot_US__hnf(field root)
{
  debug(LOW, "HNF quot_@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_quot_US_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving quot_\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_quot_US_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_quot_US__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving quot_\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_quot_US__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i<0 ? -(-v4.i/v5.i) : v4.i/v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving quot_\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// quot_ at [0]
void Prelude_quot_US__0_hnf(field root)
{
  debug(LOW, "HNF quot_@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_quot_US__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving quot_\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_quot_US__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(long)(v4.i<0 ? -(-v4.i/v5.i) : v4.i/v5.i);
          set__int(root, v6.i, 0);
          debug(LOW, "leaving quot_\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// quot_
Node* Prelude_quot_US_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF quot_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_quot_US_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving quot_\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_quot_US_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_quot_US__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving quot_\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_quot_US__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i<0 ? -(-v4.i/v5.i) : v4.i/v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving quot_\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of quotRem in Integral for Int
void Prelude__USimpl_HTquotRem_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#quotRem#Prelude.Integral#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_quot_US(v2, v3, 0);
  v5 = make_Prelude_rem_US(v2, v3, 0);
  set_Prelude__LP_CM_RP(root, v4, v5, 0);
  debug(LOW, "leaving _impl#quotRem#Prelude.Integral#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// implementation of quotRem in Integral for Int
Node* Prelude__USimpl_HTquotRem_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#quotRem#Prelude.Integral#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_quot_US(v2, v3, 0);
  v5 = make_Prelude_rem_US(v2, v3, 0);
  set_Prelude__LP_CM_RP(root, v4, v5, 0);
  debug(LOW, "leaving _impl#quotRem#Prelude.Integral#Prelude.Int\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of quot in Integral for Int
void Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#quot#Prelude.Integral#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#quot#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#quot#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i<0 ? -(-v4.i/v5.i) : v4.i/v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#quot#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of quot in Integral for Int at []
void Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__hnf(field root)
{
  debug(LOW, "HNF _impl#quot#Prelude.Integral#Prelude.Int@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#quot#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#quot#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i<0 ? -(-v4.i/v5.i) : v4.i/v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#quot#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of quot in Integral for Int at [0]
void Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__0_hnf(field root)
{
  debug(LOW, "HNF _impl#quot#Prelude.Integral#Prelude.Int@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#quot#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(long)(v4.i<0 ? -(-v4.i/v5.i) : v4.i/v5.i);
          set__int(root, v6.i, 0);
          debug(LOW, "leaving _impl#quot#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of quot in Integral for Int
Node* Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#quot#Prelude.Integral#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#quot#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#quot#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i<0 ? -(-v4.i/v5.i) : v4.i/v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#quot#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// mod_
void Prelude_mod_US_hnf(field root)
{
  debug(LOW, "HNF mod_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_mod_US_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving mod_\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_mod_US_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_mod_US__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving mod_\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_mod_US__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i % v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving mod_\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// mod_ at []
void Prelude_mod_US__hnf(field root)
{
  debug(LOW, "HNF mod_@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_mod_US_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving mod_\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_mod_US_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_mod_US__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving mod_\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_mod_US__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i % v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving mod_\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// mod_ at [0]
void Prelude_mod_US__0_hnf(field root)
{
  debug(LOW, "HNF mod_@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_mod_US__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving mod_\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_mod_US__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(long)(v4.i % v5.i);
          set__int(root, v6.i, 0);
          debug(LOW, "leaving mod_\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// mod_
Node* Prelude_mod_US_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF mod_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_mod_US_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving mod_\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_mod_US_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_mod_US__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving mod_\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_mod_US__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i % v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving mod_\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of mod in Integral for Int
void Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#mod#Prelude.Integral#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#mod#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#mod#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i % v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#mod#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of mod in Integral for Int at []
void Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__hnf(field root)
{
  debug(LOW, "HNF _impl#mod#Prelude.Integral#Prelude.Int@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#mod#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#mod#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i % v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#mod#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of mod in Integral for Int at [0]
void Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__0_hnf(field root)
{
  debug(LOW, "HNF _impl#mod#Prelude.Integral#Prelude.Int@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#mod#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(long)(v4.i % v5.i);
          set__int(root, v6.i, 0);
          debug(LOW, "leaving _impl#mod#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of mod in Integral for Int
Node* Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#mod#Prelude.Integral#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#mod#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#mod#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i % v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#mod#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// div_
void Prelude_div_US_hnf(field root)
{
  debug(LOW, "HNF div_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_div_US_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving div_\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_div_US_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_div_US__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving div_\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_div_US__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i / v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving div_\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// div_ at []
void Prelude_div_US__hnf(field root)
{
  debug(LOW, "HNF div_@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_div_US_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving div_\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_div_US_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_div_US__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving div_\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_div_US__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i / v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving div_\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// div_ at [0]
void Prelude_div_US__0_hnf(field root)
{
  debug(LOW, "HNF div_@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_div_US__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving div_\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_div_US__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(long)(v4.i / v5.i);
          set__int(root, v6.i, 0);
          debug(LOW, "leaving div_\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// div_
Node* Prelude_div_US_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF div_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_div_US_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving div_\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_div_US_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_div_US__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving div_\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_div_US__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i / v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving div_\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of divMod in Integral for Int
void Prelude__USimpl_HTdivMod_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#divMod#Prelude.Integral#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_div_US(v2, v3, 0);
  v5 = make_Prelude_mod_US(v2, v3, 0);
  set_Prelude__LP_CM_RP(root, v4, v5, 0);
  debug(LOW, "leaving _impl#divMod#Prelude.Integral#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// implementation of divMod in Integral for Int
Node* Prelude__USimpl_HTdivMod_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#divMod#Prelude.Integral#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_div_US(v2, v3, 0);
  v5 = make_Prelude_mod_US(v2, v3, 0);
  set_Prelude__LP_CM_RP(root, v4, v5, 0);
  debug(LOW, "leaving _impl#divMod#Prelude.Integral#Prelude.Int\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of div in Integral for Int
void Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#div#Prelude.Integral#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#div#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#div#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i / v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#div#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of div in Integral for Int at []
void Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__hnf(field root)
{
  debug(LOW, "HNF _impl#div#Prelude.Integral#Prelude.Int@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#div#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#div#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i / v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#div#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of div in Integral for Int at [0]
void Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__0_hnf(field root)
{
  debug(LOW, "HNF _impl#div#Prelude.Integral#Prelude.Int@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#div#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(long)(v4.i / v5.i);
          set__int(root, v6.i, 0);
          debug(LOW, "leaving _impl#div#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of div in Integral for Int
Node* Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#div#Prelude.Integral#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#div#Prelude.Integral#Prelude.Int\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#div#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i / v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#div#Prelude.Integral#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// halve
void Prelude_halve_hnf(field root)
{
  debug(LOW, "HNF halve:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_halve_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving halve\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_halve_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.i / 2);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving halve\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// halve at []
void Prelude_halve__hnf(field root)
{
  debug(LOW, "HNF halve@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_halve_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving halve\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_halve_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.i / 2);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving halve\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// halve
Node* Prelude_halve_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF halve:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_halve_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving halve\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_halve_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.i / 2);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving halve\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// *$
void Prelude__ST_DL_hnf(field root)
{
  debug(LOW, "HNF *$:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_DL_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving *$\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_DL_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__ST_DL__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving *$\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__ST_DL__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i * v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving *$\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// *$ at []
void Prelude__ST_DL__hnf(field root)
{
  debug(LOW, "HNF *$@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_DL_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving *$\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_DL_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__ST_DL__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving *$\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__ST_DL__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i * v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving *$\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// *$ at [0]
void Prelude__ST_DL__0_hnf(field root)
{
  debug(LOW, "HNF *$@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_DL__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving *$\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_DL__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(long)(v4.i * v5.i);
          set__int(root, v6.i, 0);
          debug(LOW, "leaving *$\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// *$
Node* Prelude__ST_DL_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF *$:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__ST_DL_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving *$\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__ST_DL_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__ST_DL__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving *$\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__ST_DL__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i * v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving *$\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of * in Num for Int
void Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#*#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i * v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of * in Num for Int at []
void Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__hnf(field root)
{
  debug(LOW, "HNF _impl#*#Prelude.Num#Prelude.Int@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i * v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of * in Num for Int at [0]
void Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__0_hnf(field root)
{
  debug(LOW, "HNF _impl#*#Prelude.Num#Prelude.Int@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(long)(v4.i * v5.i);
          set__int(root, v6.i, 0);
          debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of * in Num for Int
Node* Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#*#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i * v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// -$
void Prelude__MI_DL_hnf(field root)
{
  debug(LOW, "HNF -$:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_DL_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving -$\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_DL_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__MI_DL__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving -$\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__MI_DL__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i - v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving -$\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// -$ at []
void Prelude__MI_DL__hnf(field root)
{
  debug(LOW, "HNF -$@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_DL_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving -$\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_DL_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__MI_DL__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving -$\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__MI_DL__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i - v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving -$\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// -$ at [0]
void Prelude__MI_DL__0_hnf(field root)
{
  debug(LOW, "HNF -$@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_DL__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving -$\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_DL__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(long)(v4.i - v5.i);
          set__int(root, v6.i, 0);
          debug(LOW, "leaving -$\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// -$
Node* Prelude__MI_DL_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF -$:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__MI_DL_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving -$\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__MI_DL_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__MI_DL__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving -$\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__MI_DL__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i - v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving -$\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of negate in Num for Int
void Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#negate#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#negate#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(0 - v3.i);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _impl#negate#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of negate in Num for Int at []
void Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt__hnf(field root)
{
  debug(LOW, "HNF _impl#negate#Prelude.Num#Prelude.Int@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#negate#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(0 - v3.i);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _impl#negate#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of negate in Num for Int
Node* Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#negate#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#negate#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(0 - v3.i);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _impl#negate#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of signum in Num for Int
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#signum#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i <= 0)
          {
            if(v3.i == 0)
            {
              set__int(root, 0, 0);
              debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Int\n");
              debug_expr(LOW, root);
              return;
            }
            else
            {
              set__int(root, -1, 0);
              debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Int\n");
              debug_expr(LOW, root);
              return;
            }
          }
          else
          {
            set__int(root, 1, 0);
            debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Int\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of signum in Num for Int at []
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt__hnf(field root)
{
  debug(LOW, "HNF _impl#signum#Prelude.Num#Prelude.Int@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i <= 0)
          {
            if(v3.i == 0)
            {
              set__int(root, 0, 0);
              debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Int\n");
              debug_expr(LOW, root);
              return;
            }
            else
            {
              set__int(root, -1, 0);
              debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Int\n");
              debug_expr(LOW, root);
              return;
            }
          }
          else
          {
            set__int(root, 1, 0);
            debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Int\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of signum in Num for Int
Node* Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#signum#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i <= 0)
          {
            if(v3.i == 0)
            {
              set__int(root, 0, 0);
              debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Int\n");
              debug_expr(LOW, root);
              return backup;
            }
            else
            {
              set__int(root, -1, 0);
              debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Int\n");
              debug_expr(LOW, root);
              return backup;
            }
          }
          else
          {
            set__int(root, 1, 0);
            debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Int\n");
            debug_expr(LOW, root);
            return backup;
          }
        }
      }
    }
  }
}

// implementation of abs in Num for Int
void Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#abs#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(0 <= v3.i)
          {
            set__int(root, v3.i, 0);
            debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Int\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v4;
            v4 = (field)(long)(0 - v3.i);
            set__int(root, v4.i, 0);
            debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Int\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of abs in Num for Int at []
void Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt__hnf(field root)
{
  debug(LOW, "HNF _impl#abs#Prelude.Num#Prelude.Int@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(0 <= v3.i)
          {
            set__int(root, v3.i, 0);
            debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Int\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v4;
            v4 = (field)(long)(0 - v3.i);
            set__int(root, v4.i, 0);
            debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Int\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of abs in Num for Int
Node* Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#abs#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(0 <= v3.i)
          {
            set__int(root, v3.i, 0);
            debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Int\n");
            debug_expr(LOW, root);
            return backup;
          }
          else
          {
            field v4;
            v4 = (field)(long)(0 - v3.i);
            set__int(root, v4.i, 0);
            debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Int\n");
            debug_expr(LOW, root);
            return backup;
          }
        }
      }
    }
  }
}

// implementation of - in Num for Int
void Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#-#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i - v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of - in Num for Int at []
void Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__hnf(field root)
{
  debug(LOW, "HNF _impl#-#Prelude.Num#Prelude.Int@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i - v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of - in Num for Int at [0]
void Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__0_hnf(field root)
{
  debug(LOW, "HNF _impl#-#Prelude.Num#Prelude.Int@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(long)(v4.i - v5.i);
          set__int(root, v6.i, 0);
          debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of - in Num for Int
Node* Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#-#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i - v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// negate_
void Prelude_negate_US_hnf(field root)
{
  debug(LOW, "HNF negate_:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_negate_US_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving negate_\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_negate_US_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(0 - v3.i);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving negate_\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// negate_ at []
void Prelude_negate_US__hnf(field root)
{
  debug(LOW, "HNF negate_@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_negate_US_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving negate_\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_negate_US_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(0 - v3.i);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving negate_\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// negate_
Node* Prelude_negate_US_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF negate_:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_negate_US_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving negate_\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_negate_US_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(0 - v3.i);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving negate_\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// +$
void Prelude__PL_DL_hnf(field root)
{
  debug(LOW, "HNF +$:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_DL_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving +$\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_DL_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__PL_DL__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving +$\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__PL_DL__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i + v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving +$\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// +$ at []
void Prelude__PL_DL__hnf(field root)
{
  debug(LOW, "HNF +$@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_DL_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving +$\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_DL_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__PL_DL__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving +$\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__PL_DL__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i + v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving +$\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// +$ at [0]
void Prelude__PL_DL__0_hnf(field root)
{
  debug(LOW, "HNF +$@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_DL__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving +$\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_DL__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(long)(v4.i + v5.i);
          set__int(root, v6.i, 0);
          debug(LOW, "leaving +$\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// +$
Node* Prelude__PL_DL_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF +$:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__PL_DL_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving +$\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__PL_DL_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__PL_DL__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving +$\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__PL_DL__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i + v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving +$\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of + in Num for Int
void Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#+#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i + v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of + in Num for Int at []
void Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__hnf(field root)
{
  debug(LOW, "HNF _impl#+#Prelude.Num#Prelude.Int@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i + v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of + in Num for Int at [0]
void Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__0_hnf(field root)
{
  debug(LOW, "HNF _impl#+#Prelude.Num#Prelude.Int@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(long)(v4.i + v5.i);
          set__int(root, v6.i, 0);
          debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of + in Num for Int
Node* Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#+#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Int\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _int_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(long)(v4.i + v5.i);
                  set__int(root, v6.i, 0);
                  debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Int\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// instance of Num for Int
void Prelude__USinst_HTPrelude_DONum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v2 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v3 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v6 = make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTNum(root, v2, v3, v4, v5, v6, v7, v8, 0);
  debug(LOW, "leaving _inst#Prelude.Num#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// instance of Num for Int
Node* Prelude__USinst_HTPrelude_DONum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Num#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v2 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v3 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v6 = make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTNum(root, v2, v3, v4, v5, v6, v7, v8, 0);
  debug(LOW, "leaving _inst#Prelude.Num#Prelude.Int\n");
  debug_expr(LOW, root);
  return backup;
}

// instance of Real for Int
void Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Real#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  field v10;
  v2 = make_Prelude__USinst_HTPrelude_DOOrd_HTPrelude_DOInt(0);
  v3 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v9 = make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v10 = make_Prelude__USDict_HTNum(v3, v4, v5, v6, v7, v8, v9, 0);
  set_Prelude__USDict_HTReal(root, v10, v2, 0);
  debug(LOW, "leaving _inst#Prelude.Real#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// instance of Real for Int
Node* Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Real#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  field v10;
  v2 = make_Prelude__USinst_HTPrelude_DOOrd_HTPrelude_DOInt(0);
  v3 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v9 = make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v10 = make_Prelude__USDict_HTNum(v3, v4, v5, v6, v7, v8, v9, 0);
  set_Prelude__USDict_HTReal(root, v10, v2, 0);
  debug(LOW, "leaving _inst#Prelude.Real#Prelude.Int\n");
  debug_expr(LOW, root);
  return backup;
}

// instance of Integral for Int
void Prelude__USinst_HTPrelude_DOIntegral_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Integral#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v2 = make_Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOInt(0);
  v3 = make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v7 = make_Prelude__USimpl_HTdivMod_HTPrelude_DOIntegral_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = make_Prelude__USimpl_HTquotRem_HTPrelude_DOIntegral_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude__USDict_HTIntegral(root, v2, v3, v4, v5, v6, v7, v8, 0);
  debug(LOW, "leaving _inst#Prelude.Integral#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// instance of Integral for Int
Node* Prelude__USinst_HTPrelude_DOIntegral_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Integral#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v2 = make_Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOInt(0);
  v3 = make_Prelude__USimpl_HTdiv_HTPrelude_DOIntegral_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTmod_HTPrelude_DOIntegral_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HTquot_HTPrelude_DOIntegral_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USimpl_HTrem_HTPrelude_DOIntegral_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v7 = make_Prelude__USimpl_HTdivMod_HTPrelude_DOIntegral_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = make_Prelude__USimpl_HTquotRem_HTPrelude_DOIntegral_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude__USDict_HTIntegral(root, v2, v3, v4, v5, v6, v7, v8, 0);
  debug(LOW, "leaving _inst#Prelude.Integral#Prelude.Int\n");
  debug_expr(LOW, root);
  return backup;
}

// i2f
void Prelude_i2f_hnf(field root)
{
  debug(LOW, "HNF i2f:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_i2f_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving i2f\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_i2f_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(v3.i);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving i2f\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// i2f at []
void Prelude_i2f__hnf(field root)
{
  debug(LOW, "HNF i2f@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_i2f_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving i2f\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_i2f_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(v3.i);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving i2f\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// i2f
Node* Prelude_i2f_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF i2f:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_i2f_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving i2f\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_i2f_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(v3.i);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving i2f\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// quotRem
void Prelude_quotRem_hnf(field root)
{
  debug(LOW, "HNF quotRem:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_quotRem_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving quotRem\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_quotRem_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v9);
          debug(LOW, "leaving quotRem\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// quotRem at []
void Prelude_quotRem__hnf(field root)
{
  debug(LOW, "HNF quotRem@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_quotRem_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving quotRem\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_quotRem_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v9);
          debug(LOW, "leaving quotRem\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// quotRem at [0]
void Prelude_quotRem__0_hnf(field root)
{
  debug(LOW, "HNF quotRem@[0]\n");
  debug_expr(LOW, root);
  field v9;
  v9 = child_at(root, 0);
  set_forward(root, v9);
  debug(LOW, "leaving quotRem\n");
  debug_expr(LOW, root);
  return;
}

// quotRem
Node* Prelude_quotRem_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF quotRem:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_quotRem_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving quotRem\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_quotRem_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v9);
          debug(LOW, "leaving quotRem\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// divMod
void Prelude_divMod_hnf(field root)
{
  debug(LOW, "HNF divMod:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_divMod_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving divMod\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_divMod_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v8);
          debug(LOW, "leaving divMod\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// divMod at []
void Prelude_divMod__hnf(field root)
{
  debug(LOW, "HNF divMod@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_divMod_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving divMod\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_divMod_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v8);
          debug(LOW, "leaving divMod\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// divMod at [0]
void Prelude_divMod__0_hnf(field root)
{
  debug(LOW, "HNF divMod@[0]\n");
  debug_expr(LOW, root);
  field v8;
  v8 = child_at(root, 0);
  set_forward(root, v8);
  debug(LOW, "leaving divMod\n");
  debug_expr(LOW, root);
  return;
}

// divMod
Node* Prelude_divMod_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF divMod:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_divMod_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving divMod\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTIntegral_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTIntegral_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_divMod_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v8);
          debug(LOW, "leaving divMod\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// recip
void Prelude_recip_hnf(field root)
{
  debug(LOW, "HNF recip:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_recip_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving recip\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_recip_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v5);
          debug(LOW, "leaving recip\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// recip at []
void Prelude_recip__hnf(field root)
{
  debug(LOW, "HNF recip@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_recip_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving recip\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_recip_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v5);
          debug(LOW, "leaving recip\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// recip at [0]
void Prelude_recip__0_hnf(field root)
{
  debug(LOW, "HNF recip@[0]\n");
  debug_expr(LOW, root);
  field v5;
  v5 = child_at(root, 0);
  set_forward(root, v5);
  debug(LOW, "leaving recip\n");
  debug_expr(LOW, root);
  return;
}

// recip
Node* Prelude_recip_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF recip:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_recip_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving recip\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_recip_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v5);
          debug(LOW, "leaving recip\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// /
void Prelude__FS_hnf(field root)
{
  debug(LOW, "HNF /:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__FS_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving /\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__FS_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v4);
          debug(LOW, "leaving /\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// / at []
void Prelude__FS__hnf(field root)
{
  debug(LOW, "HNF /@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__FS_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving /\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__FS_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v4);
          debug(LOW, "leaving /\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// / at [0]
void Prelude__FS__0_hnf(field root)
{
  debug(LOW, "HNF /@[0]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving /\n");
  debug_expr(LOW, root);
  return;
}

// /
Node* Prelude__FS_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF /:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__FS_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving /\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__FS_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v4);
          debug(LOW, "leaving /\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// _super#Prelude.Fractional#Prelude.Num
void Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_hnf(field root)
{
  debug(LOW, "HNF _super#Prelude.Fractional#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _super#Prelude.Fractional#Prelude.Num\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v3);
          debug(LOW, "leaving _super#Prelude.Fractional#Prelude.Num\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// _super#Prelude.Fractional#Prelude.Num at []
void Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum__hnf(field root)
{
  debug(LOW, "HNF _super#Prelude.Fractional#Prelude.Num@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _super#Prelude.Fractional#Prelude.Num\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v3);
          debug(LOW, "leaving _super#Prelude.Fractional#Prelude.Num\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// _super#Prelude.Fractional#Prelude.Num at [0]
void Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum__0_hnf(field root)
{
  debug(LOW, "HNF _super#Prelude.Fractional#Prelude.Num@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving _super#Prelude.Fractional#Prelude.Num\n");
  debug_expr(LOW, root);
  return;
}

// _super#Prelude.Fractional#Prelude.Num
Node* Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _super#Prelude.Fractional#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _super#Prelude.Fractional#Prelude.Num\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USsuper_HTPrelude_DOFractional_HTPrelude_DONum_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v3);
          debug(LOW, "leaving _super#Prelude.Fractional#Prelude.Num\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// fromInt
void Prelude_fromInt_hnf(field root)
{
  debug(LOW, "HNF fromInt:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_fromInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fromInt\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_fromInt_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v9);
          debug(LOW, "leaving fromInt\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// fromInt at []
void Prelude_fromInt__hnf(field root)
{
  debug(LOW, "HNF fromInt@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_fromInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fromInt\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_fromInt_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v9);
          debug(LOW, "leaving fromInt\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// fromInt at [0]
void Prelude_fromInt__0_hnf(field root)
{
  debug(LOW, "HNF fromInt@[0]\n");
  debug_expr(LOW, root);
  field v9;
  v9 = child_at(root, 0);
  set_forward(root, v9);
  debug(LOW, "leaving fromInt\n");
  debug_expr(LOW, root);
  return;
}

// fromInt
Node* Prelude_fromInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF fromInt:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_fromInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fromInt\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_fromInt_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v9);
          debug(LOW, "leaving fromInt\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// default for recip in Fractional
void Prelude__USdef_HTrecip_HTPrelude_DOFractional_hnf(field root)
{
  debug(LOW, "HNF _def#recip#Prelude.Fractional:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__FS(v2, 0);
  v5 = make_Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0(v2, 0);
  v6 = make_Prelude_fromInt(v5, 0);
  v7 = make__int(1, 0);
  v8 = make_apply1(v6, v7);
  set_apply2(root, v4, v8, v3);
  apply_hnf(root);
  debug(LOW, "leaving _def#recip#Prelude.Fractional\n");
  debug_expr(LOW, root);
  return;
}

// default for recip in Fractional
Node* Prelude__USdef_HTrecip_HTPrelude_DOFractional_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#recip#Prelude.Fractional:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__FS(v2, 0);
  v5 = make_Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0(v2, 0);
  v6 = make_Prelude_fromInt(v5, 0);
  v7 = make__int(1, 0);
  v8 = make_apply1(v6, v7);
  set_apply2(root, v4, v8, v3);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _def#recip#Prelude.Fractional\n");
  debug_expr(LOW, root);
  return backup;
}

// default for recip in Fractional
void Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_hnf(field root)
{
  debug(LOW, "HNF _def#recip#Prelude.Fractional#A0:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#recip#Prelude.Fractional#A0\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v3);
          debug(LOW, "leaving _def#recip#Prelude.Fractional#A0\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for recip in Fractional at []
void Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0__hnf(field root)
{
  debug(LOW, "HNF _def#recip#Prelude.Fractional#A0@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#recip#Prelude.Fractional#A0\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v3);
          debug(LOW, "leaving _def#recip#Prelude.Fractional#A0\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for recip in Fractional at [0]
void Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0__0_hnf(field root)
{
  debug(LOW, "HNF _def#recip#Prelude.Fractional#A0@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving _def#recip#Prelude.Fractional#A0\n");
  debug_expr(LOW, root);
  return;
}

// default for recip in Fractional
Node* Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#recip#Prelude.Fractional#A0:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#recip#Prelude.Fractional#A0\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HTrecip_HTPrelude_DOFractional_HTA0_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v3);
          debug(LOW, "leaving _def#recip#Prelude.Fractional#A0\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// negate
void Prelude_negate_hnf(field root)
{
  debug(LOW, "HNF negate:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_negate_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving negate\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_negate_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v6);
          debug(LOW, "leaving negate\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// negate at []
void Prelude_negate__hnf(field root)
{
  debug(LOW, "HNF negate@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_negate_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving negate\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_negate_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v6);
          debug(LOW, "leaving negate\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// negate at [0]
void Prelude_negate__0_hnf(field root)
{
  debug(LOW, "HNF negate@[0]\n");
  debug_expr(LOW, root);
  field v6;
  v6 = child_at(root, 0);
  set_forward(root, v6);
  debug(LOW, "leaving negate\n");
  debug_expr(LOW, root);
  return;
}

// negate
Node* Prelude_negate_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF negate:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_negate_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving negate\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_negate_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v6);
          debug(LOW, "leaving negate\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// *
void Prelude__ST_hnf(field root)
{
  debug(LOW, "HNF *:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving *\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v5);
          debug(LOW, "leaving *\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// * at []
void Prelude__ST__hnf(field root)
{
  debug(LOW, "HNF *@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving *\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__ST_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v5);
          debug(LOW, "leaving *\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// * at [0]
void Prelude__ST__0_hnf(field root)
{
  debug(LOW, "HNF *@[0]\n");
  debug_expr(LOW, root);
  field v5;
  v5 = child_at(root, 0);
  set_forward(root, v5);
  debug(LOW, "leaving *\n");
  debug_expr(LOW, root);
  return;
}

// *
Node* Prelude__ST_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF *:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__ST_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving *\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__ST_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v5);
          debug(LOW, "leaving *\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// default for / in Fractional
void Prelude__USdef_HT_FS_HTPrelude_DOFractional_hnf(field root)
{
  debug(LOW, "HNF _def#/#Prelude.Fractional:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1(v2, 0);
  v6 = make_Prelude__ST(v5, 0);
  v7 = make_Prelude_recip(v2, 0);
  v8 = make_apply1(v7, v4);
  set_apply2(root, v6, v3, v8);
  apply_hnf(root);
  debug(LOW, "leaving _def#/#Prelude.Fractional\n");
  debug_expr(LOW, root);
  return;
}

// default for / in Fractional
Node* Prelude__USdef_HT_FS_HTPrelude_DOFractional_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#/#Prelude.Fractional:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1(v2, 0);
  v6 = make_Prelude__ST(v5, 0);
  v7 = make_Prelude_recip(v2, 0);
  v8 = make_apply1(v7, v4);
  set_apply2(root, v6, v3, v8);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _def#/#Prelude.Fractional\n");
  debug_expr(LOW, root);
  return backup;
}

// default for / in Fractional
void Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_hnf(field root)
{
  debug(LOW, "HNF _def#/#Prelude.Fractional#A1:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#/#Prelude.Fractional#A1\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v3);
          debug(LOW, "leaving _def#/#Prelude.Fractional#A1\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for / in Fractional at []
void Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1__hnf(field root)
{
  debug(LOW, "HNF _def#/#Prelude.Fractional#A1@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#/#Prelude.Fractional#A1\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v3);
          debug(LOW, "leaving _def#/#Prelude.Fractional#A1\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for / in Fractional at [0]
void Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1__0_hnf(field root)
{
  debug(LOW, "HNF _def#/#Prelude.Fractional#A1@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving _def#/#Prelude.Fractional#A1\n");
  debug_expr(LOW, root);
  return;
}

// default for / in Fractional
Node* Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#/#Prelude.Fractional#A1:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#/#Prelude.Fractional#A1\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTFractional_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFractional_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HT_FS_HTPrelude_DOFractional_HTA1_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v4 = child_at(scrutinee, 2);
          v3 = child_at(scrutinee, 3);
          set_forward(root, v3);
          debug(LOW, "leaving _def#/#Prelude.Fractional#A1\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// -
void Prelude__MI_hnf(field root)
{
  debug(LOW, "HNF -:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving -\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v4);
          debug(LOW, "leaving -\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// - at []
void Prelude__MI__hnf(field root)
{
  debug(LOW, "HNF -@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving -\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__MI_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v4);
          debug(LOW, "leaving -\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// - at [0]
void Prelude__MI__0_hnf(field root)
{
  debug(LOW, "HNF -@[0]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving -\n");
  debug_expr(LOW, root);
  return;
}

// -
Node* Prelude__MI_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF -:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__MI_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving -\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__MI_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v4);
          debug(LOW, "leaving -\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// default for negate in Num
void Prelude__USdef_HTnegate_HTPrelude_DONum_hnf(field root)
{
  debug(LOW, "HNF _def#negate#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__MI(v2, 0);
  v5 = make_Prelude_fromInt(v2, 0);
  v6 = make__int(0, 0);
  v7 = make_apply1(v5, v6);
  set_apply2(root, v4, v7, v3);
  apply_hnf(root);
  debug(LOW, "leaving _def#negate#Prelude.Num\n");
  debug_expr(LOW, root);
  return;
}

// default for negate in Num
Node* Prelude__USdef_HTnegate_HTPrelude_DONum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#negate#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__MI(v2, 0);
  v5 = make_Prelude_fromInt(v2, 0);
  v6 = make__int(0, 0);
  v7 = make_apply1(v5, v6);
  set_apply2(root, v4, v7, v3);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _def#negate#Prelude.Num\n");
  debug_expr(LOW, root);
  return backup;
}

// +
void Prelude__PL_hnf(field root)
{
  debug(LOW, "HNF +:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving +\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v3);
          debug(LOW, "leaving +\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// + at []
void Prelude__PL__hnf(field root)
{
  debug(LOW, "HNF +@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving +\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__PL_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v3);
          debug(LOW, "leaving +\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// + at [0]
void Prelude__PL__0_hnf(field root)
{
  debug(LOW, "HNF +@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving +\n");
  debug_expr(LOW, root);
  return;
}

// +
Node* Prelude__PL_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF +:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__PL_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving +\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__USDict_HTNum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTNum_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__PL_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          v9 = child_at(scrutinee, 0);
          v8 = child_at(scrutinee, 1);
          v7 = child_at(scrutinee, 2);
          v6 = child_at(scrutinee, 3);
          v5 = child_at(scrutinee, 4);
          v4 = child_at(scrutinee, 5);
          v3 = child_at(scrutinee, 6);
          set_forward(root, v3);
          debug(LOW, "leaving +\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// default for - in Num
void Prelude__USdef_HT_MI_HTPrelude_DONum_hnf(field root)
{
  debug(LOW, "HNF _def#-#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__PL(v2, 0);
  v6 = make_Prelude_negate(v2, 0);
  v7 = make_apply1(v6, v4);
  set_apply2(root, v5, v3, v7);
  apply_hnf(root);
  debug(LOW, "leaving _def#-#Prelude.Num\n");
  debug_expr(LOW, root);
  return;
}

// default for - in Num
Node* Prelude__USdef_HT_MI_HTPrelude_DONum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#-#Prelude.Num:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__PL(v2, 0);
  v6 = make_Prelude_negate(v2, 0);
  v7 = make_apply1(v6, v4);
  set_apply2(root, v5, v3, v7);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _def#-#Prelude.Num\n");
  debug_expr(LOW, root);
  return backup;
}

// default for rem in Integral
void Prelude__USdef_HTrem_HTPrelude_DOIntegral_hnf(field root)
{
  debug(LOW, "HNF _def#rem#Prelude.Integral:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_quotRem(v2, 0);
  v6 = make_apply2(v5, v3, v4);
  {
    bool nondet = false;
    field scrutinee = v6;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTrem_HTPrelude_DOIntegral_(v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#rem#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__LP_CM_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_CM_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTrem_HTPrelude_DOIntegral_(v6, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          set_forward(root, v8);
          debug(LOW, "leaving _def#rem#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for rem in Integral at []
void Prelude__USdef_HTrem_HTPrelude_DOIntegral__hnf(field root)
{
  debug(LOW, "HNF _def#rem#Prelude.Integral@[]\n");
  debug_expr(LOW, root);
  field v6;
  v6 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v6;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTrem_HTPrelude_DOIntegral_(v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#rem#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__LP_CM_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_CM_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTrem_HTPrelude_DOIntegral_(v6, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          set_forward(root, v8);
          debug(LOW, "leaving _def#rem#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for rem in Integral at [0]
void Prelude__USdef_HTrem_HTPrelude_DOIntegral__0_hnf(field root)
{
  debug(LOW, "HNF _def#rem#Prelude.Integral@[0]\n");
  debug_expr(LOW, root);
  field v8;
  v8 = child_at(root, 0);
  set_forward(root, v8);
  debug(LOW, "leaving _def#rem#Prelude.Integral\n");
  debug_expr(LOW, root);
  return;
}

// default for rem in Integral
Node* Prelude__USdef_HTrem_HTPrelude_DOIntegral_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#rem#Prelude.Integral:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_quotRem(v2, 0);
  v6 = make_apply2(v5, v3, v4);
  {
    bool nondet = false;
    field scrutinee = v6;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HTrem_HTPrelude_DOIntegral_(v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#rem#Prelude.Integral\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__LP_CM_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_CM_RP_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HTrem_HTPrelude_DOIntegral_(v6, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          set_forward(root, v8);
          debug(LOW, "leaving _def#rem#Prelude.Integral\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// default for quot in Integral
void Prelude__USdef_HTquot_HTPrelude_DOIntegral_hnf(field root)
{
  debug(LOW, "HNF _def#quot#Prelude.Integral:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_quotRem(v2, 0);
  v6 = make_apply2(v5, v3, v4);
  {
    bool nondet = false;
    field scrutinee = v6;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTquot_HTPrelude_DOIntegral_(v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#quot#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__LP_CM_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_CM_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTquot_HTPrelude_DOIntegral_(v6, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          set_forward(root, v7);
          debug(LOW, "leaving _def#quot#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for quot in Integral at []
void Prelude__USdef_HTquot_HTPrelude_DOIntegral__hnf(field root)
{
  debug(LOW, "HNF _def#quot#Prelude.Integral@[]\n");
  debug_expr(LOW, root);
  field v6;
  v6 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v6;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTquot_HTPrelude_DOIntegral_(v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#quot#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__LP_CM_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_CM_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTquot_HTPrelude_DOIntegral_(v6, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          set_forward(root, v7);
          debug(LOW, "leaving _def#quot#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for quot in Integral at [0]
void Prelude__USdef_HTquot_HTPrelude_DOIntegral__0_hnf(field root)
{
  debug(LOW, "HNF _def#quot#Prelude.Integral@[0]\n");
  debug_expr(LOW, root);
  field v7;
  v7 = child_at(root, 0);
  set_forward(root, v7);
  debug(LOW, "leaving _def#quot#Prelude.Integral\n");
  debug_expr(LOW, root);
  return;
}

// default for quot in Integral
Node* Prelude__USdef_HTquot_HTPrelude_DOIntegral_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#quot#Prelude.Integral:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_quotRem(v2, 0);
  v6 = make_apply2(v5, v3, v4);
  {
    bool nondet = false;
    field scrutinee = v6;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HTquot_HTPrelude_DOIntegral_(v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#quot#Prelude.Integral\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__LP_CM_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_CM_RP_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HTquot_HTPrelude_DOIntegral_(v6, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          set_forward(root, v7);
          debug(LOW, "leaving _def#quot#Prelude.Integral\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// default for mod in Integral
void Prelude__USdef_HTmod_HTPrelude_DOIntegral_hnf(field root)
{
  debug(LOW, "HNF _def#mod#Prelude.Integral:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_divMod(v2, 0);
  v6 = make_apply2(v5, v3, v4);
  {
    bool nondet = false;
    field scrutinee = v6;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTmod_HTPrelude_DOIntegral_(v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#mod#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__LP_CM_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_CM_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTmod_HTPrelude_DOIntegral_(v6, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          set_forward(root, v8);
          debug(LOW, "leaving _def#mod#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for mod in Integral at []
void Prelude__USdef_HTmod_HTPrelude_DOIntegral__hnf(field root)
{
  debug(LOW, "HNF _def#mod#Prelude.Integral@[]\n");
  debug_expr(LOW, root);
  field v6;
  v6 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v6;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTmod_HTPrelude_DOIntegral_(v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#mod#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__LP_CM_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_CM_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTmod_HTPrelude_DOIntegral_(v6, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          set_forward(root, v8);
          debug(LOW, "leaving _def#mod#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for mod in Integral at [0]
void Prelude__USdef_HTmod_HTPrelude_DOIntegral__0_hnf(field root)
{
  debug(LOW, "HNF _def#mod#Prelude.Integral@[0]\n");
  debug_expr(LOW, root);
  field v8;
  v8 = child_at(root, 0);
  set_forward(root, v8);
  debug(LOW, "leaving _def#mod#Prelude.Integral\n");
  debug_expr(LOW, root);
  return;
}

// default for mod in Integral
Node* Prelude__USdef_HTmod_HTPrelude_DOIntegral_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#mod#Prelude.Integral:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_divMod(v2, 0);
  v6 = make_apply2(v5, v3, v4);
  {
    bool nondet = false;
    field scrutinee = v6;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HTmod_HTPrelude_DOIntegral_(v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#mod#Prelude.Integral\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__LP_CM_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_CM_RP_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HTmod_HTPrelude_DOIntegral_(v6, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          set_forward(root, v8);
          debug(LOW, "leaving _def#mod#Prelude.Integral\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// default for div in Integral
void Prelude__USdef_HTdiv_HTPrelude_DOIntegral_hnf(field root)
{
  debug(LOW, "HNF _def#div#Prelude.Integral:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_divMod(v2, 0);
  v6 = make_apply2(v5, v3, v4);
  {
    bool nondet = false;
    field scrutinee = v6;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTdiv_HTPrelude_DOIntegral_(v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#div#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__LP_CM_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_CM_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTdiv_HTPrelude_DOIntegral_(v6, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          set_forward(root, v7);
          debug(LOW, "leaving _def#div#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for div in Integral at []
void Prelude__USdef_HTdiv_HTPrelude_DOIntegral__hnf(field root)
{
  debug(LOW, "HNF _def#div#Prelude.Integral@[]\n");
  debug_expr(LOW, root);
  field v6;
  v6 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v6;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTdiv_HTPrelude_DOIntegral_(v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#div#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__LP_CM_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_CM_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTdiv_HTPrelude_DOIntegral_(v6, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          set_forward(root, v7);
          debug(LOW, "leaving _def#div#Prelude.Integral\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for div in Integral at [0]
void Prelude__USdef_HTdiv_HTPrelude_DOIntegral__0_hnf(field root)
{
  debug(LOW, "HNF _def#div#Prelude.Integral@[0]\n");
  debug_expr(LOW, root);
  field v7;
  v7 = child_at(root, 0);
  set_forward(root, v7);
  debug(LOW, "leaving _def#div#Prelude.Integral\n");
  debug_expr(LOW, root);
  return;
}

// default for div in Integral
Node* Prelude__USdef_HTdiv_HTPrelude_DOIntegral_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#div#Prelude.Integral:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_divMod(v2, 0);
  v6 = make_apply2(v5, v3, v4);
  {
    bool nondet = false;
    field scrutinee = v6;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HTdiv_HTPrelude_DOIntegral_(v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#div#Prelude.Integral\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          push_frame(scrutinee, free_var());
          set_Prelude__LP_CM_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_CM_RP_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HTdiv_HTPrelude_DOIntegral_(v6, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          set_forward(root, v7);
          debug(LOW, "leaving _def#div#Prelude.Integral\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of fromFloat in Fractional for Float
void Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat_hnf(field root)
{
  debug(LOW, "HNF _impl#fromFloat#Prelude.Fractional#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving _impl#fromFloat#Prelude.Fractional#Prelude.Float\n");
  debug_expr(LOW, root);
  return;
}

// implementation of fromFloat in Fractional for Float at []
void Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat__hnf(field root)
{
  debug(LOW, "HNF _impl#fromFloat#Prelude.Fractional#Prelude.Float@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving _impl#fromFloat#Prelude.Fractional#Prelude.Float\n");
  debug_expr(LOW, root);
  return;
}

// implementation of fromFloat in Fractional for Float
Node* Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#fromFloat#Prelude.Fractional#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving _impl#fromFloat#Prelude.Fractional#Prelude.Float\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of / in Fractional for Float
void Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_hnf(field root)
{
  debug(LOW, "HNF _impl#/#Prelude.Fractional#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#/#Prelude.Fractional#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#/#Prelude.Fractional#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f / v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving _impl#/#Prelude.Fractional#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of / in Fractional for Float at []
void Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__hnf(field root)
{
  debug(LOW, "HNF _impl#/#Prelude.Fractional#Prelude.Float@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#/#Prelude.Fractional#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#/#Prelude.Fractional#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f / v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving _impl#/#Prelude.Fractional#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of / in Fractional for Float at [0]
void Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__0_hnf(field root)
{
  debug(LOW, "HNF _impl#/#Prelude.Fractional#Prelude.Float@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#/#Prelude.Fractional#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(double)(v4.f / v5.f);
          set__float(root, v6.f, 0);
          debug(LOW, "leaving _impl#/#Prelude.Fractional#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of / in Fractional for Float
Node* Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#/#Prelude.Fractional#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#/#Prelude.Fractional#Prelude.Float\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#/#Prelude.Fractional#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f / v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving _impl#/#Prelude.Fractional#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of recip in Fractional for Float
void Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_hnf(field root)
{
  debug(LOW, "HNF _impl#recip#Prelude.Fractional#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#recip#Prelude.Fractional#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(1.0 / v3.f);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving _impl#recip#Prelude.Fractional#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of recip in Fractional for Float at []
void Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat__hnf(field root)
{
  debug(LOW, "HNF _impl#recip#Prelude.Fractional#Prelude.Float@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#recip#Prelude.Fractional#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(1.0 / v3.f);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving _impl#recip#Prelude.Fractional#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of recip in Fractional for Float
Node* Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#recip#Prelude.Fractional#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#recip#Prelude.Fractional#Prelude.Float\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(1.0 / v3.f);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving _impl#recip#Prelude.Fractional#Prelude.Float\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of fromInt in Num for Float
void Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root)
{
  debug(LOW, "HNF _impl#fromInt#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#fromInt#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(v3.i);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving _impl#fromInt#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of fromInt in Num for Float at []
void Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat__hnf(field root)
{
  debug(LOW, "HNF _impl#fromInt#Prelude.Num#Prelude.Float@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#fromInt#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(v3.i);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving _impl#fromInt#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of fromInt in Num for Float
Node* Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#fromInt#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#fromInt#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(v3.i);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving _impl#fromInt#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of negate in Num for Float
void Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root)
{
  debug(LOW, "HNF _impl#negate#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#negate#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(-v3.f);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving _impl#negate#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of negate in Num for Float at []
void Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat__hnf(field root)
{
  debug(LOW, "HNF _impl#negate#Prelude.Num#Prelude.Float@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#negate#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(-v3.f);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving _impl#negate#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of negate in Num for Float
Node* Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#negate#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#negate#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(-v3.f);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving _impl#negate#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of signum in Num for Float
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root)
{
  debug(LOW, "HNF _impl#signum#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.f <= 0.0)
          {
            if(v3.f == 0.0)
            {
              set__float(root, 0.0, 0);
              debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Float\n");
              debug_expr(LOW, root);
              return;
            }
            else
            {
              set__float(root, -1.0, 0);
              debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Float\n");
              debug_expr(LOW, root);
              return;
            }
          }
          else
          {
            set__float(root, 1.0, 0);
            debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Float\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of signum in Num for Float at []
void Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat__hnf(field root)
{
  debug(LOW, "HNF _impl#signum#Prelude.Num#Prelude.Float@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.f <= 0.0)
          {
            if(v3.f == 0.0)
            {
              set__float(root, 0.0, 0);
              debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Float\n");
              debug_expr(LOW, root);
              return;
            }
            else
            {
              set__float(root, -1.0, 0);
              debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Float\n");
              debug_expr(LOW, root);
              return;
            }
          }
          else
          {
            set__float(root, 1.0, 0);
            debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Float\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of signum in Num for Float
Node* Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#signum#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.f <= 0.0)
          {
            if(v3.f == 0.0)
            {
              set__float(root, 0.0, 0);
              debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Float\n");
              debug_expr(LOW, root);
              return backup;
            }
            else
            {
              set__float(root, -1.0, 0);
              debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Float\n");
              debug_expr(LOW, root);
              return backup;
            }
          }
          else
          {
            set__float(root, 1.0, 0);
            debug(LOW, "leaving _impl#signum#Prelude.Num#Prelude.Float\n");
            debug_expr(LOW, root);
            return backup;
          }
        }
      }
    }
  }
}

// implementation of abs in Num for Float
void Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root)
{
  debug(LOW, "HNF _impl#abs#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(0.0 <= v3.f)
          {
            set__float(root, v3.f, 0);
            debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Float\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v4;
            v4 = (field)(double)(-v3.f);
            set__float(root, v4.f, 0);
            debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Float\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of abs in Num for Float at []
void Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat__hnf(field root)
{
  debug(LOW, "HNF _impl#abs#Prelude.Num#Prelude.Float@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(0.0 <= v3.f)
          {
            set__float(root, v3.f, 0);
            debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Float\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v4;
            v4 = (field)(double)(-v3.f);
            set__float(root, v4.f, 0);
            debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Float\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of abs in Num for Float
Node* Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#abs#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(0.0 <= v3.f)
          {
            set__float(root, v3.f, 0);
            debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Float\n");
            debug_expr(LOW, root);
            return backup;
          }
          else
          {
            field v4;
            v4 = (field)(double)(-v3.f);
            set__float(root, v4.f, 0);
            debug(LOW, "leaving _impl#abs#Prelude.Num#Prelude.Float\n");
            debug_expr(LOW, root);
            return backup;
          }
        }
      }
    }
  }
}

// implementation of * in Num for Float
void Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root)
{
  debug(LOW, "HNF _impl#*#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f * v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of * in Num for Float at []
void Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__hnf(field root)
{
  debug(LOW, "HNF _impl#*#Prelude.Num#Prelude.Float@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f * v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of * in Num for Float at [0]
void Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__0_hnf(field root)
{
  debug(LOW, "HNF _impl#*#Prelude.Num#Prelude.Float@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(double)(v4.f * v5.f);
          set__float(root, v6.f, 0);
          debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of * in Num for Float
Node* Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#*#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f * v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving _impl#*#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// square
void Prelude_square_hnf(field root)
{
  debug(LOW, "HNF square:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_square_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving square\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_square_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(v3.f * v3.f);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving square\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// square at []
void Prelude_square__hnf(field root)
{
  debug(LOW, "HNF square@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_square_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving square\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_square_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(v3.f * v3.f);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving square\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// square
Node* Prelude_square_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF square:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_square_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving square\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_square_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(double)(v3.f * v3.f);
          set__float(root, v4.f, 0);
          debug(LOW, "leaving square\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// pow
void Prelude_pow_hnf(field root)
{
  debug(LOW, "HNF pow:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_pow_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving pow\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_pow_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          if(0 <= v4.i)
          {
            set_Prelude_powaux_HTworker(root, v2, (field)(double)(1.0), v4, 0);
            Prelude_powaux_HTworker_hnf(root);
            debug(LOW, "leaving pow\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v5;
            field v6;
            v5 = (field)(long)(0 - v4.i);
            set_Prelude_powaux_HTworker(RET, v2, (field)(double)(1.0), v5, 0);
            v6 = RET;
            {
              bool nondet = false;
              field backup6 = (field)Prelude_powaux_HTworker_RET_hnf(NULL);
              field scrutinee = RET;
              if(backup6.n != NULL)
              {
                nondet = true;
                memcpy(backup6.n, RET.n, sizeof(Node));
              }
              else if(RET.n->symbol->tag == FORWARD_TAG)
              {
                backup6 = RET.n->children[0];
              }
              while(true)
              {
                nondet |= scrutinee.n->nondet;
                switch(scrutinee.n->symbol->tag)
                {
                  case FAIL_TAG:
                  {
                    if(nondet)
                    {
                      save(root, make_Prelude_pow__0_1(backup6, 0));
                    }
                    fail(root);
                    debug(LOW, "leaving pow\n");
                    debug_expr(LOW, root);
                    return;
                  }
                  case FUNCTION_TAG:
                  {
                    HNF(scrutinee);
                    break;
                  }
                  case CHOICE_TAG:
                  {
                    choose(scrutinee);
                    break;
                  }
                  case FORWARD_TAG:
                  {
                    scrutinee = scrutinee.n->children[0];
                    break;
                  }
                  case FREE_TAG:
                  {
                    printf("free variable used in primitive operation\n");
                    exit(1);
                  }
                  case _float_TAG:
                  {
                    if(nondet)
                    {
                      save(root, make_Prelude_pow__0_1(backup6, 0));
                    }
                    field v7;
                    field v8;
                    v7 = child_at(scrutinee, 0);
                    v8 = (field)(double)(1.0 / v7.f);
                    set__float(root, v8.f, 0);
                    debug(LOW, "leaving pow\n");
                    debug_expr(LOW, root);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

// pow at []
void Prelude_pow__hnf(field root)
{
  debug(LOW, "HNF pow@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_pow_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving pow\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_pow_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          if(0 <= v4.i)
          {
            set_Prelude_powaux_HTworker(root, v2, (field)(double)(1.0), v4, 0);
            Prelude_powaux_HTworker_hnf(root);
            debug(LOW, "leaving pow\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v5;
            field v6;
            v5 = (field)(long)(0 - v4.i);
            set_Prelude_powaux_HTworker(RET, v2, (field)(double)(1.0), v5, 0);
            v6 = RET;
            {
              bool nondet = false;
              field backup6 = (field)Prelude_powaux_HTworker_RET_hnf(NULL);
              field scrutinee = RET;
              if(backup6.n != NULL)
              {
                nondet = true;
                memcpy(backup6.n, RET.n, sizeof(Node));
              }
              else if(RET.n->symbol->tag == FORWARD_TAG)
              {
                backup6 = RET.n->children[0];
              }
              while(true)
              {
                nondet |= scrutinee.n->nondet;
                switch(scrutinee.n->symbol->tag)
                {
                  case FAIL_TAG:
                  {
                    if(nondet)
                    {
                      save(root, make_Prelude_pow__0_1(backup6, 0));
                    }
                    fail(root);
                    debug(LOW, "leaving pow\n");
                    debug_expr(LOW, root);
                    return;
                  }
                  case FUNCTION_TAG:
                  {
                    HNF(scrutinee);
                    break;
                  }
                  case CHOICE_TAG:
                  {
                    choose(scrutinee);
                    break;
                  }
                  case FORWARD_TAG:
                  {
                    scrutinee = scrutinee.n->children[0];
                    break;
                  }
                  case FREE_TAG:
                  {
                    printf("free variable used in primitive operation\n");
                    exit(1);
                  }
                  case _float_TAG:
                  {
                    if(nondet)
                    {
                      save(root, make_Prelude_pow__0_1(backup6, 0));
                    }
                    field v7;
                    field v8;
                    v7 = child_at(scrutinee, 0);
                    v8 = (field)(double)(1.0 / v7.f);
                    set__float(root, v8.f, 0);
                    debug(LOW, "leaving pow\n");
                    debug_expr(LOW, root);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

// pow at [0,1]
void Prelude_pow__0_1_hnf(field root)
{
  debug(LOW, "HNF pow@[0,1]\n");
  debug_expr(LOW, root);
  field v6;
  v6 = child_at(root, 0);
  {
    bool nondet = false;
    field scrutinee = v6;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_pow__0_1(v6, 0));
          }
          fail(root);
          debug(LOW, "leaving pow\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_pow__0_1(v6, 0));
          }
          field v7;
          field v8;
          v7 = child_at(scrutinee, 0);
          v8 = (field)(double)(1.0 / v7.f);
          set__float(root, v8.f, 0);
          debug(LOW, "leaving pow\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// pow
Node* Prelude_pow_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF pow:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_pow_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving pow\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _int_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_pow_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          if(0 <= v4.i)
          {
            set_Prelude_powaux_HTworker(root, v2, (field)(double)(1.0), v4, 0);
            backup = Prelude_powaux_HTworker_RET_hnf(backup);
            debug(LOW, "leaving pow\n");
            debug_expr(LOW, root);
            return backup;
          }
          else
          {
            field v5;
            field v6;
            v5 = (field)(long)(0 - v4.i);
            set_Prelude_powaux_HTworker(RET, v2, (field)(double)(1.0), v5, 0);
            v6 = RET;
            {
              bool nondet = false;
              field backup6 = (field)Prelude_powaux_HTworker_RET_hnf(NULL);
              field scrutinee = RET;
              if(backup6.n != NULL)
              {
                nondet = true;
                memcpy(backup6.n, RET.n, sizeof(Node));
              }
              else if(RET.n->symbol->tag == FORWARD_TAG)
              {
                backup6 = RET.n->children[0];
              }
              while(true)
              {
                nondet |= scrutinee.n->nondet;
                switch(scrutinee.n->symbol->tag)
                {
                  case FAIL_TAG:
                  {
                    if(nondet)
                    {
                      backup = save_RET(backup, make_Prelude_pow__0_1(backup6, 0));
                    }
                    fail(root);
                    debug(LOW, "leaving pow\n");
                    debug_expr(LOW, root);
                    return backup;
                  }
                  case FUNCTION_TAG:
                  {
                    HNF(scrutinee);
                    break;
                  }
                  case CHOICE_TAG:
                  {
                    choose(scrutinee);
                    break;
                  }
                  case FORWARD_TAG:
                  {
                    scrutinee = scrutinee.n->children[0];
                    break;
                  }
                  case FREE_TAG:
                  {
                    printf("free variable used in primitive operation\n");
                    exit(1);
                  }
                  case _float_TAG:
                  {
                    if(nondet)
                    {
                      backup = save_RET(backup, make_Prelude_pow__0_1(backup6, 0));
                    }
                    field v7;
                    field v8;
                    v7 = child_at(scrutinee, 0);
                    v8 = (field)(double)(1.0 / v7.f);
                    set__float(root, v8.f, 0);
                    debug(LOW, "leaving pow\n");
                    debug_expr(LOW, root);
                    return backup;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of - in Num for Float
void Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root)
{
  debug(LOW, "HNF _impl#-#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f - v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of - in Num for Float at []
void Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__hnf(field root)
{
  debug(LOW, "HNF _impl#-#Prelude.Num#Prelude.Float@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f - v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of - in Num for Float at [0]
void Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__0_hnf(field root)
{
  debug(LOW, "HNF _impl#-#Prelude.Num#Prelude.Float@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(double)(v4.f - v5.f);
          set__float(root, v6.f, 0);
          debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of - in Num for Float
Node* Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#-#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f - v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving _impl#-#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of + in Num for Float
void Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root)
{
  debug(LOW, "HNF _impl#+#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f + v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of + in Num for Float at []
void Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__hnf(field root)
{
  debug(LOW, "HNF _impl#+#Prelude.Num#Prelude.Float@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f + v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

// implementation of + in Num for Float at [0]
void Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__0_hnf(field root)
{
  debug(LOW, "HNF _impl#+#Prelude.Num#Prelude.Float@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v3;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = (field)(double)(v4.f + v5.f);
          set__float(root, v6.f, 0);
          debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of + in Num for Float
Node* Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#+#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Float\n");
          debug_expr(LOW, root);
          return backup;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          {
            bool nondet = false;
            field scrutinee = v3;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
                {
                  scrutinee = scrutinee.n->children[0];
                  break;
                }
                case FREE_TAG:
                {
                  printf("free variable used in primitive operation\n");
                  exit(1);
                }
                case _float_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat__0(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  v5 = child_at(scrutinee, 0);
                  v6 = (field)(double)(v4.f + v5.f);
                  set__float(root, v6.f, 0);
                  debug(LOW, "leaving _impl#+#Prelude.Num#Prelude.Float\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
      }
    }
  }
}

// instance of Num for Float
void Prelude__USinst_HTPrelude_DONum_HTPrelude_DOFloat_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v2 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v3 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v6 = make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTNum(root, v2, v3, v4, v5, v6, v7, v8, 0);
  debug(LOW, "leaving _inst#Prelude.Num#Prelude.Float\n");
  debug_expr(LOW, root);
  return;
}

// instance of Num for Float
Node* Prelude__USinst_HTPrelude_DONum_HTPrelude_DOFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Num#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v2 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v3 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v6 = make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTNum(root, v2, v3, v4, v5, v6, v7, v8, 0);
  debug(LOW, "leaving _inst#Prelude.Num#Prelude.Float\n");
  debug_expr(LOW, root);
  return backup;
}

// instance of Real for Float
void Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOFloat_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Real#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  field v10;
  v2 = make_Prelude__USinst_HTPrelude_DOOrd_HTPrelude_DOFloat(0);
  v3 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v9 = make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v10 = make_Prelude__USDict_HTNum(v3, v4, v5, v6, v7, v8, v9, 0);
  set_Prelude__USDict_HTReal(root, v10, v2, 0);
  debug(LOW, "leaving _inst#Prelude.Real#Prelude.Float\n");
  debug_expr(LOW, root);
  return;
}

// instance of Real for Float
Node* Prelude__USinst_HTPrelude_DOReal_HTPrelude_DOFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Real#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  field v10;
  v2 = make_Prelude__USinst_HTPrelude_DOOrd_HTPrelude_DOFloat(0);
  v3 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v9 = make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v10 = make_Prelude__USDict_HTNum(v3, v4, v5, v6, v7, v8, v9, 0);
  set_Prelude__USDict_HTReal(root, v10, v2, 0);
  debug(LOW, "leaving _inst#Prelude.Real#Prelude.Float\n");
  debug_expr(LOW, root);
  return backup;
}

// instance of Fractional for Float
void Prelude__USinst_HTPrelude_DOFractional_HTPrelude_DOFloat_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Fractional#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  field v10;
  field v11;
  field v12;
  v2 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v3 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v6 = make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v9 = make_Prelude__USDict_HTNum(v2, v3, v4, v5, v6, v7, v8, 0);
  v10 = make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v11 = make_Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v12 = make_Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTFractional(root, v9, v10, v11, v12, 0);
  debug(LOW, "leaving _inst#Prelude.Fractional#Prelude.Float\n");
  debug_expr(LOW, root);
  return;
}

// instance of Fractional for Float
Node* Prelude__USinst_HTPrelude_DOFractional_HTPrelude_DOFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Fractional#Prelude.Float:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  field v10;
  field v11;
  field v12;
  v2 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v3 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HT_ST_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HTnegate_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v6 = make_Prelude__USimpl_HTabs_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTsignum_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTfromInt_HTPrelude_DONum_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v9 = make_Prelude__USDict_HTNum(v2, v3, v4, v5, v6, v7, v8, 0);
  v10 = make_Prelude__USimpl_HT_FS_HTPrelude_DOFractional_HTPrelude_DOFloat((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v11 = make_Prelude__USimpl_HTrecip_HTPrelude_DOFractional_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  v12 = make_Prelude__USimpl_HTfromFloat_HTPrelude_DOFractional_HTPrelude_DOFloat((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTFractional(root, v9, v10, v11, v12, 0);
  debug(LOW, "leaving _inst#Prelude.Fractional#Prelude.Float\n");
  debug_expr(LOW, root);
  return backup;
}

// powaux#worker
void Prelude_powaux_HTworker_hnf(field root)
{
  debug(LOW, "HNF powaux#worker:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  if(v4.i == 0)
  {
    set__float(root, v3.f, 0);
    debug(LOW, "leaving powaux#worker\n");
    debug_expr(LOW, root);
    return;
  }
  else
  {
    field v5;
    v5 = (field)(long)(v4.i % 2);
    if(v5.i == 1)
    {
      {
        bool nondet = false;
        field scrutinee = v2;
        while(true)
        {
          nondet |= scrutinee.n->nondet;
          switch(scrutinee.n->symbol->tag)
          {
            case FAIL_TAG:
            {
              if(nondet)
              {
                save(root, make_Prelude_powaux_HTworker__1_0(v2, v3, v4, 0));
              }
              fail(root);
              debug(LOW, "leaving powaux#worker\n");
              debug_expr(LOW, root);
              return;
            }
            case FUNCTION_TAG:
            {
              HNF(scrutinee);
              break;
            }
            case CHOICE_TAG:
            {
              choose(scrutinee);
              break;
            }
            case FORWARD_TAG:
            {
              scrutinee = scrutinee.n->children[0];
              break;
            }
            case FREE_TAG:
            {
              printf("free variable used in primitive operation\n");
              exit(1);
            }
            case _float_TAG:
            {
              if(nondet)
              {
                save(root, make_Prelude_powaux_HTworker__1_0(v2, v3, v4, 0));
              }
              field v6;
              field v7;
              field v8;
              field v9;
              field v10;
              v6 = child_at(scrutinee, 0);
              v7 = (field)(long)(v4.i / 2);
              v8 = (field)(double)(v3.f * v6.f);
              v9 = (field)(double)(v6.f * v6.f);
              v10 = make__float(v9.f, 0);
              set_Prelude_powaux_HTworker(root, v10, v8, v7, 0);
              Prelude_powaux_HTworker_hnf(root);
              debug(LOW, "leaving powaux#worker\n");
              debug_expr(LOW, root);
              return;
            }
          }
        }
      }
    }
    else
    {
      field v11;
      field v12;
      v11 = (field)(long)(v4.i / 2);
      v12 = make_Prelude_square(v2, 0);
      set_Prelude_powaux_HTworker(root, v12, v3, v11, 0);
      Prelude_powaux_HTworker_hnf(root);
      debug(LOW, "leaving powaux#worker\n");
      debug_expr(LOW, root);
      return;
    }
  }
}

// powaux#worker at [1,0]
void Prelude_powaux_HTworker__1_0_hnf(field root)
{
  debug(LOW, "HNF powaux#worker@[1,0]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_powaux_HTworker__1_0(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving powaux#worker\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
        {
          scrutinee = scrutinee.n->children[0];
          break;
        }
        case FREE_TAG:
        {
          printf("free variable used in primitive operation\n");
          exit(1);
        }
        case _float_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_powaux_HTworker__1_0(v2, v3, v4, 0));
          }
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v6 = child_at(scrutinee, 0);
          v7 = (field)(long)(v4.i / 2);
          v8 = (field)(double)(v3.f * v6.f);
          v9 = (field)(double)(v6.f * v6.f);
          v10 = make__float(v9.f, 0);
          set_Prelude_powaux_HTworker(root, v10, v8, v7, 0);
          Prelude_powaux_HTworker_hnf(root);
          debug(LOW, "leaving powaux#worker\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// powaux#worker
Node* Prelude_powaux_HTworker_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF powaux#worker:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  if(v4.i == 0)
  {
    set__float(root, v3.f, 0);
    debug(LOW, "leaving powaux#worker\n");
    debug_expr(LOW, root);
    return backup;
  }
  else
  {
    field v5;
    v5 = (field)(long)(v4.i % 2);
    if(v5.i == 1)
    {
      {
        bool nondet = false;
        field scrutinee = v2;
        while(true)
        {
          nondet |= scrutinee.n->nondet;
          switch(scrutinee.n->symbol->tag)
          {
            case FAIL_TAG:
            {
              if(nondet)
              {
                backup = save_RET(backup, make_Prelude_powaux_HTworker__1_0(v2, v3, v4, 0));
              }
              fail(root);
              debug(LOW, "leaving powaux#worker\n");
              debug_expr(LOW, root);
              return backup;
            }
            case FUNCTION_TAG:
            {
              HNF(scrutinee);
              break;
            }
            case CHOICE_TAG:
            {
              choose(scrutinee);
              break;
            }
            case FORWARD_TAG:
            {
              scrutinee = scrutinee.n->children[0];
              break;
            }
            case FREE_TAG:
            {
              printf("free variable used in primitive operation\n");
              exit(1);
            }
            case _float_TAG:
            {
              if(nondet)
              {
                backup = save_RET(backup, make_Prelude_powaux_HTworker__1_0(v2, v3, v4, 0));
              }
              field v6;
              field v7;
              field v8;
              field v9;
              field v10;
              v6 = child_at(scrutinee, 0);
              v7 = (field)(long)(v4.i / 2);
              v8 = (field)(double)(v3.f * v6.f);
              v9 = (field)(double)(v6.f * v6.f);
              v10 = make__float(v9.f, 0);
              set_Prelude_powaux_HTworker(root, v10, v8, v7, 0);
              backup = Prelude_powaux_HTworker_RET_hnf(backup);
              debug(LOW, "leaving powaux#worker\n");
              debug_expr(LOW, root);
              return backup;
            }
          }
        }
      }
    }
    else
    {
      field v11;
      field v12;
      v11 = (field)(long)(v4.i / 2);
      v12 = make_Prelude_square(v2, 0);
      set_Prelude_powaux_HTworker(root, v12, v3, v11, 0);
      backup = Prelude_powaux_HTworker_RET_hnf(backup);
      debug(LOW, "leaving powaux#worker\n");
      debug_expr(LOW, root);
      return backup;
    }
  }
}

