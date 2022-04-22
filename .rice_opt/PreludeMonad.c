#include "PreludeMonad.h"
#include "debug.h"
#include "runtime.h"
#include "PreludeBase.h"
#include "PreludeCompare.h"
#include "PreludeNum.h"
#include "PreludeList.h"
#include "PreludeString.h"
#include "PreludeRead.h"

// default for fmap in Functor
void Prelude__USdef_HTfmap_HTPrelude_DOFunctor_hnf(field root)
{
  debug(LOW, "HNF _def#fmap#Prelude.Functor:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `fmap\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving _def#fmap#Prelude.Functor\n");
  debug_expr(LOW, root);
  return;
}

// default for fmap in Functor
Node* Prelude__USdef_HTfmap_HTPrelude_DOFunctor_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#fmap#Prelude.Functor:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `fmap\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving _def#fmap#Prelude.Functor\n");
  debug_expr(LOW, root);
  return backup;
}

// default for >>= in Monad
void Prelude__USdef_HT_GT_GT_EQ_HTPrelude_DOMonad_hnf(field root)
{
  debug(LOW, "HNF _def#>>=#Prelude.Monad:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `>>=\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving _def#>>=#Prelude.Monad\n");
  debug_expr(LOW, root);
  return;
}

// default for >>= in Monad
Node* Prelude__USdef_HT_GT_GT_EQ_HTPrelude_DOMonad_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#>>=#Prelude.Monad:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `>>=\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving _def#>>=#Prelude.Monad\n");
  debug_expr(LOW, root);
  return backup;
}

// default for return in Monad
void Prelude__USdef_HTreturn_HTPrelude_DOMonad_hnf(field root)
{
  debug(LOW, "HNF _def#return#Prelude.Monad:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `return\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving _def#return#Prelude.Monad\n");
  debug_expr(LOW, root);
  return;
}

// default for return in Monad
Node* Prelude__USdef_HTreturn_HTPrelude_DOMonad_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#return#Prelude.Monad:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `return\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving _def#return#Prelude.Monad\n");
  debug_expr(LOW, root);
  return backup;
}

// maybe
void Prelude_maybe_hnf(field root)
{
  debug(LOW, "HNF maybe:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            save(root, make_Prelude_maybe_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving maybe\n");
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
          push_choice(scrutinee, make_Prelude_Just_free());
          set_Prelude_Nothing_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_Nothing_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_maybe_(v2, v3, v4, 0));
          }
          set_forward(root, v2);
          debug(LOW, "leaving maybe\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_Just_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_maybe_(v2, v3, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          set_apply1(root, v3, v5);
          apply_hnf(root);
          debug(LOW, "leaving maybe\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// maybe at []
void Prelude_maybe__hnf(field root)
{
  debug(LOW, "HNF maybe@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            save(root, make_Prelude_maybe_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving maybe\n");
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
          push_choice(scrutinee, make_Prelude_Just_free());
          set_Prelude_Nothing_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_Nothing_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_maybe_(v2, v3, v4, 0));
          }
          set_forward(root, v2);
          debug(LOW, "leaving maybe\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_Just_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_maybe_(v2, v3, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          set_apply1(root, v3, v5);
          apply_hnf(root);
          debug(LOW, "leaving maybe\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// maybe at [0]
void Prelude_maybe__0_hnf(field root)
{
  debug(LOW, "HNF maybe@[0]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving maybe\n");
  debug_expr(LOW, root);
  return;
}

// maybe
Node* Prelude_maybe_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF maybe:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            backup = save_RET(backup, make_Prelude_maybe_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving maybe\n");
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
          push_choice(scrutinee, make_Prelude_Just_free());
          set_Prelude_Nothing_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_Nothing_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_maybe_(v2, v3, v4, 0));
          }
          set_forward(root, v2);
          debug(LOW, "leaving maybe\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_Just_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_maybe_(v2, v3, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          set_apply1(root, v3, v5);
          backup = apply_RET_hnf(backup);
          debug(LOW, "leaving maybe\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// either
void Prelude_either_hnf(field root)
{
  debug(LOW, "HNF either:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            save(root, make_Prelude_either_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving either\n");
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
          push_choice(scrutinee, make_Prelude_Left_free());
          set_Prelude_Right_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_Right_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_either_(v2, v3, v4, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
          set_apply1(root, v3, v6);
          apply_hnf(root);
          debug(LOW, "leaving either\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_Left_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_either_(v2, v3, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          set_apply1(root, v2, v5);
          apply_hnf(root);
          debug(LOW, "leaving either\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// either at []
void Prelude_either__hnf(field root)
{
  debug(LOW, "HNF either@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            save(root, make_Prelude_either_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving either\n");
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
          push_choice(scrutinee, make_Prelude_Left_free());
          set_Prelude_Right_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_Right_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_either_(v2, v3, v4, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
          set_apply1(root, v3, v6);
          apply_hnf(root);
          debug(LOW, "leaving either\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_Left_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_either_(v2, v3, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          set_apply1(root, v2, v5);
          apply_hnf(root);
          debug(LOW, "leaving either\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// either
Node* Prelude_either_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF either:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            backup = save_RET(backup, make_Prelude_either_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving either\n");
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
          push_choice(scrutinee, make_Prelude_Left_free());
          set_Prelude_Right_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_Right_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_either_(v2, v3, v4, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
          set_apply1(root, v3, v6);
          backup = apply_RET_hnf(backup);
          debug(LOW, "leaving either\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_Left_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_either_(v2, v3, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          set_apply1(root, v2, v5);
          backup = apply_RET_hnf(backup);
          debug(LOW, "leaving either\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// userError
void Prelude_userError_hnf(field root)
{
  debug(LOW, "HNF userError:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_Prelude_UserError(root, v2, 0);
  debug(LOW, "leaving userError\n");
  debug_expr(LOW, root);
  return;
}

// userError
Node* Prelude_userError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF userError:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_Prelude_UserError(root, v2, 0);
  debug(LOW, "leaving userError\n");
  debug_expr(LOW, root);
  return backup;
}

// ioError
void Prelude_ioError_hnf(field root)
{
  debug(LOW, "HNF ioError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_ioError_HTA0(v2, 0);
  v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  set_Prelude__DL_HT_HT(root, v4, v3, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving ioError\n");
  debug_expr(LOW, root);
  return;
}

// ioError
Node* Prelude_ioError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF ioError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_ioError_HTA0(v2, 0);
  v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  set_Prelude__DL_HT_HT(root, v4, v3, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving ioError\n");
  debug_expr(LOW, root);
  return backup;
}

// ioError#A0
void Prelude_ioError_HTA0_hnf(field root)
{
  debug(LOW, "HNF ioError#A0:\n");
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
            save(root, make_Prelude_ioError_HTA0_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving ioError#A0\n");
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
          push_choice(scrutinee, make_Prelude_NondetError_free());
          push_choice(scrutinee, make_Prelude_IOError_free());
          push_choice(scrutinee, make_Prelude_FailError_free());
          set_Prelude_UserError_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_UserError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_ioError_HTA0_(v2, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = make_Prelude_showError_HTP2(v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_build(root, v6, 0);
          Prelude_build_hnf(root);
          debug(LOW, "leaving ioError#A0\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_NondetError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_ioError_HTA0_(v2, 0));
          }
          field v9;
          field v10;
          v9 = child_at(scrutinee, 0);
          v10 = make_Prelude_showError_HTP4(v9, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_build(root, v10, 0);
          Prelude_build_hnf(root);
          debug(LOW, "leaving ioError#A0\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_IOError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_ioError_HTA0_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = make_Prelude_showError_HTP1(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_build(root, v4, 0);
          Prelude_build_hnf(root);
          debug(LOW, "leaving ioError#A0\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_FailError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_ioError_HTA0_(v2, 0));
          }
          field v7;
          field v8;
          v7 = child_at(scrutinee, 0);
          v8 = make_Prelude_showError_HTP3(v7, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_build(root, v8, 0);
          Prelude_build_hnf(root);
          debug(LOW, "leaving ioError#A0\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// ioError#A0 at []
void Prelude_ioError_HTA0__hnf(field root)
{
  debug(LOW, "HNF ioError#A0@[]\n");
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
            save(root, make_Prelude_ioError_HTA0_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving ioError#A0\n");
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
          push_choice(scrutinee, make_Prelude_NondetError_free());
          push_choice(scrutinee, make_Prelude_IOError_free());
          push_choice(scrutinee, make_Prelude_FailError_free());
          set_Prelude_UserError_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_UserError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_ioError_HTA0_(v2, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = make_Prelude_showError_HTP2(v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_build(root, v6, 0);
          Prelude_build_hnf(root);
          debug(LOW, "leaving ioError#A0\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_NondetError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_ioError_HTA0_(v2, 0));
          }
          field v9;
          field v10;
          v9 = child_at(scrutinee, 0);
          v10 = make_Prelude_showError_HTP4(v9, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_build(root, v10, 0);
          Prelude_build_hnf(root);
          debug(LOW, "leaving ioError#A0\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_IOError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_ioError_HTA0_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = make_Prelude_showError_HTP1(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_build(root, v4, 0);
          Prelude_build_hnf(root);
          debug(LOW, "leaving ioError#A0\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_FailError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_ioError_HTA0_(v2, 0));
          }
          field v7;
          field v8;
          v7 = child_at(scrutinee, 0);
          v8 = make_Prelude_showError_HTP3(v7, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_build(root, v8, 0);
          Prelude_build_hnf(root);
          debug(LOW, "leaving ioError#A0\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// ioError#A0
Node* Prelude_ioError_HTA0_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF ioError#A0:\n");
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
            backup = save_RET(backup, make_Prelude_ioError_HTA0_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving ioError#A0\n");
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
          push_choice(scrutinee, make_Prelude_NondetError_free());
          push_choice(scrutinee, make_Prelude_IOError_free());
          push_choice(scrutinee, make_Prelude_FailError_free());
          set_Prelude_UserError_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_UserError_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_ioError_HTA0_(v2, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = make_Prelude_showError_HTP2(v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_build(root, v6, 0);
          backup = Prelude_build_RET_hnf(backup);
          debug(LOW, "leaving ioError#A0\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_NondetError_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_ioError_HTA0_(v2, 0));
          }
          field v9;
          field v10;
          v9 = child_at(scrutinee, 0);
          v10 = make_Prelude_showError_HTP4(v9, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_build(root, v10, 0);
          backup = Prelude_build_RET_hnf(backup);
          debug(LOW, "leaving ioError#A0\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_IOError_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_ioError_HTA0_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = make_Prelude_showError_HTP1(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_build(root, v4, 0);
          backup = Prelude_build_RET_hnf(backup);
          debug(LOW, "leaving ioError#A0\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_FailError_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_ioError_HTA0_(v2, 0));
          }
          field v7;
          field v8;
          v7 = child_at(scrutinee, 0);
          v8 = make_Prelude_showError_HTP3(v7, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_build(root, v8, 0);
          backup = Prelude_build_RET_hnf(backup);
          debug(LOW, "leaving ioError#A0\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// fmap
void Prelude_fmap_hnf(field root)
{
  debug(LOW, "HNF fmap:\n");
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
            save(root, make_Prelude_fmap_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fmap\n");
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
          set_Prelude__USDict_HTFunctor_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFunctor_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_fmap_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          set_forward(root, v3);
          debug(LOW, "leaving fmap\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// fmap at []
void Prelude_fmap__hnf(field root)
{
  debug(LOW, "HNF fmap@[]\n");
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
            save(root, make_Prelude_fmap_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fmap\n");
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
          set_Prelude__USDict_HTFunctor_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFunctor_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_fmap_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          set_forward(root, v3);
          debug(LOW, "leaving fmap\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// fmap at [0]
void Prelude_fmap__0_hnf(field root)
{
  debug(LOW, "HNF fmap@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving fmap\n");
  debug_expr(LOW, root);
  return;
}

// fmap
Node* Prelude_fmap_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF fmap:\n");
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
            backup = save_RET(backup, make_Prelude_fmap_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fmap\n");
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
          set_Prelude__USDict_HTFunctor_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTFunctor_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_fmap_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          set_forward(root, v3);
          debug(LOW, "leaving fmap\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// fail
void Prelude_fail_hnf(field root)
{
  debug(LOW, "HNF fail:\n");
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
            save(root, make_Prelude_fail_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fail\n");
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
          set_Prelude__USDict_HTMonad_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTMonad_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_fail_(v2, 0));
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
          debug(LOW, "leaving fail\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// fail at []
void Prelude_fail__hnf(field root)
{
  debug(LOW, "HNF fail@[]\n");
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
            save(root, make_Prelude_fail_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fail\n");
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
          set_Prelude__USDict_HTMonad_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTMonad_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_fail_(v2, 0));
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
          debug(LOW, "leaving fail\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// fail at [0]
void Prelude_fail__0_hnf(field root)
{
  debug(LOW, "HNF fail@[0]\n");
  debug_expr(LOW, root);
  field v6;
  v6 = child_at(root, 0);
  set_forward(root, v6);
  debug(LOW, "leaving fail\n");
  debug_expr(LOW, root);
  return;
}

// fail
Node* Prelude_fail_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF fail:\n");
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
            backup = save_RET(backup, make_Prelude_fail_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fail\n");
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
          set_Prelude__USDict_HTMonad_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTMonad_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_fail_(v2, 0));
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
          debug(LOW, "leaving fail\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// makeNondetError
void Prelude_makeNondetError_hnf(field root)
{
  debug(LOW, "HNF makeNondetError:\n");
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
            save(root, make_Prelude_makeNondetError_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving makeNondetError\n");
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
            save(root, make_Prelude_makeNondetError_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          v5 = make_Prelude_NondetError(v3, 0);
          set_Prelude__LP_CM_RP(root, v5, v4, 0);
          debug(LOW, "leaving makeNondetError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// makeNondetError at []
void Prelude_makeNondetError__hnf(field root)
{
  debug(LOW, "HNF makeNondetError@[]\n");
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
            save(root, make_Prelude_makeNondetError_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving makeNondetError\n");
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
            save(root, make_Prelude_makeNondetError_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          v5 = make_Prelude_NondetError(v3, 0);
          set_Prelude__LP_CM_RP(root, v5, v4, 0);
          debug(LOW, "leaving makeNondetError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// makeNondetError
Node* Prelude_makeNondetError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF makeNondetError:\n");
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
            backup = save_RET(backup, make_Prelude_makeNondetError_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving makeNondetError\n");
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
            backup = save_RET(backup, make_Prelude_makeNondetError_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          v5 = make_Prelude_NondetError(v3, 0);
          set_Prelude__LP_CM_RP(root, v5, v4, 0);
          debug(LOW, "leaving makeNondetError\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// readNondetError
void Prelude_readNondetError_hnf(field root)
{
  debug(LOW, "HNF readNondetError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v2 = child_at(root, 0);
  v3 = make_Prelude_take_HTworker(v2, (field)(long)(11), 0);
  v4 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USDict_HTEq(v4, v5, 0);
  v7 = toCurryString("NondetError");
  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(RET, v6, v3, v7, 0);
  v8 = RET;
  {
    bool nondet = false;
    field backup8 = (field)Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup8.n != NULL)
    {
      nondet = true;
      memcpy(backup8.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup8 = RET.n->children[0];
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
            save(root, make_Prelude_readNondetError_(v2, backup8, 0));
          }
          fail(root);
          debug(LOW, "leaving readNondetError\n");
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
          if(scrutinee.n == RET.n)
          {
            backup8.n = make_restore(backup8.n);
            push_frame(backup8, free_var());
            push_choice(backup8, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readNondetError_(v2, backup8, 0));
          }
          field v9;
          field v10;
          field v11;
          field v12;
          v9 = make_Prelude_drop_HTworker(v2, (field)(long)(9), 0);
          v10 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOChar(v9, 0);
          v11 = make_Prelude_readNondetError_HTP0((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
          v12 = make_Prelude_id((field)(Node*)NULL, 1);
          set_Prelude_build_USfold(root, v11, v12, v10, 0);
          Prelude_build_USfold_hnf(root);
          debug(LOW, "leaving readNondetError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readNondetError_(v2, backup8, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving readNondetError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// readNondetError at []
void Prelude_readNondetError__hnf(field root)
{
  debug(LOW, "HNF readNondetError@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v8;
  v8 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v8;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readNondetError_(v2, v8, 0));
          }
          fail(root);
          debug(LOW, "leaving readNondetError\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readNondetError_(v2, v8, 0));
          }
          field v9;
          field v10;
          field v11;
          field v12;
          v9 = make_Prelude_drop_HTworker(v2, (field)(long)(9), 0);
          v10 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOChar(v9, 0);
          v11 = make_Prelude_readNondetError_HTP0((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
          v12 = make_Prelude_id((field)(Node*)NULL, 1);
          set_Prelude_build_USfold(root, v11, v12, v10, 0);
          Prelude_build_USfold_hnf(root);
          debug(LOW, "leaving readNondetError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readNondetError_(v2, v8, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving readNondetError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// readNondetError
Node* Prelude_readNondetError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF readNondetError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v2 = child_at(root, 0);
  v3 = make_Prelude_take_HTworker(v2, (field)(long)(11), 0);
  v4 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USDict_HTEq(v4, v5, 0);
  v7 = toCurryString("NondetError");
  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(RET, v6, v3, v7, 0);
  v8 = RET;
  {
    bool nondet = false;
    field backup8 = (field)Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup8.n != NULL)
    {
      nondet = true;
      memcpy(backup8.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup8 = RET.n->children[0];
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
            backup = save_RET(backup, make_Prelude_readNondetError_(v2, backup8, 0));
          }
          fail(root);
          debug(LOW, "leaving readNondetError\n");
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
          if(scrutinee.n == RET.n)
          {
            backup8.n = make_restore(backup8.n);
            push_frame(backup8, free_var());
            push_choice(backup8, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_readNondetError_(v2, backup8, 0));
          }
          field v9;
          field v10;
          field v11;
          field v12;
          v9 = make_Prelude_drop_HTworker(v2, (field)(long)(9), 0);
          v10 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOChar(v9, 0);
          v11 = make_Prelude_readNondetError_HTP0((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
          v12 = make_Prelude_id((field)(Node*)NULL, 1);
          set_Prelude_build_USfold(root, v11, v12, v10, 0);
          backup = Prelude_build_USfold_RET_hnf(backup);
          debug(LOW, "leaving readNondetError\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_readNondetError_(v2, backup8, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving readNondetError\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// readNondetError#P0
void Prelude_readNondetError_HTP0_hnf(field root)
{
  debug(LOW, "HNF readNondetError#P0:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_makeNondetError(v3, 0);
  set_apply2(root, v2, v5, v4);
  apply_hnf(root);
  debug(LOW, "leaving readNondetError#P0\n");
  debug_expr(LOW, root);
  return;
}

// readNondetError#P0
Node* Prelude_readNondetError_HTP0_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF readNondetError#P0:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_makeNondetError(v3, 0);
  set_apply2(root, v2, v5, v4);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving readNondetError#P0\n");
  debug_expr(LOW, root);
  return backup;
}

// makeFailError
void Prelude_makeFailError_hnf(field root)
{
  debug(LOW, "HNF makeFailError:\n");
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
            save(root, make_Prelude_makeFailError_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving makeFailError\n");
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
            save(root, make_Prelude_makeFailError_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          v5 = make_Prelude_FailError(v3, 0);
          set_Prelude__LP_CM_RP(root, v5, v4, 0);
          debug(LOW, "leaving makeFailError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// makeFailError at []
void Prelude_makeFailError__hnf(field root)
{
  debug(LOW, "HNF makeFailError@[]\n");
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
            save(root, make_Prelude_makeFailError_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving makeFailError\n");
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
            save(root, make_Prelude_makeFailError_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          v5 = make_Prelude_FailError(v3, 0);
          set_Prelude__LP_CM_RP(root, v5, v4, 0);
          debug(LOW, "leaving makeFailError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// makeFailError
Node* Prelude_makeFailError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF makeFailError:\n");
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
            backup = save_RET(backup, make_Prelude_makeFailError_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving makeFailError\n");
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
            backup = save_RET(backup, make_Prelude_makeFailError_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          v5 = make_Prelude_FailError(v3, 0);
          set_Prelude__LP_CM_RP(root, v5, v4, 0);
          debug(LOW, "leaving makeFailError\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// readFailError
void Prelude_readFailError_hnf(field root)
{
  debug(LOW, "HNF readFailError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v2 = child_at(root, 0);
  v3 = make_Prelude_take_HTworker(v2, (field)(long)(9), 0);
  v4 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USDict_HTEq(v4, v5, 0);
  v7 = toCurryString("FailError");
  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(RET, v6, v3, v7, 0);
  v8 = RET;
  {
    bool nondet = false;
    field backup8 = (field)Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup8.n != NULL)
    {
      nondet = true;
      memcpy(backup8.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup8 = RET.n->children[0];
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
            save(root, make_Prelude_readFailError_(v2, backup8, 0));
          }
          fail(root);
          debug(LOW, "leaving readFailError\n");
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
          if(scrutinee.n == RET.n)
          {
            backup8.n = make_restore(backup8.n);
            push_frame(backup8, free_var());
            push_choice(backup8, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readFailError_(v2, backup8, 0));
          }
          field v9;
          field v10;
          field v11;
          field v12;
          v9 = make_Prelude_drop_HTworker(v2, (field)(long)(9), 0);
          v10 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOChar(v9, 0);
          v11 = make_Prelude_readFailError_HTP1((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
          v12 = make_Prelude_id((field)(Node*)NULL, 1);
          set_Prelude_build_USfold(root, v11, v12, v10, 0);
          Prelude_build_USfold_hnf(root);
          debug(LOW, "leaving readFailError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readFailError_(v2, backup8, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving readFailError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// readFailError at []
void Prelude_readFailError__hnf(field root)
{
  debug(LOW, "HNF readFailError@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v8;
  v8 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v8;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readFailError_(v2, v8, 0));
          }
          fail(root);
          debug(LOW, "leaving readFailError\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readFailError_(v2, v8, 0));
          }
          field v9;
          field v10;
          field v11;
          field v12;
          v9 = make_Prelude_drop_HTworker(v2, (field)(long)(9), 0);
          v10 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOChar(v9, 0);
          v11 = make_Prelude_readFailError_HTP1((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
          v12 = make_Prelude_id((field)(Node*)NULL, 1);
          set_Prelude_build_USfold(root, v11, v12, v10, 0);
          Prelude_build_USfold_hnf(root);
          debug(LOW, "leaving readFailError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readFailError_(v2, v8, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving readFailError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// readFailError
Node* Prelude_readFailError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF readFailError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v2 = child_at(root, 0);
  v3 = make_Prelude_take_HTworker(v2, (field)(long)(9), 0);
  v4 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USDict_HTEq(v4, v5, 0);
  v7 = toCurryString("FailError");
  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(RET, v6, v3, v7, 0);
  v8 = RET;
  {
    bool nondet = false;
    field backup8 = (field)Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup8.n != NULL)
    {
      nondet = true;
      memcpy(backup8.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup8 = RET.n->children[0];
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
            backup = save_RET(backup, make_Prelude_readFailError_(v2, backup8, 0));
          }
          fail(root);
          debug(LOW, "leaving readFailError\n");
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
          if(scrutinee.n == RET.n)
          {
            backup8.n = make_restore(backup8.n);
            push_frame(backup8, free_var());
            push_choice(backup8, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_readFailError_(v2, backup8, 0));
          }
          field v9;
          field v10;
          field v11;
          field v12;
          v9 = make_Prelude_drop_HTworker(v2, (field)(long)(9), 0);
          v10 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOChar(v9, 0);
          v11 = make_Prelude_readFailError_HTP1((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
          v12 = make_Prelude_id((field)(Node*)NULL, 1);
          set_Prelude_build_USfold(root, v11, v12, v10, 0);
          backup = Prelude_build_USfold_RET_hnf(backup);
          debug(LOW, "leaving readFailError\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_readFailError_(v2, backup8, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving readFailError\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// readFailError#P1
void Prelude_readFailError_HTP1_hnf(field root)
{
  debug(LOW, "HNF readFailError#P1:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_makeFailError(v3, 0);
  set_apply2(root, v2, v5, v4);
  apply_hnf(root);
  debug(LOW, "leaving readFailError#P1\n");
  debug_expr(LOW, root);
  return;
}

// readFailError#P1
Node* Prelude_readFailError_HTP1_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF readFailError#P1:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_makeFailError(v3, 0);
  set_apply2(root, v2, v5, v4);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving readFailError#P1\n");
  debug_expr(LOW, root);
  return backup;
}

// makeUserError
void Prelude_makeUserError_hnf(field root)
{
  debug(LOW, "HNF makeUserError:\n");
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
            save(root, make_Prelude_makeUserError_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving makeUserError\n");
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
            save(root, make_Prelude_makeUserError_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          v5 = make_Prelude_UserError(v3, 0);
          set_Prelude__LP_CM_RP(root, v5, v4, 0);
          debug(LOW, "leaving makeUserError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// makeUserError at []
void Prelude_makeUserError__hnf(field root)
{
  debug(LOW, "HNF makeUserError@[]\n");
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
            save(root, make_Prelude_makeUserError_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving makeUserError\n");
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
            save(root, make_Prelude_makeUserError_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          v5 = make_Prelude_UserError(v3, 0);
          set_Prelude__LP_CM_RP(root, v5, v4, 0);
          debug(LOW, "leaving makeUserError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// makeUserError
Node* Prelude_makeUserError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF makeUserError:\n");
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
            backup = save_RET(backup, make_Prelude_makeUserError_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving makeUserError\n");
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
            backup = save_RET(backup, make_Prelude_makeUserError_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          v5 = make_Prelude_UserError(v3, 0);
          set_Prelude__LP_CM_RP(root, v5, v4, 0);
          debug(LOW, "leaving makeUserError\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// readUserError
void Prelude_readUserError_hnf(field root)
{
  debug(LOW, "HNF readUserError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v2 = child_at(root, 0);
  v3 = make_Prelude_take_HTworker(v2, (field)(long)(9), 0);
  v4 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USDict_HTEq(v4, v5, 0);
  v7 = toCurryString("UserError");
  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(RET, v6, v3, v7, 0);
  v8 = RET;
  {
    bool nondet = false;
    field backup8 = (field)Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup8.n != NULL)
    {
      nondet = true;
      memcpy(backup8.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup8 = RET.n->children[0];
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
            save(root, make_Prelude_readUserError_(v2, backup8, 0));
          }
          fail(root);
          debug(LOW, "leaving readUserError\n");
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
          if(scrutinee.n == RET.n)
          {
            backup8.n = make_restore(backup8.n);
            push_frame(backup8, free_var());
            push_choice(backup8, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readUserError_(v2, backup8, 0));
          }
          field v9;
          field v10;
          field v11;
          field v12;
          v9 = make_Prelude_drop_HTworker(v2, (field)(long)(9), 0);
          v10 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOChar(v9, 0);
          v11 = make_Prelude_readUserError_HTP2((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
          v12 = make_Prelude_id((field)(Node*)NULL, 1);
          set_Prelude_build_USfold(root, v11, v12, v10, 0);
          Prelude_build_USfold_hnf(root);
          debug(LOW, "leaving readUserError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readUserError_(v2, backup8, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving readUserError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// readUserError at []
void Prelude_readUserError__hnf(field root)
{
  debug(LOW, "HNF readUserError@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v8;
  v8 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v8;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readUserError_(v2, v8, 0));
          }
          fail(root);
          debug(LOW, "leaving readUserError\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readUserError_(v2, v8, 0));
          }
          field v9;
          field v10;
          field v11;
          field v12;
          v9 = make_Prelude_drop_HTworker(v2, (field)(long)(9), 0);
          v10 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOChar(v9, 0);
          v11 = make_Prelude_readUserError_HTP2((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
          v12 = make_Prelude_id((field)(Node*)NULL, 1);
          set_Prelude_build_USfold(root, v11, v12, v10, 0);
          Prelude_build_USfold_hnf(root);
          debug(LOW, "leaving readUserError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readUserError_(v2, v8, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving readUserError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// readUserError
Node* Prelude_readUserError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF readUserError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v2 = child_at(root, 0);
  v3 = make_Prelude_take_HTworker(v2, (field)(long)(9), 0);
  v4 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USDict_HTEq(v4, v5, 0);
  v7 = toCurryString("UserError");
  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(RET, v6, v3, v7, 0);
  v8 = RET;
  {
    bool nondet = false;
    field backup8 = (field)Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup8.n != NULL)
    {
      nondet = true;
      memcpy(backup8.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup8 = RET.n->children[0];
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
            backup = save_RET(backup, make_Prelude_readUserError_(v2, backup8, 0));
          }
          fail(root);
          debug(LOW, "leaving readUserError\n");
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
          if(scrutinee.n == RET.n)
          {
            backup8.n = make_restore(backup8.n);
            push_frame(backup8, free_var());
            push_choice(backup8, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_readUserError_(v2, backup8, 0));
          }
          field v9;
          field v10;
          field v11;
          field v12;
          v9 = make_Prelude_drop_HTworker(v2, (field)(long)(9), 0);
          v10 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOChar(v9, 0);
          v11 = make_Prelude_readUserError_HTP2((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
          v12 = make_Prelude_id((field)(Node*)NULL, 1);
          set_Prelude_build_USfold(root, v11, v12, v10, 0);
          backup = Prelude_build_USfold_RET_hnf(backup);
          debug(LOW, "leaving readUserError\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_readUserError_(v2, backup8, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving readUserError\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// readUserError#P2
void Prelude_readUserError_HTP2_hnf(field root)
{
  debug(LOW, "HNF readUserError#P2:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_makeUserError(v3, 0);
  set_apply2(root, v2, v5, v4);
  apply_hnf(root);
  debug(LOW, "leaving readUserError#P2\n");
  debug_expr(LOW, root);
  return;
}

// readUserError#P2
Node* Prelude_readUserError_HTP2_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF readUserError#P2:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_makeUserError(v3, 0);
  set_apply2(root, v2, v5, v4);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving readUserError#P2\n");
  debug_expr(LOW, root);
  return backup;
}

// makeIOError
void Prelude_makeIOError_hnf(field root)
{
  debug(LOW, "HNF makeIOError:\n");
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
            save(root, make_Prelude_makeIOError_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving makeIOError\n");
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
            save(root, make_Prelude_makeIOError_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          v5 = make_Prelude_IOError(v3, 0);
          set_Prelude__LP_CM_RP(root, v5, v4, 0);
          debug(LOW, "leaving makeIOError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// makeIOError at []
void Prelude_makeIOError__hnf(field root)
{
  debug(LOW, "HNF makeIOError@[]\n");
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
            save(root, make_Prelude_makeIOError_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving makeIOError\n");
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
            save(root, make_Prelude_makeIOError_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          v5 = make_Prelude_IOError(v3, 0);
          set_Prelude__LP_CM_RP(root, v5, v4, 0);
          debug(LOW, "leaving makeIOError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// makeIOError
Node* Prelude_makeIOError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF makeIOError:\n");
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
            backup = save_RET(backup, make_Prelude_makeIOError_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving makeIOError\n");
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
            backup = save_RET(backup, make_Prelude_makeIOError_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          v5 = make_Prelude_IOError(v3, 0);
          set_Prelude__LP_CM_RP(root, v5, v4, 0);
          debug(LOW, "leaving makeIOError\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// readIOError
void Prelude_readIOError_hnf(field root)
{
  debug(LOW, "HNF readIOError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v2 = child_at(root, 0);
  v3 = make_Prelude_take_HTworker(v2, (field)(long)(7), 0);
  v4 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USDict_HTEq(v4, v5, 0);
  v7 = toCurryString("IOError");
  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(RET, v6, v3, v7, 0);
  v8 = RET;
  {
    bool nondet = false;
    field backup8 = (field)Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup8.n != NULL)
    {
      nondet = true;
      memcpy(backup8.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup8 = RET.n->children[0];
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
            save(root, make_Prelude_readIOError_(v2, backup8, 0));
          }
          fail(root);
          debug(LOW, "leaving readIOError\n");
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
          if(scrutinee.n == RET.n)
          {
            backup8.n = make_restore(backup8.n);
            push_frame(backup8, free_var());
            push_choice(backup8, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readIOError_(v2, backup8, 0));
          }
          field v9;
          field v10;
          field v11;
          field v12;
          v9 = make_Prelude_drop_HTworker(v2, (field)(long)(7), 0);
          v10 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOChar(v9, 0);
          v11 = make_Prelude_readIOError_HTP3((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
          v12 = make_Prelude_id((field)(Node*)NULL, 1);
          set_Prelude_build_USfold(root, v11, v12, v10, 0);
          Prelude_build_USfold_hnf(root);
          debug(LOW, "leaving readIOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readIOError_(v2, backup8, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving readIOError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// readIOError at []
void Prelude_readIOError__hnf(field root)
{
  debug(LOW, "HNF readIOError@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v8;
  v8 = child_at(root, 0);
  v2 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v8;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readIOError_(v2, v8, 0));
          }
          fail(root);
          debug(LOW, "leaving readIOError\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readIOError_(v2, v8, 0));
          }
          field v9;
          field v10;
          field v11;
          field v12;
          v9 = make_Prelude_drop_HTworker(v2, (field)(long)(7), 0);
          v10 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOChar(v9, 0);
          v11 = make_Prelude_readIOError_HTP3((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
          v12 = make_Prelude_id((field)(Node*)NULL, 1);
          set_Prelude_build_USfold(root, v11, v12, v10, 0);
          Prelude_build_USfold_hnf(root);
          debug(LOW, "leaving readIOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_readIOError_(v2, v8, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving readIOError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// readIOError
Node* Prelude_readIOError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF readIOError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v2 = child_at(root, 0);
  v3 = make_Prelude_take_HTworker(v2, (field)(long)(7), 0);
  v4 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USDict_HTEq(v4, v5, 0);
  v7 = toCurryString("IOError");
  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(RET, v6, v3, v7, 0);
  v8 = RET;
  {
    bool nondet = false;
    field backup8 = (field)Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup8.n != NULL)
    {
      nondet = true;
      memcpy(backup8.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup8 = RET.n->children[0];
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
            backup = save_RET(backup, make_Prelude_readIOError_(v2, backup8, 0));
          }
          fail(root);
          debug(LOW, "leaving readIOError\n");
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
          if(scrutinee.n == RET.n)
          {
            backup8.n = make_restore(backup8.n);
            push_frame(backup8, free_var());
            push_choice(backup8, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_readIOError_(v2, backup8, 0));
          }
          field v9;
          field v10;
          field v11;
          field v12;
          v9 = make_Prelude_drop_HTworker(v2, (field)(long)(7), 0);
          v10 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOChar(v9, 0);
          v11 = make_Prelude_readIOError_HTP3((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
          v12 = make_Prelude_id((field)(Node*)NULL, 1);
          set_Prelude_build_USfold(root, v11, v12, v10, 0);
          backup = Prelude_build_USfold_RET_hnf(backup);
          debug(LOW, "leaving readIOError\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_readIOError_(v2, backup8, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving readIOError\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// readIOError#P3
void Prelude_readIOError_HTP3_hnf(field root)
{
  debug(LOW, "HNF readIOError#P3:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_makeIOError(v3, 0);
  set_apply2(root, v2, v5, v4);
  apply_hnf(root);
  debug(LOW, "leaving readIOError#P3\n");
  debug_expr(LOW, root);
  return;
}

// readIOError#P3
Node* Prelude_readIOError_HTP3_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF readIOError#P3:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_makeIOError(v3, 0);
  set_apply2(root, v2, v5, v4);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving readIOError#P3\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of showsPrec in Show for IOError
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_hnf(field root)
{
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError:\n");
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
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
          push_choice(scrutinee, make_Prelude_NondetError_free());
          push_choice(scrutinee, make_Prelude_IOError_free());
          push_choice(scrutinee, make_Prelude_FailError_free());
          set_Prelude_UserError_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_UserError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v12;
          v12 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__0(v2, v12, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__0(v2, v12, 0));
                  }
                  field v13;
                  v13 = child_at(scrutinee, 0);
                  if(v13.i <= 10)
                  {
                    field v14;
                    v14 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v12, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP8(root, v14, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return;
                  }
                  else
                  {
                    field v15;
                    v15 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v12, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP9(root, v15, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return;
                  }
                }
              }
            }
          }
        }
        case Prelude_NondetError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v16;
          v16 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__1(v2, v16, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__1(v2, v16, 0));
                  }
                  field v17;
                  v17 = child_at(scrutinee, 0);
                  if(v17.i <= 10)
                  {
                    field v18;
                    v18 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v16, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP10(root, v18, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return;
                  }
                  else
                  {
                    field v19;
                    v19 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v16, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP11(root, v19, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return;
                  }
                }
              }
            }
          }
        }
        case Prelude_IOError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__2(v2, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__2(v2, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v5.i <= 10)
                  {
                    field v6;
                    v6 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v4, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP4(root, v6, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return;
                  }
                  else
                  {
                    field v7;
                    v7 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v4, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP5(root, v7, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return;
                  }
                }
              }
            }
          }
        }
        case Prelude_FailError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v8;
          v8 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__3(v2, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__3(v2, v8, 0));
                  }
                  field v9;
                  v9 = child_at(scrutinee, 0);
                  if(v9.i <= 10)
                  {
                    field v10;
                    v10 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v8, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP6(root, v10, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return;
                  }
                  else
                  {
                    field v11;
                    v11 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v8, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP7(root, v11, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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

// implementation of showsPrec in Show for IOError at []
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__hnf(field root)
{
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError@[]\n");
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
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
          push_choice(scrutinee, make_Prelude_NondetError_free());
          push_choice(scrutinee, make_Prelude_IOError_free());
          push_choice(scrutinee, make_Prelude_FailError_free());
          set_Prelude_UserError_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_UserError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v12;
          v12 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__0(v2, v12, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__0(v2, v12, 0));
                  }
                  field v13;
                  v13 = child_at(scrutinee, 0);
                  if(v13.i <= 10)
                  {
                    field v14;
                    v14 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v12, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP8(root, v14, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return;
                  }
                  else
                  {
                    field v15;
                    v15 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v12, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP9(root, v15, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return;
                  }
                }
              }
            }
          }
        }
        case Prelude_NondetError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v16;
          v16 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__1(v2, v16, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__1(v2, v16, 0));
                  }
                  field v17;
                  v17 = child_at(scrutinee, 0);
                  if(v17.i <= 10)
                  {
                    field v18;
                    v18 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v16, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP10(root, v18, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return;
                  }
                  else
                  {
                    field v19;
                    v19 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v16, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP11(root, v19, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return;
                  }
                }
              }
            }
          }
        }
        case Prelude_IOError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__2(v2, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__2(v2, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v5.i <= 10)
                  {
                    field v6;
                    v6 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v4, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP4(root, v6, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return;
                  }
                  else
                  {
                    field v7;
                    v7 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v4, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP5(root, v7, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return;
                  }
                }
              }
            }
          }
        }
        case Prelude_FailError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v8;
          v8 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__3(v2, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
                    save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__3(v2, v8, 0));
                  }
                  field v9;
                  v9 = child_at(scrutinee, 0);
                  if(v9.i <= 10)
                  {
                    field v10;
                    v10 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v8, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP6(root, v10, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return;
                  }
                  else
                  {
                    field v11;
                    v11 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v8, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP7(root, v11, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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

// implementation of showsPrec in Show for IOError at [0]
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__0_hnf(field root)
{
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError@[0]\n");
  debug_expr(LOW, root);
  field v2;
  field v12;
  v12 = child_at(root, 0);
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
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__0(v2, v12, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__0(v2, v12, 0));
          }
          field v13;
          v13 = child_at(scrutinee, 0);
          if(v13.i <= 10)
          {
            field v14;
            v14 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v12, 0);
            set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP8(root, v14, (field)(Node*)NULL, 1);
            debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v15;
            v15 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v12, 0);
            set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP9(root, v15, (field)(Node*)NULL, 1);
            debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of showsPrec in Show for IOError at [1]
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__1_hnf(field root)
{
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError@[1]\n");
  debug_expr(LOW, root);
  field v2;
  field v16;
  v16 = child_at(root, 0);
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
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__1(v2, v16, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__1(v2, v16, 0));
          }
          field v17;
          v17 = child_at(scrutinee, 0);
          if(v17.i <= 10)
          {
            field v18;
            v18 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v16, 0);
            set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP10(root, v18, (field)(Node*)NULL, 1);
            debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v19;
            v19 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v16, 0);
            set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP11(root, v19, (field)(Node*)NULL, 1);
            debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of showsPrec in Show for IOError at [2]
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__2_hnf(field root)
{
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError@[2]\n");
  debug_expr(LOW, root);
  field v2;
  field v4;
  v4 = child_at(root, 0);
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
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__2(v2, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__2(v2, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          if(v5.i <= 10)
          {
            field v6;
            v6 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v4, 0);
            set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP4(root, v6, (field)(Node*)NULL, 1);
            debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v7;
            v7 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v4, 0);
            set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP5(root, v7, (field)(Node*)NULL, 1);
            debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of showsPrec in Show for IOError at [3]
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__3_hnf(field root)
{
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError@[3]\n");
  debug_expr(LOW, root);
  field v2;
  field v8;
  v8 = child_at(root, 0);
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
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__3(v2, v8, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
            save(root, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__3(v2, v8, 0));
          }
          field v9;
          v9 = child_at(scrutinee, 0);
          if(v9.i <= 10)
          {
            field v10;
            v10 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v8, 0);
            set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP6(root, v10, (field)(Node*)NULL, 1);
            debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v11;
            v11 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v8, 0);
            set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP7(root, v11, (field)(Node*)NULL, 1);
            debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of showsPrec in Show for IOError
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
          push_choice(scrutinee, make_Prelude_NondetError_free());
          push_choice(scrutinee, make_Prelude_IOError_free());
          push_choice(scrutinee, make_Prelude_FailError_free());
          set_Prelude_UserError_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_UserError_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v12;
          v12 = child_at(scrutinee, 0);
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__0(v2, v12, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__0(v2, v12, 0));
                  }
                  field v13;
                  v13 = child_at(scrutinee, 0);
                  if(v13.i <= 10)
                  {
                    field v14;
                    v14 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v12, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP8(root, v14, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return backup;
                  }
                  else
                  {
                    field v15;
                    v15 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v12, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP9(root, v15, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return backup;
                  }
                }
              }
            }
          }
        }
        case Prelude_NondetError_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v16;
          v16 = child_at(scrutinee, 0);
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__1(v2, v16, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__1(v2, v16, 0));
                  }
                  field v17;
                  v17 = child_at(scrutinee, 0);
                  if(v17.i <= 10)
                  {
                    field v18;
                    v18 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v16, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP10(root, v18, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return backup;
                  }
                  else
                  {
                    field v19;
                    v19 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v16, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP11(root, v19, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return backup;
                  }
                }
              }
            }
          }
        }
        case Prelude_IOError_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__2(v2, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__2(v2, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v5.i <= 10)
                  {
                    field v6;
                    v6 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v4, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP4(root, v6, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return backup;
                  }
                  else
                  {
                    field v7;
                    v7 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v4, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP5(root, v7, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return backup;
                  }
                }
              }
            }
          }
        }
        case Prelude_FailError_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v8;
          v8 = child_at(scrutinee, 0);
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__3(v2, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError__3(v2, v8, 0));
                  }
                  field v9;
                  v9 = child_at(scrutinee, 0);
                  if(v9.i <= 10)
                  {
                    field v10;
                    v10 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v8, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP6(root, v10, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
                    debug_expr(LOW, root);
                    return backup;
                  }
                  else
                  {
                    field v11;
                    v11 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOChar(v8, 0);
                    set_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP7(root, v11, (field)(Node*)NULL, 1);
                    debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError\n");
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

// implementation of showsPrec in Show for IOError
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP11_hnf(field root)
{
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P11:\n");
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
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make__char(41, 0);
  v5 = make_Prelude__CO(v4, v3, 0);
  v6 = make_apply1(v2, v5);
  v7 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = toCurryString("NondetError");
  v9 = make_Prelude_foldr(v7, v6, v8, 0);
  v10 = make__char(40, 0);
  set_Prelude__CO(root, v10, v9, 0);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P11\n");
  debug_expr(LOW, root);
  return;
}

// implementation of showsPrec in Show for IOError
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP11_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P11:\n");
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
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make__char(41, 0);
  v5 = make_Prelude__CO(v4, v3, 0);
  v6 = make_apply1(v2, v5);
  v7 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = toCurryString("NondetError");
  v9 = make_Prelude_foldr(v7, v6, v8, 0);
  v10 = make__char(40, 0);
  set_Prelude__CO(root, v10, v9, 0);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P11\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of showsPrec in Show for IOError
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP10_hnf(field root)
{
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P10:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_apply1(v2, v3);
  v5 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = toCurryString("NondetError ");
  set_Prelude_foldr(root, v5, v4, v6, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P10\n");
  debug_expr(LOW, root);
  return;
}

// implementation of showsPrec in Show for IOError
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP10_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P10:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_apply1(v2, v3);
  v5 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = toCurryString("NondetError ");
  set_Prelude_foldr(root, v5, v4, v6, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P10\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of showsPrec in Show for IOError
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP9_hnf(field root)
{
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P9:\n");
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
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make__char(41, 0);
  v5 = make_Prelude__CO(v4, v3, 0);
  v6 = make_apply1(v2, v5);
  v7 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = toCurryString("UserError");
  v9 = make_Prelude_foldr(v7, v6, v8, 0);
  v10 = make__char(40, 0);
  set_Prelude__CO(root, v10, v9, 0);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P9\n");
  debug_expr(LOW, root);
  return;
}

// implementation of showsPrec in Show for IOError
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP9_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P9:\n");
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
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make__char(41, 0);
  v5 = make_Prelude__CO(v4, v3, 0);
  v6 = make_apply1(v2, v5);
  v7 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = toCurryString("UserError");
  v9 = make_Prelude_foldr(v7, v6, v8, 0);
  v10 = make__char(40, 0);
  set_Prelude__CO(root, v10, v9, 0);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P9\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of showsPrec in Show for IOError
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP8_hnf(field root)
{
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P8:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_apply1(v2, v3);
  v5 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = toCurryString("UserError ");
  set_Prelude_foldr(root, v5, v4, v6, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P8\n");
  debug_expr(LOW, root);
  return;
}

// implementation of showsPrec in Show for IOError
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP8_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P8:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_apply1(v2, v3);
  v5 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = toCurryString("UserError ");
  set_Prelude_foldr(root, v5, v4, v6, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P8\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of showsPrec in Show for IOError
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP7_hnf(field root)
{
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P7:\n");
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
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make__char(41, 0);
  v5 = make_Prelude__CO(v4, v3, 0);
  v6 = make_apply1(v2, v5);
  v7 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = toCurryString("FailError");
  v9 = make_Prelude_foldr(v7, v6, v8, 0);
  v10 = make__char(40, 0);
  set_Prelude__CO(root, v10, v9, 0);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P7\n");
  debug_expr(LOW, root);
  return;
}

// implementation of showsPrec in Show for IOError
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP7_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P7:\n");
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
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make__char(41, 0);
  v5 = make_Prelude__CO(v4, v3, 0);
  v6 = make_apply1(v2, v5);
  v7 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = toCurryString("FailError");
  v9 = make_Prelude_foldr(v7, v6, v8, 0);
  v10 = make__char(40, 0);
  set_Prelude__CO(root, v10, v9, 0);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P7\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of showsPrec in Show for IOError
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP6_hnf(field root)
{
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P6:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_apply1(v2, v3);
  v5 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = toCurryString("FailError ");
  set_Prelude_foldr(root, v5, v4, v6, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P6\n");
  debug_expr(LOW, root);
  return;
}

// implementation of showsPrec in Show for IOError
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP6_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P6:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_apply1(v2, v3);
  v5 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = toCurryString("FailError ");
  set_Prelude_foldr(root, v5, v4, v6, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P6\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of showsPrec in Show for IOError
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP5_hnf(field root)
{
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P5:\n");
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
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make__char(41, 0);
  v5 = make_Prelude__CO(v4, v3, 0);
  v6 = make_apply1(v2, v5);
  v7 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = toCurryString("IOError");
  v9 = make_Prelude_foldr(v7, v6, v8, 0);
  v10 = make__char(40, 0);
  set_Prelude__CO(root, v10, v9, 0);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P5\n");
  debug_expr(LOW, root);
  return;
}

// implementation of showsPrec in Show for IOError
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP5_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P5:\n");
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
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make__char(41, 0);
  v5 = make_Prelude__CO(v4, v3, 0);
  v6 = make_apply1(v2, v5);
  v7 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = toCurryString("IOError");
  v9 = make_Prelude_foldr(v7, v6, v8, 0);
  v10 = make__char(40, 0);
  set_Prelude__CO(root, v10, v9, 0);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P5\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of showsPrec in Show for IOError
void Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP4_hnf(field root)
{
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P4:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_apply1(v2, v3);
  v5 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = toCurryString("IOError ");
  set_Prelude_foldr(root, v5, v4, v6, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P4\n");
  debug_expr(LOW, root);
  return;
}

// implementation of showsPrec in Show for IOError
Node* Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError_HTP4_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#showsPrec#Prelude.Show#Prelude.IOError#P4:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_apply1(v2, v3);
  v5 = make_Prelude_showChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = toCurryString("IOError ");
  set_Prelude_foldr(root, v5, v4, v6, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving _impl#showsPrec#Prelude.Show#Prelude.IOError#P4\n");
  debug_expr(LOW, root);
  return backup;
}

// instance of Show for IOError
void Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOIOError_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Show#Prelude.IOError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = make_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOIOError((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError((field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude__USDict_HTShow(root, v2, v4, v3, 0);
  debug(LOW, "leaving _inst#Prelude.Show#Prelude.IOError\n");
  debug_expr(LOW, root);
  return;
}

// instance of Show for IOError
Node* Prelude__USinst_HTPrelude_DOShow_HTPrelude_DOIOError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Show#Prelude.IOError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = make_Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOIOError((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError((field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude__USDict_HTShow(root, v2, v4, v3, 0);
  debug(LOW, "leaving _inst#Prelude.Show#Prelude.IOError\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of readsPrec in Read for IOError
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_hnf(field root)
{
  debug(LOW, "HNF _impl#readsPrec#Prelude.Read#Prelude.IOError:\n");
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
  field v13;
  field v14;
  field v15;
  field v16;
  field v17;
  field v18;
  field v19;
  field v20;
  field v21;
  field v22;
  field v23;
  field v24;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4(v2, 0);
  v5 = make_Prelude_readIOError((field)(Node*)NULL, 1);
  v6 = make_Prelude_readParen(v4, v5, 0);
  v7 = make_apply1(v6, v3);
  v8 = make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3(v2, 0);
  v9 = make_Prelude_readUserError((field)(Node*)NULL, 1);
  v10 = make_Prelude_readParen(v8, v9, 0);
  v11 = make_apply1(v10, v3);
  v12 = make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2(v2, 0);
  v13 = make_Prelude_readFailError((field)(Node*)NULL, 1);
  v14 = make_Prelude_readParen(v12, v13, 0);
  v15 = make_apply1(v14, v3);
  v16 = make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1(v2, 0);
  v17 = make_Prelude_readNondetError((field)(Node*)NULL, 1);
  v18 = make_Prelude_readParen(v16, v17, 0);
  v19 = make_apply1(v18, v3);
  v20 = make_Prelude__PL_PL_HTP0(v15, v19, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v21 = make_Prelude_build(v20, 0);
  v22 = make_Prelude__PL_PL_HTP0(v11, v21, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v23 = make_Prelude_build(v22, 0);
  v24 = make_Prelude__PL_PL_HTP0(v7, v23, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v24, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError\n");
  debug_expr(LOW, root);
  return;
}

// implementation of readsPrec in Read for IOError
Node* Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#readsPrec#Prelude.Read#Prelude.IOError:\n");
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
  field v13;
  field v14;
  field v15;
  field v16;
  field v17;
  field v18;
  field v19;
  field v20;
  field v21;
  field v22;
  field v23;
  field v24;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4(v2, 0);
  v5 = make_Prelude_readIOError((field)(Node*)NULL, 1);
  v6 = make_Prelude_readParen(v4, v5, 0);
  v7 = make_apply1(v6, v3);
  v8 = make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3(v2, 0);
  v9 = make_Prelude_readUserError((field)(Node*)NULL, 1);
  v10 = make_Prelude_readParen(v8, v9, 0);
  v11 = make_apply1(v10, v3);
  v12 = make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2(v2, 0);
  v13 = make_Prelude_readFailError((field)(Node*)NULL, 1);
  v14 = make_Prelude_readParen(v12, v13, 0);
  v15 = make_apply1(v14, v3);
  v16 = make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1(v2, 0);
  v17 = make_Prelude_readNondetError((field)(Node*)NULL, 1);
  v18 = make_Prelude_readParen(v16, v17, 0);
  v19 = make_apply1(v18, v3);
  v20 = make_Prelude__PL_PL_HTP0(v15, v19, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v21 = make_Prelude_build(v20, 0);
  v22 = make_Prelude__PL_PL_HTP0(v11, v21, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v23 = make_Prelude_build(v22, 0);
  v24 = make_Prelude__PL_PL_HTP0(v7, v23, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v24, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of readsPrec in Read for IOError
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_hnf(field root)
{
  debug(LOW, "HNF _impl#readsPrec#Prelude.Read#Prelude.IOError#A4:\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A4\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i <= 10)
          {
            set_Prelude_False(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A4\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            set_Prelude_True(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A4\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of readsPrec in Read for IOError at []
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4__hnf(field root)
{
  debug(LOW, "HNF _impl#readsPrec#Prelude.Read#Prelude.IOError#A4@[]\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A4\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i <= 10)
          {
            set_Prelude_False(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A4\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            set_Prelude_True(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A4\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of readsPrec in Read for IOError
Node* Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#readsPrec#Prelude.Read#Prelude.IOError#A4:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A4\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA4_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i <= 10)
          {
            set_Prelude_False(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A4\n");
            debug_expr(LOW, root);
            return backup;
          }
          else
          {
            set_Prelude_True(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A4\n");
            debug_expr(LOW, root);
            return backup;
          }
        }
      }
    }
  }
}

// implementation of readsPrec in Read for IOError
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_hnf(field root)
{
  debug(LOW, "HNF _impl#readsPrec#Prelude.Read#Prelude.IOError#A3:\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A3\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i <= 10)
          {
            set_Prelude_False(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A3\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            set_Prelude_True(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A3\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of readsPrec in Read for IOError at []
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3__hnf(field root)
{
  debug(LOW, "HNF _impl#readsPrec#Prelude.Read#Prelude.IOError#A3@[]\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A3\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i <= 10)
          {
            set_Prelude_False(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A3\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            set_Prelude_True(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A3\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of readsPrec in Read for IOError
Node* Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#readsPrec#Prelude.Read#Prelude.IOError#A3:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A3\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA3_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i <= 10)
          {
            set_Prelude_False(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A3\n");
            debug_expr(LOW, root);
            return backup;
          }
          else
          {
            set_Prelude_True(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A3\n");
            debug_expr(LOW, root);
            return backup;
          }
        }
      }
    }
  }
}

// implementation of readsPrec in Read for IOError
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_hnf(field root)
{
  debug(LOW, "HNF _impl#readsPrec#Prelude.Read#Prelude.IOError#A2:\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A2\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i <= 10)
          {
            set_Prelude_False(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A2\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            set_Prelude_True(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A2\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of readsPrec in Read for IOError at []
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2__hnf(field root)
{
  debug(LOW, "HNF _impl#readsPrec#Prelude.Read#Prelude.IOError#A2@[]\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A2\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i <= 10)
          {
            set_Prelude_False(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A2\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            set_Prelude_True(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A2\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of readsPrec in Read for IOError
Node* Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#readsPrec#Prelude.Read#Prelude.IOError#A2:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A2\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA2_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i <= 10)
          {
            set_Prelude_False(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A2\n");
            debug_expr(LOW, root);
            return backup;
          }
          else
          {
            set_Prelude_True(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A2\n");
            debug_expr(LOW, root);
            return backup;
          }
        }
      }
    }
  }
}

// implementation of readsPrec in Read for IOError
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_hnf(field root)
{
  debug(LOW, "HNF _impl#readsPrec#Prelude.Read#Prelude.IOError#A1:\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A1\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i <= 10)
          {
            set_Prelude_False(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A1\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            set_Prelude_True(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A1\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of readsPrec in Read for IOError at []
void Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1__hnf(field root)
{
  debug(LOW, "HNF _impl#readsPrec#Prelude.Read#Prelude.IOError#A1@[]\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A1\n");
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
            save(root, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i <= 10)
          {
            set_Prelude_False(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A1\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            set_Prelude_True(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A1\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of readsPrec in Read for IOError
Node* Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#readsPrec#Prelude.Read#Prelude.IOError#A1:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A1\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError_HTA1_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i <= 10)
          {
            set_Prelude_False(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A1\n");
            debug_expr(LOW, root);
            return backup;
          }
          else
          {
            set_Prelude_True(root, 0);
            debug(LOW, "leaving _impl#readsPrec#Prelude.Read#Prelude.IOError#A1\n");
            debug_expr(LOW, root);
            return backup;
          }
        }
      }
    }
  }
}

// instance of Read for IOError
void Prelude__USinst_HTPrelude_DORead_HTPrelude_DOIOError_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Read#Prelude.IOError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOIOError((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError((field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude__USDict_HTRead(root, v3, v2, 0);
  debug(LOW, "leaving _inst#Prelude.Read#Prelude.IOError\n");
  debug_expr(LOW, root);
  return;
}

// instance of Read for IOError
Node* Prelude__USinst_HTPrelude_DORead_HTPrelude_DOIOError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Read#Prelude.IOError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOIOError((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError((field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude__USDict_HTRead(root, v3, v2, 0);
  debug(LOW, "leaving _inst#Prelude.Read#Prelude.IOError\n");
  debug_expr(LOW, root);
  return backup;
}

// return
void Prelude_return_hnf(field root)
{
  debug(LOW, "HNF return:\n");
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
            save(root, make_Prelude_return_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving return\n");
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
          set_Prelude__USDict_HTMonad_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTMonad_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_return_(v2, 0));
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
          debug(LOW, "leaving return\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// return at []
void Prelude_return__hnf(field root)
{
  debug(LOW, "HNF return@[]\n");
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
            save(root, make_Prelude_return_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving return\n");
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
          set_Prelude__USDict_HTMonad_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTMonad_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_return_(v2, 0));
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
          debug(LOW, "leaving return\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// return at [0]
void Prelude_return__0_hnf(field root)
{
  debug(LOW, "HNF return@[0]\n");
  debug_expr(LOW, root);
  field v5;
  v5 = child_at(root, 0);
  set_forward(root, v5);
  debug(LOW, "leaving return\n");
  debug_expr(LOW, root);
  return;
}

// return
Node* Prelude_return_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF return:\n");
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
            backup = save_RET(backup, make_Prelude_return_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving return\n");
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
          set_Prelude__USDict_HTMonad_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTMonad_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_return_(v2, 0));
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
          debug(LOW, "leaving return\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// whenM
void Prelude_whenM_hnf(field root)
{
  debug(LOW, "HNF whenM:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            save(root, make_Prelude_whenM_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving whenM\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_whenM_(v2, v3, v4, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving whenM\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_whenM_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = make_Prelude_return(v2, 0);
          v6 = make_Prelude__LP_RP(0);
          set_apply1(root, v5, v6);
          apply_hnf(root);
          debug(LOW, "leaving whenM\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// whenM at []
void Prelude_whenM__hnf(field root)
{
  debug(LOW, "HNF whenM@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            save(root, make_Prelude_whenM_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving whenM\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_whenM_(v2, v3, v4, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving whenM\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_whenM_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = make_Prelude_return(v2, 0);
          v6 = make_Prelude__LP_RP(0);
          set_apply1(root, v5, v6);
          apply_hnf(root);
          debug(LOW, "leaving whenM\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// whenM at [0]
void Prelude_whenM__0_hnf(field root)
{
  debug(LOW, "HNF whenM@[0]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving whenM\n");
  debug_expr(LOW, root);
  return;
}

// whenM
Node* Prelude_whenM_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF whenM:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            backup = save_RET(backup, make_Prelude_whenM_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving whenM\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_whenM_(v2, v3, v4, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving whenM\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_whenM_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = make_Prelude_return(v2, 0);
          v6 = make_Prelude__LP_RP(0);
          set_apply1(root, v5, v6);
          backup = apply_RET_hnf(backup);
          debug(LOW, "leaving whenM\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// unlessM
void Prelude_unlessM_hnf(field root)
{
  debug(LOW, "HNF unlessM:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            save(root, make_Prelude_unlessM_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving unlessM\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_unlessM_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = make_Prelude_return(v2, 0);
          v6 = make_Prelude__LP_RP(0);
          set_apply1(root, v5, v6);
          apply_hnf(root);
          debug(LOW, "leaving unlessM\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_unlessM_(v2, v3, v4, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving unlessM\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// unlessM at []
void Prelude_unlessM__hnf(field root)
{
  debug(LOW, "HNF unlessM@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            save(root, make_Prelude_unlessM_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving unlessM\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_unlessM_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = make_Prelude_return(v2, 0);
          v6 = make_Prelude__LP_RP(0);
          set_apply1(root, v5, v6);
          apply_hnf(root);
          debug(LOW, "leaving unlessM\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_unlessM_(v2, v3, v4, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving unlessM\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// unlessM at [1]
void Prelude_unlessM__1_hnf(field root)
{
  debug(LOW, "HNF unlessM@[1]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving unlessM\n");
  debug_expr(LOW, root);
  return;
}

// unlessM
Node* Prelude_unlessM_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF unlessM:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            backup = save_RET(backup, make_Prelude_unlessM_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving unlessM\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_unlessM_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = make_Prelude_return(v2, 0);
          v6 = make_Prelude__LP_RP(0);
          set_apply1(root, v5, v6);
          backup = apply_RET_hnf(backup);
          debug(LOW, "leaving unlessM\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_unlessM_(v2, v3, v4, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving unlessM\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// >>
void Prelude__GT_GT_hnf(field root)
{
  debug(LOW, "HNF >>:\n");
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
            save(root, make_Prelude__GT_GT_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving >>\n");
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
          set_Prelude__USDict_HTMonad_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTMonad_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__GT_GT_(v2, 0));
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
          debug(LOW, "leaving >>\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// >> at []
void Prelude__GT_GT__hnf(field root)
{
  debug(LOW, "HNF >>@[]\n");
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
            save(root, make_Prelude__GT_GT_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving >>\n");
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
          set_Prelude__USDict_HTMonad_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTMonad_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__GT_GT_(v2, 0));
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
          debug(LOW, "leaving >>\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// >> at [0]
void Prelude__GT_GT__0_hnf(field root)
{
  debug(LOW, "HNF >>@[0]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving >>\n");
  debug_expr(LOW, root);
  return;
}

// >>
Node* Prelude__GT_GT_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF >>:\n");
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
            backup = save_RET(backup, make_Prelude__GT_GT_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving >>\n");
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
          set_Prelude__USDict_HTMonad_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTMonad_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__GT_GT_(v2, 0));
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
          debug(LOW, "leaving >>\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// >>=
void Prelude__GT_GT_EQ_hnf(field root)
{
  debug(LOW, "HNF >>=:\n");
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
            save(root, make_Prelude__GT_GT_EQ_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving >>=\n");
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
          set_Prelude__USDict_HTMonad_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTMonad_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__GT_GT_EQ_(v2, 0));
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
          debug(LOW, "leaving >>=\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// >>= at []
void Prelude__GT_GT_EQ__hnf(field root)
{
  debug(LOW, "HNF >>=@[]\n");
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
            save(root, make_Prelude__GT_GT_EQ_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving >>=\n");
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
          set_Prelude__USDict_HTMonad_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTMonad_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__GT_GT_EQ_(v2, 0));
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
          debug(LOW, "leaving >>=\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// >>= at [0]
void Prelude__GT_GT_EQ__0_hnf(field root)
{
  debug(LOW, "HNF >>=@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving >>=\n");
  debug_expr(LOW, root);
  return;
}

// >>=
Node* Prelude__GT_GT_EQ_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF >>=:\n");
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
            backup = save_RET(backup, make_Prelude__GT_GT_EQ_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving >>=\n");
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
          set_Prelude__USDict_HTMonad_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTMonad_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__GT_GT_EQ_(v2, 0));
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
          debug(LOW, "leaving >>=\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// liftM
void Prelude_liftM_hnf(field root)
{
  debug(LOW, "HNF liftM:\n");
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
  v5 = make_Prelude__GT_GT_EQ(v2, 0);
  v6 = make_Prelude_return(v2, 0);
  v7 = make_Prelude__DO(v6, v3, (field)(Node*)NULL, 1);
  set_apply2(root, v5, v4, v7);
  apply_hnf(root);
  debug(LOW, "leaving liftM\n");
  debug_expr(LOW, root);
  return;
}

// liftM
Node* Prelude_liftM_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF liftM:\n");
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
  v5 = make_Prelude__GT_GT_EQ(v2, 0);
  v6 = make_Prelude_return(v2, 0);
  v7 = make_Prelude__DO(v6, v3, (field)(Node*)NULL, 1);
  set_apply2(root, v5, v4, v7);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving liftM\n");
  debug_expr(LOW, root);
  return backup;
}

// liftM2._#lambda460._#lambda462
void Prelude_liftM2_DO_US_HTlambda460_DO_US_HTlambda462_hnf(field root)
{
  debug(LOW, "HNF liftM2._#lambda460._#lambda462:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_Prelude_return(v3, 0);
  v7 = make_apply2(v4, v2, v5);
  set_apply1(root, v6, v7);
  apply_hnf(root);
  debug(LOW, "leaving liftM2._#lambda460._#lambda462\n");
  debug_expr(LOW, root);
  return;
}

// liftM2._#lambda460._#lambda462
Node* Prelude_liftM2_DO_US_HTlambda460_DO_US_HTlambda462_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF liftM2._#lambda460._#lambda462:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_Prelude_return(v3, 0);
  v7 = make_apply2(v4, v2, v5);
  set_apply1(root, v6, v7);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving liftM2._#lambda460._#lambda462\n");
  debug_expr(LOW, root);
  return backup;
}

// liftM2._#lambda460
void Prelude_liftM2_DO_US_HTlambda460_hnf(field root)
{
  debug(LOW, "HNF liftM2._#lambda460:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_Prelude__GT_GT_EQ(v2, 0);
  v7 = make_Prelude_liftM2_DO_US_HTlambda460_DO_US_HTlambda462(v5, v2, v4, (field)(Node*)NULL, 1);
  set_apply2(root, v6, v3, v7);
  apply_hnf(root);
  debug(LOW, "leaving liftM2._#lambda460\n");
  debug_expr(LOW, root);
  return;
}

// liftM2._#lambda460
Node* Prelude_liftM2_DO_US_HTlambda460_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF liftM2._#lambda460:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_Prelude__GT_GT_EQ(v2, 0);
  v7 = make_Prelude_liftM2_DO_US_HTlambda460_DO_US_HTlambda462(v5, v2, v4, (field)(Node*)NULL, 1);
  set_apply2(root, v6, v3, v7);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving liftM2._#lambda460\n");
  debug_expr(LOW, root);
  return backup;
}

// liftM2
void Prelude_liftM2_hnf(field root)
{
  debug(LOW, "HNF liftM2:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_Prelude__GT_GT_EQ(v2, 0);
  v7 = make_Prelude_liftM2_DO_US_HTlambda460(v2, v5, v3, (field)(Node*)NULL, 1);
  set_apply2(root, v6, v4, v7);
  apply_hnf(root);
  debug(LOW, "leaving liftM2\n");
  debug_expr(LOW, root);
  return;
}

// liftM2
Node* Prelude_liftM2_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF liftM2:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_Prelude__GT_GT_EQ(v2, 0);
  v7 = make_Prelude_liftM2_DO_US_HTlambda460(v2, v5, v3, (field)(Node*)NULL, 1);
  set_apply2(root, v6, v4, v7);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving liftM2\n");
  debug_expr(LOW, root);
  return backup;
}

// foldM._#lambda457
void Prelude_foldM_DO_US_HTlambda457_hnf(field root)
{
  debug(LOW, "HNF foldM._#lambda457:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  set_Prelude_foldM(root, v3, v4, v5, v2, 0);
  Prelude_foldM_hnf(root);
  debug(LOW, "leaving foldM._#lambda457\n");
  debug_expr(LOW, root);
  return;
}

// foldM._#lambda457
Node* Prelude_foldM_DO_US_HTlambda457_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF foldM._#lambda457:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  set_Prelude_foldM(root, v3, v4, v5, v2, 0);
  backup = Prelude_foldM_RET_hnf(backup);
  debug(LOW, "leaving foldM._#lambda457\n");
  debug_expr(LOW, root);
  return backup;
}

// sequence_
void Prelude_sequence_US_hnf(field root)
{
  debug(LOW, "HNF sequence_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__GT_GT(v2, 0);
  v5 = make_Prelude_return(v2, 0);
  v6 = make_Prelude__LP_RP(0);
  v7 = make_apply1(v5, v6);
  set_Prelude_foldr(root, v4, v7, v3, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving sequence_\n");
  debug_expr(LOW, root);
  return;
}

// sequence_
Node* Prelude_sequence_US_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF sequence_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__GT_GT(v2, 0);
  v5 = make_Prelude_return(v2, 0);
  v6 = make_Prelude__LP_RP(0);
  v7 = make_apply1(v5, v6);
  set_Prelude_foldr(root, v4, v7, v3, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving sequence_\n");
  debug_expr(LOW, root);
  return backup;
}

// mapM_
void Prelude_mapM_US_hnf(field root)
{
  debug(LOW, "HNF mapM_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__GT_GT(v2, 0);
  v6 = make_Prelude_return(v2, 0);
  v7 = make_Prelude__LP_RP(0);
  v8 = make_apply1(v6, v7);
  v9 = make_Prelude_map_USmkc(v3, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v9, v8, v4, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving mapM_\n");
  debug_expr(LOW, root);
  return;
}

// mapM_
Node* Prelude_mapM_US_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF mapM_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__GT_GT(v2, 0);
  v6 = make_Prelude_return(v2, 0);
  v7 = make_Prelude__LP_RP(0);
  v8 = make_apply1(v6, v7);
  v9 = make_Prelude_map_USmkc(v3, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v9, v8, v4, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving mapM_\n");
  debug_expr(LOW, root);
  return backup;
}

// forM_
void Prelude_forM_US_hnf(field root)
{
  debug(LOW, "HNF forM_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__GT_GT(v2, 0);
  v6 = make_Prelude_return(v2, 0);
  v7 = make_Prelude__LP_RP(0);
  v8 = make_apply1(v6, v7);
  v9 = make_Prelude_map_USmkc(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v9, v8, v3, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving forM_\n");
  debug_expr(LOW, root);
  return;
}

// forM_
Node* Prelude_forM_US_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF forM_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__GT_GT(v2, 0);
  v6 = make_Prelude_return(v2, 0);
  v7 = make_Prelude__LP_RP(0);
  v8 = make_apply1(v6, v7);
  v9 = make_Prelude_map_USmkc(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v9, v8, v3, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving forM_\n");
  debug_expr(LOW, root);
  return backup;
}

// sequence._#lambda454._#lambda455._#lambda456
void Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_DO_US_HTlambda456_hnf(field root)
{
  debug(LOW, "HNF sequence._#lambda454._#lambda455._#lambda456:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_return(v3, 0);
  v6 = make_Prelude__CO(v2, v4, 0);
  set_apply1(root, v5, v6);
  apply_hnf(root);
  debug(LOW, "leaving sequence._#lambda454._#lambda455._#lambda456\n");
  debug_expr(LOW, root);
  return;
}

// sequence._#lambda454._#lambda455._#lambda456
Node* Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_DO_US_HTlambda456_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF sequence._#lambda454._#lambda455._#lambda456:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_return(v3, 0);
  v6 = make_Prelude__CO(v2, v4, 0);
  set_apply1(root, v5, v6);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving sequence._#lambda454._#lambda455._#lambda456\n");
  debug_expr(LOW, root);
  return backup;
}

// sequence._#lambda454._#lambda455
void Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_hnf(field root)
{
  debug(LOW, "HNF sequence._#lambda454._#lambda455:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__GT_GT_EQ(v2, 0);
  v6 = make_Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_DO_US_HTlambda456(v4, v2, (field)(Node*)NULL, 1);
  set_apply2(root, v5, v3, v6);
  apply_hnf(root);
  debug(LOW, "leaving sequence._#lambda454._#lambda455\n");
  debug_expr(LOW, root);
  return;
}

// sequence._#lambda454._#lambda455
Node* Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF sequence._#lambda454._#lambda455:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__GT_GT_EQ(v2, 0);
  v6 = make_Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455_DO_US_HTlambda456(v4, v2, (field)(Node*)NULL, 1);
  set_apply2(root, v5, v3, v6);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving sequence._#lambda454._#lambda455\n");
  debug_expr(LOW, root);
  return backup;
}

// sequence._#lambda454
void Prelude_sequence_DO_US_HTlambda454_hnf(field root)
{
  debug(LOW, "HNF sequence._#lambda454:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__GT_GT_EQ(v2, 0);
  v6 = make_Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455(v2, v4, (field)(Node*)NULL, 1);
  set_apply2(root, v5, v3, v6);
  apply_hnf(root);
  debug(LOW, "leaving sequence._#lambda454\n");
  debug_expr(LOW, root);
  return;
}

// sequence._#lambda454
Node* Prelude_sequence_DO_US_HTlambda454_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF sequence._#lambda454:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__GT_GT_EQ(v2, 0);
  v6 = make_Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455(v2, v4, (field)(Node*)NULL, 1);
  set_apply2(root, v5, v3, v6);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving sequence._#lambda454\n");
  debug_expr(LOW, root);
  return backup;
}

// sequence
void Prelude_sequence_hnf(field root)
{
  debug(LOW, "HNF sequence:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_return(v2, 0);
  v5 = make_Prelude__LB_RB(0);
  v6 = make_apply1(v4, v5);
  v7 = make_Prelude_sequence_DO_US_HTlambda454(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v7, v6, v3, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving sequence\n");
  debug_expr(LOW, root);
  return;
}

// sequence
Node* Prelude_sequence_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF sequence:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_return(v2, 0);
  v5 = make_Prelude__LB_RB(0);
  v6 = make_apply1(v4, v5);
  v7 = make_Prelude_sequence_DO_US_HTlambda454(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v7, v6, v3, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving sequence\n");
  debug_expr(LOW, root);
  return backup;
}

// mapM
void Prelude_mapM_hnf(field root)
{
  debug(LOW, "HNF mapM:\n");
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
  v5 = make_Prelude_return(v2, 0);
  v6 = make_Prelude__LB_RB(0);
  v7 = make_apply1(v5, v6);
  v8 = make_Prelude_mapM_HTP12(v2, v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v8, v7, v4, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving mapM\n");
  debug_expr(LOW, root);
  return;
}

// mapM
Node* Prelude_mapM_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF mapM:\n");
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
  v5 = make_Prelude_return(v2, 0);
  v6 = make_Prelude__LB_RB(0);
  v7 = make_apply1(v5, v6);
  v8 = make_Prelude_mapM_HTP12(v2, v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v8, v7, v4, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving mapM\n");
  debug_expr(LOW, root);
  return backup;
}

// mapM#P12
void Prelude_mapM_HTP12_hnf(field root)
{
  debug(LOW, "HNF mapM#P12:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_apply1(v3, v4);
  v7 = make_Prelude__GT_GT_EQ(v2, 0);
  v8 = make_Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455(v2, v5, (field)(Node*)NULL, 1);
  set_apply2(root, v7, v6, v8);
  apply_hnf(root);
  debug(LOW, "leaving mapM#P12\n");
  debug_expr(LOW, root);
  return;
}

// mapM#P12
Node* Prelude_mapM_HTP12_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF mapM#P12:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_apply1(v3, v4);
  v7 = make_Prelude__GT_GT_EQ(v2, 0);
  v8 = make_Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455(v2, v5, (field)(Node*)NULL, 1);
  set_apply2(root, v7, v6, v8);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving mapM#P12\n");
  debug_expr(LOW, root);
  return backup;
}

// forM
void Prelude_forM_hnf(field root)
{
  debug(LOW, "HNF forM:\n");
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
  v5 = make_Prelude_return(v2, 0);
  v6 = make_Prelude__LB_RB(0);
  v7 = make_apply1(v5, v6);
  v8 = make_Prelude_forM_HTP13(v2, v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v8, v7, v3, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving forM\n");
  debug_expr(LOW, root);
  return;
}

// forM
Node* Prelude_forM_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF forM:\n");
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
  v5 = make_Prelude_return(v2, 0);
  v6 = make_Prelude__LB_RB(0);
  v7 = make_apply1(v5, v6);
  v8 = make_Prelude_forM_HTP13(v2, v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v8, v7, v3, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving forM\n");
  debug_expr(LOW, root);
  return backup;
}

// forM#P13
void Prelude_forM_HTP13_hnf(field root)
{
  debug(LOW, "HNF forM#P13:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_apply1(v3, v4);
  v7 = make_Prelude__GT_GT_EQ(v2, 0);
  v8 = make_Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455(v2, v5, (field)(Node*)NULL, 1);
  set_apply2(root, v7, v6, v8);
  apply_hnf(root);
  debug(LOW, "leaving forM#P13\n");
  debug_expr(LOW, root);
  return;
}

// forM#P13
Node* Prelude_forM_HTP13_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF forM#P13:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_apply1(v3, v4);
  v7 = make_Prelude__GT_GT_EQ(v2, 0);
  v8 = make_Prelude_sequence_DO_US_HTlambda454_DO_US_HTlambda455(v2, v5, (field)(Node*)NULL, 1);
  set_apply2(root, v7, v6, v8);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving forM#P13\n");
  debug_expr(LOW, root);
  return backup;
}

// >>$._#lambda283
void Prelude__GT_GT_DL_DO_US_HTlambda283_hnf(field root)
{
  debug(LOW, "HNF >>$._#lambda283:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_forward(root, v2);
  debug(LOW, "leaving >>$._#lambda283\n");
  debug_expr(LOW, root);
  return;
}

// >>$._#lambda283 at []
void Prelude__GT_GT_DL_DO_US_HTlambda283__hnf(field root)
{
  debug(LOW, "HNF >>$._#lambda283@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving >>$._#lambda283\n");
  debug_expr(LOW, root);
  return;
}

// >>$._#lambda283
Node* Prelude__GT_GT_DL_DO_US_HTlambda283_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF >>$._#lambda283:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_forward(root, v2);
  debug(LOW, "leaving >>$._#lambda283\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of == in Eq for IOError
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_hnf(field root)
{
  debug(LOW, "HNF _impl#==#Prelude.Eq#Prelude.IOError:\n");
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
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
          push_choice(scrutinee, make_Prelude_NondetError_free());
          push_choice(scrutinee, make_Prelude_IOError_free());
          push_choice(scrutinee, make_Prelude_FailError_free());
          set_Prelude_UserError_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_UserError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v12;
          v12 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
                  push_choice(scrutinee, make_Prelude_NondetError_free());
                  push_choice(scrutinee, make_Prelude_IOError_free());
                  push_choice(scrutinee, make_Prelude_FailError_free());
                  set_Prelude_UserError_free(scrutinee);
                  nondet = true;
                  break;
                }
                case Prelude_UserError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
                  }
                  field v14;
                  field v15;
                  field v16;
                  field v17;
                  v14 = child_at(scrutinee, 0);
                  v15 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v16 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v17 = make_Prelude__USDict_HTEq(v15, v16, 0);
                  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v17, v12, v14, 0);
                  Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_NondetError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
                  }
                  field v19;
                  v19 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_IOError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
                  }
                  field v13;
                  v13 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_FailError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
                  }
                  field v18;
                  v18 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
        case Prelude_NondetError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v28;
          v28 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
                  push_choice(scrutinee, make_Prelude_NondetError_free());
                  push_choice(scrutinee, make_Prelude_IOError_free());
                  push_choice(scrutinee, make_Prelude_FailError_free());
                  set_Prelude_UserError_free(scrutinee);
                  nondet = true;
                  break;
                }
                case Prelude_UserError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
                  }
                  field v30;
                  v30 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_NondetError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
                  }
                  field v32;
                  field v33;
                  field v34;
                  field v35;
                  v32 = child_at(scrutinee, 0);
                  v33 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v34 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v35 = make_Prelude__USDict_HTEq(v33, v34, 0);
                  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v35, v28, v32, 0);
                  Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_IOError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
                  }
                  field v29;
                  v29 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_FailError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
                  }
                  field v31;
                  v31 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
        case Prelude_IOError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v2, v3, 0));
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
                  push_choice(scrutinee, make_Prelude_NondetError_free());
                  push_choice(scrutinee, make_Prelude_IOError_free());
                  push_choice(scrutinee, make_Prelude_FailError_free());
                  set_Prelude_UserError_free(scrutinee);
                  nondet = true;
                  break;
                }
                case Prelude_UserError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
                  }
                  field v9;
                  v9 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_NondetError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
                  }
                  field v11;
                  v11 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_IOError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  field v7;
                  field v8;
                  v5 = child_at(scrutinee, 0);
                  v6 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v7 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v8 = make_Prelude__USDict_HTEq(v6, v7, 0);
                  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v8, v4, v5, 0);
                  Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_FailError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
                  }
                  field v10;
                  v10 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
        case Prelude_FailError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v20;
          v20 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
                  push_choice(scrutinee, make_Prelude_NondetError_free());
                  push_choice(scrutinee, make_Prelude_IOError_free());
                  push_choice(scrutinee, make_Prelude_FailError_free());
                  set_Prelude_UserError_free(scrutinee);
                  nondet = true;
                  break;
                }
                case Prelude_UserError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
                  }
                  field v22;
                  v22 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_NondetError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
                  }
                  field v27;
                  v27 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_IOError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
                  }
                  field v21;
                  v21 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_FailError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
                  }
                  field v23;
                  field v24;
                  field v25;
                  field v26;
                  v23 = child_at(scrutinee, 0);
                  v24 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v25 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v26 = make_Prelude__USDict_HTEq(v24, v25, 0);
                  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v26, v20, v23, 0);
                  Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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

// implementation of == in Eq for IOError at []
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__hnf(field root)
{
  debug(LOW, "HNF _impl#==#Prelude.Eq#Prelude.IOError@[]\n");
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
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
          push_choice(scrutinee, make_Prelude_NondetError_free());
          push_choice(scrutinee, make_Prelude_IOError_free());
          push_choice(scrutinee, make_Prelude_FailError_free());
          set_Prelude_UserError_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_UserError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v12;
          v12 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
                  push_choice(scrutinee, make_Prelude_NondetError_free());
                  push_choice(scrutinee, make_Prelude_IOError_free());
                  push_choice(scrutinee, make_Prelude_FailError_free());
                  set_Prelude_UserError_free(scrutinee);
                  nondet = true;
                  break;
                }
                case Prelude_UserError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
                  }
                  field v14;
                  field v15;
                  field v16;
                  field v17;
                  v14 = child_at(scrutinee, 0);
                  v15 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v16 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v17 = make_Prelude__USDict_HTEq(v15, v16, 0);
                  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v17, v12, v14, 0);
                  Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_NondetError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
                  }
                  field v19;
                  v19 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_IOError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
                  }
                  field v13;
                  v13 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_FailError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
                  }
                  field v18;
                  v18 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
        case Prelude_NondetError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v28;
          v28 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
                  push_choice(scrutinee, make_Prelude_NondetError_free());
                  push_choice(scrutinee, make_Prelude_IOError_free());
                  push_choice(scrutinee, make_Prelude_FailError_free());
                  set_Prelude_UserError_free(scrutinee);
                  nondet = true;
                  break;
                }
                case Prelude_UserError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
                  }
                  field v30;
                  v30 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_NondetError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
                  }
                  field v32;
                  field v33;
                  field v34;
                  field v35;
                  v32 = child_at(scrutinee, 0);
                  v33 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v34 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v35 = make_Prelude__USDict_HTEq(v33, v34, 0);
                  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v35, v28, v32, 0);
                  Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_IOError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
                  }
                  field v29;
                  v29 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_FailError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
                  }
                  field v31;
                  v31 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
        case Prelude_IOError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v2, v3, 0));
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
                  push_choice(scrutinee, make_Prelude_NondetError_free());
                  push_choice(scrutinee, make_Prelude_IOError_free());
                  push_choice(scrutinee, make_Prelude_FailError_free());
                  set_Prelude_UserError_free(scrutinee);
                  nondet = true;
                  break;
                }
                case Prelude_UserError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
                  }
                  field v9;
                  v9 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_NondetError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
                  }
                  field v11;
                  v11 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_IOError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  field v7;
                  field v8;
                  v5 = child_at(scrutinee, 0);
                  v6 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v7 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v8 = make_Prelude__USDict_HTEq(v6, v7, 0);
                  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v8, v4, v5, 0);
                  Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_FailError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
                  }
                  field v10;
                  v10 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
        case Prelude_FailError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v20;
          v20 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
                  push_choice(scrutinee, make_Prelude_NondetError_free());
                  push_choice(scrutinee, make_Prelude_IOError_free());
                  push_choice(scrutinee, make_Prelude_FailError_free());
                  set_Prelude_UserError_free(scrutinee);
                  nondet = true;
                  break;
                }
                case Prelude_UserError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
                  }
                  field v22;
                  v22 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_NondetError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
                  }
                  field v27;
                  v27 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_IOError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
                  }
                  field v21;
                  v21 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_FailError_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
                  }
                  field v23;
                  field v24;
                  field v25;
                  field v26;
                  v23 = child_at(scrutinee, 0);
                  v24 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v25 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v26 = make_Prelude__USDict_HTEq(v24, v25, 0);
                  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v26, v20, v23, 0);
                  Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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

// implementation of == in Eq for IOError at [0]
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0_hnf(field root)
{
  debug(LOW, "HNF _impl#==#Prelude.Eq#Prelude.IOError@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v12;
  v12 = child_at(root, 0);
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
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
          push_choice(scrutinee, make_Prelude_NondetError_free());
          push_choice(scrutinee, make_Prelude_IOError_free());
          push_choice(scrutinee, make_Prelude_FailError_free());
          set_Prelude_UserError_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_UserError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
          }
          field v14;
          field v15;
          field v16;
          field v17;
          v14 = child_at(scrutinee, 0);
          v15 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
          v16 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
          v17 = make_Prelude__USDict_HTEq(v15, v16, 0);
          set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v17, v12, v14, 0);
          Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_NondetError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
          }
          field v19;
          v19 = child_at(scrutinee, 0);
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_IOError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
          }
          field v13;
          v13 = child_at(scrutinee, 0);
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_FailError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
          }
          field v18;
          v18 = child_at(scrutinee, 0);
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of == in Eq for IOError at [1]
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1_hnf(field root)
{
  debug(LOW, "HNF _impl#==#Prelude.Eq#Prelude.IOError@[1]\n");
  debug_expr(LOW, root);
  field v3;
  field v28;
  v28 = child_at(root, 0);
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
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
          push_choice(scrutinee, make_Prelude_NondetError_free());
          push_choice(scrutinee, make_Prelude_IOError_free());
          push_choice(scrutinee, make_Prelude_FailError_free());
          set_Prelude_UserError_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_UserError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
          }
          field v30;
          v30 = child_at(scrutinee, 0);
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_NondetError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
          }
          field v32;
          field v33;
          field v34;
          field v35;
          v32 = child_at(scrutinee, 0);
          v33 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
          v34 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
          v35 = make_Prelude__USDict_HTEq(v33, v34, 0);
          set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v35, v28, v32, 0);
          Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_IOError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
          }
          field v29;
          v29 = child_at(scrutinee, 0);
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_FailError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
          }
          field v31;
          v31 = child_at(scrutinee, 0);
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of == in Eq for IOError at [2]
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2_hnf(field root)
{
  debug(LOW, "HNF _impl#==#Prelude.Eq#Prelude.IOError@[2]\n");
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
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
          push_choice(scrutinee, make_Prelude_NondetError_free());
          push_choice(scrutinee, make_Prelude_IOError_free());
          push_choice(scrutinee, make_Prelude_FailError_free());
          set_Prelude_UserError_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_UserError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
          }
          field v9;
          v9 = child_at(scrutinee, 0);
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_NondetError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
          }
          field v11;
          v11 = child_at(scrutinee, 0);
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_IOError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
          }
          field v5;
          field v6;
          field v7;
          field v8;
          v5 = child_at(scrutinee, 0);
          v6 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
          v7 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
          v8 = make_Prelude__USDict_HTEq(v6, v7, 0);
          set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v8, v4, v5, 0);
          Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_FailError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
          }
          field v10;
          v10 = child_at(scrutinee, 0);
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of == in Eq for IOError at [3]
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3_hnf(field root)
{
  debug(LOW, "HNF _impl#==#Prelude.Eq#Prelude.IOError@[3]\n");
  debug_expr(LOW, root);
  field v3;
  field v20;
  v20 = child_at(root, 0);
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
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
          push_choice(scrutinee, make_Prelude_NondetError_free());
          push_choice(scrutinee, make_Prelude_IOError_free());
          push_choice(scrutinee, make_Prelude_FailError_free());
          set_Prelude_UserError_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_UserError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
          }
          field v22;
          v22 = child_at(scrutinee, 0);
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_NondetError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
          }
          field v27;
          v27 = child_at(scrutinee, 0);
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_IOError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
          }
          field v21;
          v21 = child_at(scrutinee, 0);
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_FailError_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
          }
          field v23;
          field v24;
          field v25;
          field v26;
          v23 = child_at(scrutinee, 0);
          v24 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
          v25 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
          v26 = make_Prelude__USDict_HTEq(v24, v25, 0);
          set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v26, v20, v23, 0);
          Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of == in Eq for IOError
Node* Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#==#Prelude.Eq#Prelude.IOError:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
          push_choice(scrutinee, make_Prelude_NondetError_free());
          push_choice(scrutinee, make_Prelude_IOError_free());
          push_choice(scrutinee, make_Prelude_FailError_free());
          set_Prelude_UserError_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_UserError_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v12;
          v12 = child_at(scrutinee, 0);
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
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
                  push_choice(scrutinee, make_Prelude_NondetError_free());
                  push_choice(scrutinee, make_Prelude_IOError_free());
                  push_choice(scrutinee, make_Prelude_FailError_free());
                  set_Prelude_UserError_free(scrutinee);
                  nondet = true;
                  break;
                }
                case Prelude_UserError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
                  }
                  field v14;
                  field v15;
                  field v16;
                  field v17;
                  v14 = child_at(scrutinee, 0);
                  v15 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v16 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v17 = make_Prelude__USDict_HTEq(v15, v16, 0);
                  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v17, v12, v14, 0);
                  backup = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(backup);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude_NondetError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
                  }
                  field v19;
                  v19 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude_IOError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
                  }
                  field v13;
                  v13 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude_FailError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__0(v3, v12, 0));
                  }
                  field v18;
                  v18 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
        case Prelude_NondetError_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v28;
          v28 = child_at(scrutinee, 0);
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
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
                  push_choice(scrutinee, make_Prelude_NondetError_free());
                  push_choice(scrutinee, make_Prelude_IOError_free());
                  push_choice(scrutinee, make_Prelude_FailError_free());
                  set_Prelude_UserError_free(scrutinee);
                  nondet = true;
                  break;
                }
                case Prelude_UserError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
                  }
                  field v30;
                  v30 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude_NondetError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
                  }
                  field v32;
                  field v33;
                  field v34;
                  field v35;
                  v32 = child_at(scrutinee, 0);
                  v33 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v34 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v35 = make_Prelude__USDict_HTEq(v33, v34, 0);
                  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v35, v28, v32, 0);
                  backup = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(backup);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude_IOError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
                  }
                  field v29;
                  v29 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude_FailError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__1(v3, v28, 0));
                  }
                  field v31;
                  v31 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
        case Prelude_IOError_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v2, v3, 0));
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
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
                  push_choice(scrutinee, make_Prelude_NondetError_free());
                  push_choice(scrutinee, make_Prelude_IOError_free());
                  push_choice(scrutinee, make_Prelude_FailError_free());
                  set_Prelude_UserError_free(scrutinee);
                  nondet = true;
                  break;
                }
                case Prelude_UserError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
                  }
                  field v9;
                  v9 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude_NondetError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
                  }
                  field v11;
                  v11 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude_IOError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
                  }
                  field v5;
                  field v6;
                  field v7;
                  field v8;
                  v5 = child_at(scrutinee, 0);
                  v6 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v7 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v8 = make_Prelude__USDict_HTEq(v6, v7, 0);
                  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v8, v4, v5, 0);
                  backup = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(backup);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude_FailError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__2(v3, v4, 0));
                  }
                  field v10;
                  v10 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
        case Prelude_FailError_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v20;
          v20 = child_at(scrutinee, 0);
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
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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
                  push_choice(scrutinee, make_Prelude_NondetError_free());
                  push_choice(scrutinee, make_Prelude_IOError_free());
                  push_choice(scrutinee, make_Prelude_FailError_free());
                  set_Prelude_UserError_free(scrutinee);
                  nondet = true;
                  break;
                }
                case Prelude_UserError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
                  }
                  field v22;
                  v22 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude_NondetError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
                  }
                  field v27;
                  v27 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude_IOError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
                  }
                  field v21;
                  v21 = child_at(scrutinee, 0);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude_FailError_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__3(v3, v20, 0));
                  }
                  field v23;
                  field v24;
                  field v25;
                  field v26;
                  v23 = child_at(scrutinee, 0);
                  v24 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v25 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
                  v26 = make_Prelude__USDict_HTEq(v24, v25, 0);
                  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v26, v20, v23, 0);
                  backup = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(backup);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#Prelude.IOError\n");
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

// instance of Eq for IOError
void Prelude__USinst_HTPrelude_DOEq_HTPrelude_DOIOError_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Eq#Prelude.IOError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v3 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError((field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude__USDict_HTEq(root, v3, v2, 0);
  debug(LOW, "leaving _inst#Prelude.Eq#Prelude.IOError\n");
  debug_expr(LOW, root);
  return;
}

// instance of Eq for IOError
Node* Prelude__USinst_HTPrelude_DOEq_HTPrelude_DOIOError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Eq#Prelude.IOError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v3 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError((field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude__USDict_HTEq(root, v3, v2, 0);
  debug(LOW, "leaving _inst#Prelude.Eq#Prelude.IOError\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of fail in Monad for []
void Prelude__USimpl_HTfail_HTPrelude_DOMonad_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _impl#fail#Prelude.Monad#[]:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_Prelude__LB_RB(root, 0);
  debug(LOW, "leaving _impl#fail#Prelude.Monad#[]\n");
  debug_expr(LOW, root);
  return;
}

// implementation of fail in Monad for []
Node* Prelude__USimpl_HTfail_HTPrelude_DOMonad_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#fail#Prelude.Monad#[]:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_Prelude__LB_RB(root, 0);
  debug(LOW, "leaving _impl#fail#Prelude.Monad#[]\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of return in Monad for []
void Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _impl#return#Prelude.Monad#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude__LB_RB(0);
  set_Prelude__CO(root, v2, v3, 0);
  debug(LOW, "leaving _impl#return#Prelude.Monad#[]\n");
  debug_expr(LOW, root);
  return;
}

// implementation of return in Monad for []
Node* Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#return#Prelude.Monad#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude__LB_RB(0);
  set_Prelude__CO(root, v2, v3, 0);
  debug(LOW, "leaving _impl#return#Prelude.Monad#[]\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of >>= in Monad for _
void Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_DO_US_HTlambda184_HTP14_hnf(field root)
{
  debug(LOW, "HNF _impl#>>=#Prelude.Monad#[]._#lambda184#P14:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_apply2(root, v2, v3, v4);
  apply_hnf(root);
  debug(LOW, "leaving _impl#>>=#Prelude.Monad#[]._#lambda184#P14\n");
  debug_expr(LOW, root);
  return;
}

// implementation of >>= in Monad for _
Node* Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_DO_US_HTlambda184_HTP14_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#>>=#Prelude.Monad#[]._#lambda184#P14:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_apply2(root, v2, v3, v4);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _impl#>>=#Prelude.Monad#[]._#lambda184#P14\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of >>= in Monad for []
void Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _impl#>>=#Prelude.Monad#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15(v3, (field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v5 = make_Prelude_concatMap_HTP2((field)(Node*)NULL, 1);
  set_Prelude_build_USfold(root, v4, v5, v2, 0);
  Prelude_build_USfold_hnf(root);
  debug(LOW, "leaving _impl#>>=#Prelude.Monad#[]\n");
  debug_expr(LOW, root);
  return;
}

// implementation of >>= in Monad for []
Node* Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#>>=#Prelude.Monad#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15(v3, (field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v5 = make_Prelude_concatMap_HTP2((field)(Node*)NULL, 1);
  set_Prelude_build_USfold(root, v4, v5, v2, 0);
  backup = Prelude_build_USfold_RET_hnf(backup);
  debug(LOW, "leaving _impl#>>=#Prelude.Monad#[]\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of >>= in Monad for []
void Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_hnf(field root)
{
  debug(LOW, "HNF _impl#>>=#Prelude.Monad#[]#P15:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_apply1(v2, v4);
  v7 = make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_HTP16(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v7, v5, v6, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving _impl#>>=#Prelude.Monad#[]#P15\n");
  debug_expr(LOW, root);
  return;
}

// implementation of >>= in Monad for []
Node* Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#>>=#Prelude.Monad#[]#P15:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_apply1(v2, v4);
  v7 = make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_HTP16(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v7, v5, v6, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving _impl#>>=#Prelude.Monad#[]#P15\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of >>= in Monad for []
void Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_HTP16_hnf(field root)
{
  debug(LOW, "HNF _impl#>>=#Prelude.Monad#[]#P15#P16:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_apply2(root, v2, v3, v4);
  apply_hnf(root);
  debug(LOW, "leaving _impl#>>=#Prelude.Monad#[]#P15#P16\n");
  debug_expr(LOW, root);
  return;
}

// implementation of >>= in Monad for []
Node* Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB_HTP15_HTP16_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#>>=#Prelude.Monad#[]#P15#P16:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_apply2(root, v2, v3, v4);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _impl#>>=#Prelude.Monad#[]#P15#P16\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of fail in Monad for Maybe
void Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOMaybe_hnf(field root)
{
  debug(LOW, "HNF _impl#fail#Prelude.Monad#Prelude.Maybe:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_Prelude_Nothing(root, 0);
  debug(LOW, "leaving _impl#fail#Prelude.Monad#Prelude.Maybe\n");
  debug_expr(LOW, root);
  return;
}

// implementation of fail in Monad for Maybe
Node* Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOMaybe_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#fail#Prelude.Monad#Prelude.Maybe:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_Prelude_Nothing(root, 0);
  debug(LOW, "leaving _impl#fail#Prelude.Monad#Prelude.Maybe\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of return in Monad for Maybe
void Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOMaybe_hnf(field root)
{
  debug(LOW, "HNF _impl#return#Prelude.Monad#Prelude.Maybe:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_Prelude_Just(root, v2, 0);
  debug(LOW, "leaving _impl#return#Prelude.Monad#Prelude.Maybe\n");
  debug_expr(LOW, root);
  return;
}

// implementation of return in Monad for Maybe
Node* Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOMaybe_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#return#Prelude.Monad#Prelude.Maybe:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_Prelude_Just(root, v2, 0);
  debug(LOW, "leaving _impl#return#Prelude.Monad#Prelude.Maybe\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of >>= in Monad for Maybe
void Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_hnf(field root)
{
  debug(LOW, "HNF _impl#>>=#Prelude.Monad#Prelude.Maybe:\n");
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
            save(root, make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#>>=#Prelude.Monad#Prelude.Maybe\n");
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
          push_choice(scrutinee, make_Prelude_Just_free());
          set_Prelude_Nothing_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_Nothing_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_(v2, v3, 0));
          }
          set_Prelude_Nothing(root, 0);
          debug(LOW, "leaving _impl#>>=#Prelude.Monad#Prelude.Maybe\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_Just_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          set_apply1(root, v3, v4);
          apply_hnf(root);
          debug(LOW, "leaving _impl#>>=#Prelude.Monad#Prelude.Maybe\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of >>= in Monad for Maybe at []
void Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe__hnf(field root)
{
  debug(LOW, "HNF _impl#>>=#Prelude.Monad#Prelude.Maybe@[]\n");
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
            save(root, make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#>>=#Prelude.Monad#Prelude.Maybe\n");
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
          push_choice(scrutinee, make_Prelude_Just_free());
          set_Prelude_Nothing_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_Nothing_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_(v2, v3, 0));
          }
          set_Prelude_Nothing(root, 0);
          debug(LOW, "leaving _impl#>>=#Prelude.Monad#Prelude.Maybe\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_Just_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          set_apply1(root, v3, v4);
          apply_hnf(root);
          debug(LOW, "leaving _impl#>>=#Prelude.Monad#Prelude.Maybe\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of >>= in Monad for Maybe
Node* Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#>>=#Prelude.Monad#Prelude.Maybe:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#>>=#Prelude.Monad#Prelude.Maybe\n");
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
          push_choice(scrutinee, make_Prelude_Just_free());
          set_Prelude_Nothing_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_Nothing_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_(v2, v3, 0));
          }
          set_Prelude_Nothing(root, 0);
          debug(LOW, "leaving _impl#>>=#Prelude.Monad#Prelude.Maybe\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_Just_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          set_apply1(root, v3, v4);
          backup = apply_RET_hnf(backup);
          debug(LOW, "leaving _impl#>>=#Prelude.Monad#Prelude.Maybe\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of return in Monad for IO
void Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOIO_hnf(field root)
{
  debug(LOW, "HNF _impl#return#Prelude.Monad#Prelude.IO:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_Prelude_returnIO(root, v2, 0);
  Prelude_returnIO_hnf(root);
  debug(LOW, "leaving _impl#return#Prelude.Monad#Prelude.IO\n");
  debug_expr(LOW, root);
  return;
}

// implementation of return in Monad for IO
Node* Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOIO_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#return#Prelude.Monad#Prelude.IO:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_Prelude_returnIO(root, v2, 0);
  backup = Prelude_returnIO_RET_hnf(backup);
  debug(LOW, "leaving _impl#return#Prelude.Monad#Prelude.IO\n");
  debug_expr(LOW, root);
  return backup;
}

// sequenceIO._#lambda292._#lambda294
void Prelude_sequenceIO_DO_US_HTlambda292_DO_US_HTlambda294_hnf(field root)
{
  debug(LOW, "HNF sequenceIO._#lambda292._#lambda294:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__CO(v2, v3, 0);
  set_Prelude_returnIO(root, v4, 0);
  Prelude_returnIO_hnf(root);
  debug(LOW, "leaving sequenceIO._#lambda292._#lambda294\n");
  debug_expr(LOW, root);
  return;
}

// sequenceIO._#lambda292._#lambda294
Node* Prelude_sequenceIO_DO_US_HTlambda292_DO_US_HTlambda294_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF sequenceIO._#lambda292._#lambda294:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__CO(v2, v3, 0);
  set_Prelude_returnIO(root, v4, 0);
  backup = Prelude_returnIO_RET_hnf(backup);
  debug(LOW, "leaving sequenceIO._#lambda292._#lambda294\n");
  debug_expr(LOW, root);
  return backup;
}

// done
void Prelude_done_hnf(field root)
{
  debug(LOW, "HNF done:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = make_Prelude__LP_RP(0);
  set_Prelude_returnIO(root, v2, 0);
  Prelude_returnIO_hnf(root);
  debug(LOW, "leaving done\n");
  debug_expr(LOW, root);
  return;
}

// done
Node* Prelude_done_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF done:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = make_Prelude__LP_RP(0);
  set_Prelude_returnIO(root, v2, 0);
  backup = Prelude_returnIO_RET_hnf(backup);
  debug(LOW, "leaving done\n");
  debug_expr(LOW, root);
  return backup;
}

// when
void Prelude_when_hnf(field root)
{
  debug(LOW, "HNF when:\n");
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
            save(root, make_Prelude_when_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving when\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_when_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving when\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_when_(v2, v3, 0));
          }
          field v4;
          v4 = make_Prelude__LP_RP(0);
          set_Prelude_returnIO(root, v4, 0);
          Prelude_returnIO_hnf(root);
          debug(LOW, "leaving when\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// when at []
void Prelude_when__hnf(field root)
{
  debug(LOW, "HNF when@[]\n");
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
            save(root, make_Prelude_when_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving when\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_when_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving when\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_when_(v2, v3, 0));
          }
          field v4;
          v4 = make_Prelude__LP_RP(0);
          set_Prelude_returnIO(root, v4, 0);
          Prelude_returnIO_hnf(root);
          debug(LOW, "leaving when\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// when at [0]
void Prelude_when__0_hnf(field root)
{
  debug(LOW, "HNF when@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving when\n");
  debug_expr(LOW, root);
  return;
}

// when
Node* Prelude_when_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF when:\n");
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
            backup = save_RET(backup, make_Prelude_when_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving when\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_when_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving when\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_when_(v2, v3, 0));
          }
          field v4;
          v4 = make_Prelude__LP_RP(0);
          set_Prelude_returnIO(root, v4, 0);
          backup = Prelude_returnIO_RET_hnf(backup);
          debug(LOW, "leaving when\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// unless
void Prelude_unless_hnf(field root)
{
  debug(LOW, "HNF unless:\n");
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
            save(root, make_Prelude_unless_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving unless\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_unless_(v2, v3, 0));
          }
          field v4;
          v4 = make_Prelude__LP_RP(0);
          set_Prelude_returnIO(root, v4, 0);
          Prelude_returnIO_hnf(root);
          debug(LOW, "leaving unless\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_unless_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving unless\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// unless at []
void Prelude_unless__hnf(field root)
{
  debug(LOW, "HNF unless@[]\n");
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
            save(root, make_Prelude_unless_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving unless\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_unless_(v2, v3, 0));
          }
          field v4;
          v4 = make_Prelude__LP_RP(0);
          set_Prelude_returnIO(root, v4, 0);
          Prelude_returnIO_hnf(root);
          debug(LOW, "leaving unless\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_unless_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving unless\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// unless at [1]
void Prelude_unless__1_hnf(field root)
{
  debug(LOW, "HNF unless@[1]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving unless\n");
  debug_expr(LOW, root);
  return;
}

// unless
Node* Prelude_unless_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF unless:\n");
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
            backup = save_RET(backup, make_Prelude_unless_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving unless\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_unless_(v2, v3, 0));
          }
          field v4;
          v4 = make_Prelude__LP_RP(0);
          set_Prelude_returnIO(root, v4, 0);
          backup = Prelude_returnIO_RET_hnf(backup);
          debug(LOW, "leaving unless\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_unless_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving unless\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// doSolve
void Prelude_doSolve_hnf(field root)
{
  debug(LOW, "HNF doSolve:\n");
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
            save(root, make_Prelude_doSolve_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving doSolve\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_doSolve_(v2, 0));
          }
          field v3;
          v3 = make_Prelude__LP_RP(0);
          set_Prelude_returnIO(root, v3, 0);
          Prelude_returnIO_hnf(root);
          debug(LOW, "leaving doSolve\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_doSolve_(v2, 0));
          }
          set_Prelude_failed(root, 0);
          Prelude_failed_hnf(root);
          debug(LOW, "leaving doSolve\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// doSolve at []
void Prelude_doSolve__hnf(field root)
{
  debug(LOW, "HNF doSolve@[]\n");
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
            save(root, make_Prelude_doSolve_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving doSolve\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_doSolve_(v2, 0));
          }
          field v3;
          v3 = make_Prelude__LP_RP(0);
          set_Prelude_returnIO(root, v3, 0);
          Prelude_returnIO_hnf(root);
          debug(LOW, "leaving doSolve\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_doSolve_(v2, 0));
          }
          set_Prelude_failed(root, 0);
          Prelude_failed_hnf(root);
          debug(LOW, "leaving doSolve\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// doSolve
Node* Prelude_doSolve_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF doSolve:\n");
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
            backup = save_RET(backup, make_Prelude_doSolve_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving doSolve\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_doSolve_(v2, 0));
          }
          field v3;
          v3 = make_Prelude__LP_RP(0);
          set_Prelude_returnIO(root, v3, 0);
          backup = Prelude_returnIO_RET_hnf(backup);
          debug(LOW, "leaving doSolve\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_doSolve_(v2, 0));
          }
          set_Prelude_failed(root, 0);
          backup = Prelude_failed_RET_hnf(backup);
          debug(LOW, "leaving doSolve\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of >> in Monad for IO
void Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOIO_hnf(field root)
{
  debug(LOW, "HNF _impl#>>#Prelude.Monad#Prelude.IO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__GT_GT_DL_DO_US_HTlambda283(v3, (field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v2, v4, 0);
  Prelude__GT_GT_EQ_DL_hnf(root);
  debug(LOW, "leaving _impl#>>#Prelude.Monad#Prelude.IO\n");
  debug_expr(LOW, root);
  return;
}

// implementation of >> in Monad for IO
Node* Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOIO_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#>>#Prelude.Monad#Prelude.IO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__GT_GT_DL_DO_US_HTlambda283(v3, (field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v2, v4, 0);
  backup = Prelude__GT_GT_EQ_DL_RET_hnf(backup);
  debug(LOW, "leaving _impl#>>#Prelude.Monad#Prelude.IO\n");
  debug_expr(LOW, root);
  return backup;
}

// sequenceIO_
void Prelude_sequenceIO_US_hnf(field root)
{
  debug(LOW, "HNF sequenceIO_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = child_at(root, 0);
  v3 = make_Prelude__LP_RP(0);
  v4 = make_Prelude_returnIO(v3, 0);
  v5 = make_Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOIO((field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v5, v4, v2, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving sequenceIO_\n");
  debug_expr(LOW, root);
  return;
}

// sequenceIO_
Node* Prelude_sequenceIO_US_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF sequenceIO_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = child_at(root, 0);
  v3 = make_Prelude__LP_RP(0);
  v4 = make_Prelude_returnIO(v3, 0);
  v5 = make_Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOIO((field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v5, v4, v2, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving sequenceIO_\n");
  debug_expr(LOW, root);
  return backup;
}

// mapIO_
void Prelude_mapIO_US_hnf(field root)
{
  debug(LOW, "HNF mapIO_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__LP_RP(0);
  v5 = make_Prelude_returnIO(v4, 0);
  v6 = make_Prelude_mapIO_US_HTP17(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v6, v5, v3, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving mapIO_\n");
  debug_expr(LOW, root);
  return;
}

// mapIO_
Node* Prelude_mapIO_US_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF mapIO_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__LP_RP(0);
  v5 = make_Prelude_returnIO(v4, 0);
  v6 = make_Prelude_mapIO_US_HTP17(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v6, v5, v3, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving mapIO_\n");
  debug_expr(LOW, root);
  return backup;
}

// mapIO_#P17
void Prelude_mapIO_US_HTP17_hnf(field root)
{
  debug(LOW, "HNF mapIO_#P17:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v2, v3);
  v6 = make_Prelude__GT_GT_DL_DO_US_HTlambda283(v4, (field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v5, v6, 0);
  Prelude__GT_GT_EQ_DL_hnf(root);
  debug(LOW, "leaving mapIO_#P17\n");
  debug_expr(LOW, root);
  return;
}

// mapIO_#P17
Node* Prelude_mapIO_US_HTP17_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF mapIO_#P17:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v2, v3);
  v6 = make_Prelude__GT_GT_DL_DO_US_HTlambda283(v4, (field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v5, v6, 0);
  backup = Prelude__GT_GT_EQ_DL_RET_hnf(backup);
  debug(LOW, "leaving mapIO_#P17\n");
  debug_expr(LOW, root);
  return backup;
}

// forIO_
void Prelude_forIO_US_hnf(field root)
{
  debug(LOW, "HNF forIO_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__LP_RP(0);
  v5 = make_Prelude_returnIO(v4, 0);
  v6 = make_Prelude_forIO_US_HTP18(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v6, v5, v2, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving forIO_\n");
  debug_expr(LOW, root);
  return;
}

// forIO_
Node* Prelude_forIO_US_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF forIO_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__LP_RP(0);
  v5 = make_Prelude_returnIO(v4, 0);
  v6 = make_Prelude_forIO_US_HTP18(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr(root, v6, v5, v2, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving forIO_\n");
  debug_expr(LOW, root);
  return backup;
}

// forIO_#P18
void Prelude_forIO_US_HTP18_hnf(field root)
{
  debug(LOW, "HNF forIO_#P18:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v2, v3);
  v6 = make_Prelude__GT_GT_DL_DO_US_HTlambda283(v4, (field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v5, v6, 0);
  Prelude__GT_GT_EQ_DL_hnf(root);
  debug(LOW, "leaving forIO_#P18\n");
  debug_expr(LOW, root);
  return;
}

// forIO_#P18
Node* Prelude_forIO_US_HTP18_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF forIO_#P18:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v2, v3);
  v6 = make_Prelude__GT_GT_DL_DO_US_HTlambda283(v4, (field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v5, v6, 0);
  backup = Prelude__GT_GT_EQ_DL_RET_hnf(backup);
  debug(LOW, "leaving forIO_#P18\n");
  debug_expr(LOW, root);
  return backup;
}

// putStrLn
void Prelude_putStrLn_hnf(field root)
{
  debug(LOW, "HNF putStrLn:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = child_at(root, 0);
  v3 = make_Prelude_putStr(v2, 0);
  v4 = make_Prelude_prim_USputChar((field)(unsigned long)(10), 0);
  v5 = make_Prelude__GT_GT_DL_DO_US_HTlambda283(v4, (field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v3, v5, 0);
  Prelude__GT_GT_EQ_DL_hnf(root);
  debug(LOW, "leaving putStrLn\n");
  debug_expr(LOW, root);
  return;
}

// putStrLn
Node* Prelude_putStrLn_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF putStrLn:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = child_at(root, 0);
  v3 = make_Prelude_putStr(v2, 0);
  v4 = make_Prelude_prim_USputChar((field)(unsigned long)(10), 0);
  v5 = make_Prelude__GT_GT_DL_DO_US_HTlambda283(v4, (field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v3, v5, 0);
  backup = Prelude__GT_GT_EQ_DL_RET_hnf(backup);
  debug(LOW, "leaving putStrLn\n");
  debug_expr(LOW, root);
  return backup;
}

// print
void Prelude_print_hnf(field root)
{
  debug(LOW, "HNF print:\n");
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
  v4 = make_Prelude_show(v2, 0);
  v5 = make_apply1(v4, v3);
  v6 = make_Prelude_putStr(v5, 0);
  v7 = make_Prelude_prim_USputChar((field)(unsigned long)(10), 0);
  v8 = make_Prelude__GT_GT_DL_DO_US_HTlambda283(v7, (field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v6, v8, 0);
  Prelude__GT_GT_EQ_DL_hnf(root);
  debug(LOW, "leaving print\n");
  debug_expr(LOW, root);
  return;
}

// print
Node* Prelude_print_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF print:\n");
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
  v4 = make_Prelude_show(v2, 0);
  v5 = make_apply1(v4, v3);
  v6 = make_Prelude_putStr(v5, 0);
  v7 = make_Prelude_prim_USputChar((field)(unsigned long)(10), 0);
  v8 = make_Prelude__GT_GT_DL_DO_US_HTlambda283(v7, (field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v6, v8, 0);
  backup = Prelude__GT_GT_EQ_DL_RET_hnf(backup);
  debug(LOW, "leaving print\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of >>= in Monad for IO
void Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOIO_hnf(field root)
{
  debug(LOW, "HNF _impl#>>=#Prelude.Monad#Prelude.IO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_Prelude__GT_GT_EQ_DL(root, v2, v3, 0);
  Prelude__GT_GT_EQ_DL_hnf(root);
  debug(LOW, "leaving _impl#>>=#Prelude.Monad#Prelude.IO\n");
  debug_expr(LOW, root);
  return;
}

// implementation of >>= in Monad for IO
Node* Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOIO_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#>>=#Prelude.Monad#Prelude.IO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_Prelude__GT_GT_EQ_DL(root, v2, v3, 0);
  backup = Prelude__GT_GT_EQ_DL_RET_hnf(backup);
  debug(LOW, "leaving _impl#>>=#Prelude.Monad#Prelude.IO\n");
  debug_expr(LOW, root);
  return backup;
}

// liftIO
void Prelude_liftIO_hnf(field root)
{
  debug(LOW, "HNF liftIO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_liftIO_HTP19(v2, (field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v3, v4, 0);
  Prelude__GT_GT_EQ_DL_hnf(root);
  debug(LOW, "leaving liftIO\n");
  debug_expr(LOW, root);
  return;
}

// liftIO
Node* Prelude_liftIO_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF liftIO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_liftIO_HTP19(v2, (field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v3, v4, 0);
  backup = Prelude__GT_GT_EQ_DL_RET_hnf(backup);
  debug(LOW, "leaving liftIO\n");
  debug_expr(LOW, root);
  return backup;
}

// liftIO#P19
void Prelude_liftIO_HTP19_hnf(field root)
{
  debug(LOW, "HNF liftIO#P19:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_apply1(v2, v3);
  set_Prelude_returnIO(root, v4, 0);
  Prelude_returnIO_hnf(root);
  debug(LOW, "leaving liftIO#P19\n");
  debug_expr(LOW, root);
  return;
}

// liftIO#P19
Node* Prelude_liftIO_HTP19_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF liftIO#P19:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_apply1(v2, v3);
  set_Prelude_returnIO(root, v4, 0);
  backup = Prelude_returnIO_RET_hnf(backup);
  debug(LOW, "leaving liftIO#P19\n");
  debug_expr(LOW, root);
  return backup;
}

// foldIO._#lambda296
void Prelude_foldIO_DO_US_HTlambda296_hnf(field root)
{
  debug(LOW, "HNF foldIO._#lambda296:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude_foldIO(root, v3, v4, v2, 0);
  Prelude_foldIO_hnf(root);
  debug(LOW, "leaving foldIO._#lambda296\n");
  debug_expr(LOW, root);
  return;
}

// foldIO._#lambda296
Node* Prelude_foldIO_DO_US_HTlambda296_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF foldIO._#lambda296:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude_foldIO(root, v3, v4, v2, 0);
  backup = Prelude_foldIO_RET_hnf(backup);
  debug(LOW, "leaving foldIO._#lambda296\n");
  debug_expr(LOW, root);
  return backup;
}

// sequenceIO._#lambda292
void Prelude_sequenceIO_DO_US_HTlambda292_hnf(field root)
{
  debug(LOW, "HNF sequenceIO._#lambda292:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_sequenceIO(v2, 0);
  v5 = make_Prelude_sequenceIO_DO_US_HTlambda292_DO_US_HTlambda294(v3, (field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v4, v5, 0);
  Prelude__GT_GT_EQ_DL_hnf(root);
  debug(LOW, "leaving sequenceIO._#lambda292\n");
  debug_expr(LOW, root);
  return;
}

// sequenceIO._#lambda292
Node* Prelude_sequenceIO_DO_US_HTlambda292_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF sequenceIO._#lambda292:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_sequenceIO(v2, 0);
  v5 = make_Prelude_sequenceIO_DO_US_HTlambda292_DO_US_HTlambda294(v3, (field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v4, v5, 0);
  backup = Prelude__GT_GT_EQ_DL_RET_hnf(backup);
  debug(LOW, "leaving sequenceIO._#lambda292\n");
  debug_expr(LOW, root);
  return backup;
}

// mapIO
void Prelude_mapIO_hnf(field root)
{
  debug(LOW, "HNF mapIO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_map_USmkc(v2, (field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v5 = make_Prelude_id((field)(Node*)NULL, 1);
  v6 = make_Prelude_build_USfold(v4, v5, v3, 0);
  set_Prelude_sequenceIO(root, v6, 0);
  Prelude_sequenceIO_hnf(root);
  debug(LOW, "leaving mapIO\n");
  debug_expr(LOW, root);
  return;
}

// mapIO
Node* Prelude_mapIO_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF mapIO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_map_USmkc(v2, (field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v5 = make_Prelude_id((field)(Node*)NULL, 1);
  v6 = make_Prelude_build_USfold(v4, v5, v3, 0);
  set_Prelude_sequenceIO(root, v6, 0);
  backup = Prelude_sequenceIO_RET_hnf(backup);
  debug(LOW, "leaving mapIO\n");
  debug_expr(LOW, root);
  return backup;
}

// forIO
void Prelude_forIO_hnf(field root)
{
  debug(LOW, "HNF forIO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_map_USmkc(v3, (field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v5 = make_Prelude_id((field)(Node*)NULL, 1);
  v6 = make_Prelude_build_USfold(v4, v5, v2, 0);
  set_Prelude_sequenceIO(root, v6, 0);
  Prelude_sequenceIO_hnf(root);
  debug(LOW, "leaving forIO\n");
  debug_expr(LOW, root);
  return;
}

// forIO
Node* Prelude_forIO_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF forIO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_map_USmkc(v3, (field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v5 = make_Prelude_id((field)(Node*)NULL, 1);
  v6 = make_Prelude_build_USfold(v4, v5, v2, 0);
  set_Prelude_sequenceIO(root, v6, 0);
  backup = Prelude_sequenceIO_RET_hnf(backup);
  debug(LOW, "leaving forIO\n");
  debug_expr(LOW, root);
  return backup;
}

// getLine
void Prelude_getLine_hnf(field root)
{
  debug(LOW, "HNF getLine:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = make_Prelude_getChar(0);
  v3 = make_Prelude_getLine_DO_US_HTlambda285((field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v2, v3, 0);
  Prelude__GT_GT_EQ_DL_hnf(root);
  debug(LOW, "leaving getLine\n");
  debug_expr(LOW, root);
  return;
}

// getLine
Node* Prelude_getLine_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF getLine:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = make_Prelude_getChar(0);
  v3 = make_Prelude_getLine_DO_US_HTlambda285((field)(Node*)NULL, 1);
  set_Prelude__GT_GT_EQ_DL(root, v2, v3, 0);
  backup = Prelude__GT_GT_EQ_DL_RET_hnf(backup);
  debug(LOW, "leaving getLine\n");
  debug_expr(LOW, root);
  return backup;
}

// default for fail in Monad
void Prelude__USdef_HTfail_HTPrelude_DOMonad_hnf(field root)
{
  debug(LOW, "HNF _def#fail#Prelude.Monad:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  set_Prelude__DL_HT_HT(root, v4, v3, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving _def#fail#Prelude.Monad\n");
  debug_expr(LOW, root);
  return;
}

// default for fail in Monad
Node* Prelude__USdef_HTfail_HTPrelude_DOMonad_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#fail#Prelude.Monad:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  set_Prelude__DL_HT_HT(root, v4, v3, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving _def#fail#Prelude.Monad\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of fail in Monad for IO
void Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOIO_hnf(field root)
{
  debug(LOW, "HNF _impl#fail#Prelude.Monad#Prelude.IO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  set_Prelude__DL_HT_HT(root, v3, v2, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving _impl#fail#Prelude.Monad#Prelude.IO\n");
  debug_expr(LOW, root);
  return;
}

// implementation of fail in Monad for IO
Node* Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOIO_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#fail#Prelude.Monad#Prelude.IO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  set_Prelude__DL_HT_HT(root, v3, v2, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving _impl#fail#Prelude.Monad#Prelude.IO\n");
  debug_expr(LOW, root);
  return backup;
}

// default for >> in Monad._
void Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183_hnf(field root)
{
  debug(LOW, "HNF _def#>>#Prelude.Monad._#lambda183:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_forward(root, v2);
  debug(LOW, "leaving _def#>>#Prelude.Monad._#lambda183\n");
  debug_expr(LOW, root);
  return;
}

// default for >> in Monad._ at []
void Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183__hnf(field root)
{
  debug(LOW, "HNF _def#>>#Prelude.Monad._#lambda183@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving _def#>>#Prelude.Monad._#lambda183\n");
  debug_expr(LOW, root);
  return;
}

// default for >> in Monad._
Node* Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#>>#Prelude.Monad._#lambda183:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_forward(root, v2);
  debug(LOW, "leaving _def#>>#Prelude.Monad._#lambda183\n");
  debug_expr(LOW, root);
  return backup;
}

// default for >> in Monad
void Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_hnf(field root)
{
  debug(LOW, "HNF _def#>>#Prelude.Monad:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__GT_GT_EQ(v2, 0);
  v6 = make_Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183(v4, (field)(Node*)NULL, 1);
  set_apply2(root, v5, v3, v6);
  apply_hnf(root);
  debug(LOW, "leaving _def#>>#Prelude.Monad\n");
  debug_expr(LOW, root);
  return;
}

// default for >> in Monad
Node* Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#>>#Prelude.Monad:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__GT_GT_EQ(v2, 0);
  v6 = make_Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183(v4, (field)(Node*)NULL, 1);
  set_apply2(root, v5, v3, v6);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _def#>>#Prelude.Monad\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of >> in Monad for []
void Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _impl#>>#Prelude.Monad#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USinst_HTPrelude_DOMonad_HT_LB_RB(0);
  v5 = make_Prelude__GT_GT_EQ(v4, 0);
  v6 = make_Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183(v3, (field)(Node*)NULL, 1);
  set_apply2(root, v5, v2, v6);
  apply_hnf(root);
  debug(LOW, "leaving _impl#>>#Prelude.Monad#[]\n");
  debug_expr(LOW, root);
  return;
}

// implementation of >> in Monad for []
Node* Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#>>#Prelude.Monad#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USinst_HTPrelude_DOMonad_HT_LB_RB(0);
  v5 = make_Prelude__GT_GT_EQ(v4, 0);
  v6 = make_Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183(v3, (field)(Node*)NULL, 1);
  set_apply2(root, v5, v2, v6);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _impl#>>#Prelude.Monad#[]\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of >> in Monad for Maybe
void Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOMaybe_hnf(field root)
{
  debug(LOW, "HNF _impl#>>#Prelude.Monad#Prelude.Maybe:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOMaybe(0);
  v5 = make_Prelude__GT_GT_EQ(v4, 0);
  v6 = make_Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183(v3, (field)(Node*)NULL, 1);
  set_apply2(root, v5, v2, v6);
  apply_hnf(root);
  debug(LOW, "leaving _impl#>>#Prelude.Monad#Prelude.Maybe\n");
  debug_expr(LOW, root);
  return;
}

// implementation of >> in Monad for Maybe
Node* Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOMaybe_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#>>#Prelude.Monad#Prelude.Maybe:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOMaybe(0);
  v5 = make_Prelude__GT_GT_EQ(v4, 0);
  v6 = make_Prelude__USdef_HT_GT_GT_HTPrelude_DOMonad_DO_US_HTlambda183(v3, (field)(Node*)NULL, 1);
  set_apply2(root, v5, v2, v6);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _impl#>>#Prelude.Monad#Prelude.Maybe\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of fmap in Functor for []
void Prelude__USimpl_HTfmap_HTPrelude_DOFunctor_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _impl#fmap#Prelude.Functor#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_map_USmkc(v2, (field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v5 = make_Prelude_id((field)(Node*)NULL, 1);
  set_Prelude_build_USfold(root, v4, v5, v3, 0);
  Prelude_build_USfold_hnf(root);
  debug(LOW, "leaving _impl#fmap#Prelude.Functor#[]\n");
  debug_expr(LOW, root);
  return;
}

// implementation of fmap in Functor for []
Node* Prelude__USimpl_HTfmap_HTPrelude_DOFunctor_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#fmap#Prelude.Functor#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_map_USmkc(v2, (field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v5 = make_Prelude_id((field)(Node*)NULL, 1);
  set_Prelude_build_USfold(root, v4, v5, v3, 0);
  backup = Prelude_build_USfold_RET_hnf(backup);
  debug(LOW, "leaving _impl#fmap#Prelude.Functor#[]\n");
  debug_expr(LOW, root);
  return backup;
}

// instance of Functor for []
void Prelude__USinst_HTPrelude_DOFunctor_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Functor#[]:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = make_Prelude__USimpl_HTfmap_HTPrelude_DOFunctor_HT_LB_RB((field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude__USDict_HTFunctor(root, v2, 0);
  debug(LOW, "leaving _inst#Prelude.Functor#[]\n");
  debug_expr(LOW, root);
  return;
}

// instance of Functor for []
Node* Prelude__USinst_HTPrelude_DOFunctor_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Functor#[]:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = make_Prelude__USimpl_HTfmap_HTPrelude_DOFunctor_HT_LB_RB((field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude__USDict_HTFunctor(root, v2, 0);
  debug(LOW, "leaving _inst#Prelude.Functor#[]\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of showList in Show for IOError
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_hnf(field root)
{
  debug(LOW, "HNF _impl#showList#Prelude.Show#Prelude.IOError:\n");
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
            save(root, make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#showList#Prelude.Show#Prelude.IOError\n");
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
          push_choice(scrutinee, make_Prelude__CO_free());
          set_Prelude__LB_RB_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LB_RB_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v4;
          v4 = make_Prelude__USdef_HTshowList_HTPrelude_DOShow_HTP49(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_build(root, v4, 0);
          Prelude_build_hnf(root);
          debug(LOW, "leaving _impl#showList#Prelude.Show#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          field v11;
          field v12;
          field v13;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v7 = make__int(0, 0);
          v8 = make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError(v7, (field)(Node*)NULL, 1);
          v9 = make_Prelude_showList_SQ_DOshowl_DO429(v3, v8, v6, 0);
          v10 = make__int(0, 0);
          v11 = make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError(v10, v5, 0);
          v12 = make_apply1(v11, v9);
          v13 = make__char(91, 0);
          set_Prelude__CO(root, v13, v12, 0);
          debug(LOW, "leaving _impl#showList#Prelude.Show#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of showList in Show for IOError at []
void Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError__hnf(field root)
{
  debug(LOW, "HNF _impl#showList#Prelude.Show#Prelude.IOError@[]\n");
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
            save(root, make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#showList#Prelude.Show#Prelude.IOError\n");
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
          push_choice(scrutinee, make_Prelude__CO_free());
          set_Prelude__LB_RB_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LB_RB_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v4;
          v4 = make_Prelude__USdef_HTshowList_HTPrelude_DOShow_HTP49(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_build(root, v4, 0);
          Prelude_build_hnf(root);
          debug(LOW, "leaving _impl#showList#Prelude.Show#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          field v11;
          field v12;
          field v13;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v7 = make__int(0, 0);
          v8 = make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError(v7, (field)(Node*)NULL, 1);
          v9 = make_Prelude_showList_SQ_DOshowl_DO429(v3, v8, v6, 0);
          v10 = make__int(0, 0);
          v11 = make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError(v10, v5, 0);
          v12 = make_apply1(v11, v9);
          v13 = make__char(91, 0);
          set_Prelude__CO(root, v13, v12, 0);
          debug(LOW, "leaving _impl#showList#Prelude.Show#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of showList in Show for IOError
Node* Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#showList#Prelude.Show#Prelude.IOError:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#showList#Prelude.Show#Prelude.IOError\n");
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
          push_choice(scrutinee, make_Prelude__CO_free());
          set_Prelude__LB_RB_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LB_RB_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v4;
          v4 = make_Prelude__USdef_HTshowList_HTPrelude_DOShow_HTP49(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_build(root, v4, 0);
          backup = Prelude_build_RET_hnf(backup);
          debug(LOW, "leaving _impl#showList#Prelude.Show#Prelude.IOError\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTshowList_HTPrelude_DOShow_HTPrelude_DOIOError_(v2, v3, 0));
          }
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          field v11;
          field v12;
          field v13;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v7 = make__int(0, 0);
          v8 = make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError(v7, (field)(Node*)NULL, 1);
          v9 = make_Prelude_showList_SQ_DOshowl_DO429(v3, v8, v6, 0);
          v10 = make__int(0, 0);
          v11 = make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError(v10, v5, 0);
          v12 = make_apply1(v11, v9);
          v13 = make__char(91, 0);
          set_Prelude__CO(root, v13, v12, 0);
          debug(LOW, "leaving _impl#showList#Prelude.Show#Prelude.IOError\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of show in Show for IOError
void Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOIOError_hnf(field root)
{
  debug(LOW, "HNF _impl#show#Prelude.Show#Prelude.IOError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = child_at(root, 0);
  v3 = make__int(0, 0);
  v4 = make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError(v3, v2, 0);
  v5 = make_Prelude__LB_RB(0);
  set_apply1(root, v4, v5);
  apply_hnf(root);
  debug(LOW, "leaving _impl#show#Prelude.Show#Prelude.IOError\n");
  debug_expr(LOW, root);
  return;
}

// implementation of show in Show for IOError
Node* Prelude__USimpl_HTshow_HTPrelude_DOShow_HTPrelude_DOIOError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#show#Prelude.Show#Prelude.IOError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = child_at(root, 0);
  v3 = make__int(0, 0);
  v4 = make_Prelude__USimpl_HTshowsPrec_HTPrelude_DOShow_HTPrelude_DOIOError(v3, v2, 0);
  v5 = make_Prelude__LB_RB(0);
  set_apply1(root, v4, v5);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _impl#show#Prelude.Show#Prelude.IOError\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of readList in Read for IOError
void Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOIOError_hnf(field root)
{
  debug(LOW, "HNF _impl#readList#Prelude.Read#Prelude.IOError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = child_at(root, 0);
  v3 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOIOError((field)(Node*)NULL, 1);
  v4 = make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USDict_HTRead(v4, v3, 0);
  set_Prelude__USdef_HTreadList_HTPrelude_DORead(root, v5, v2, 0);
  Prelude__USdef_HTreadList_HTPrelude_DORead_hnf(root);
  debug(LOW, "leaving _impl#readList#Prelude.Read#Prelude.IOError\n");
  debug_expr(LOW, root);
  return;
}

// implementation of readList in Read for IOError
Node* Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOIOError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#readList#Prelude.Read#Prelude.IOError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = child_at(root, 0);
  v3 = make_Prelude__USimpl_HTreadList_HTPrelude_DORead_HTPrelude_DOIOError((field)(Node*)NULL, 1);
  v4 = make_Prelude__USimpl_HTreadsPrec_HTPrelude_DORead_HTPrelude_DOIOError((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USDict_HTRead(v4, v3, 0);
  set_Prelude__USdef_HTreadList_HTPrelude_DORead(root, v5, v2, 0);
  backup = Prelude__USdef_HTreadList_HTPrelude_DORead_RET_hnf(backup);
  debug(LOW, "leaving _impl#readList#Prelude.Read#Prelude.IOError\n");
  debug_expr(LOW, root);
  return backup;
}

// foldM
void Prelude_foldM_hnf(field root)
{
  debug(LOW, "HNF foldM:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  {
    bool nondet = false;
    field scrutinee = v5;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldM_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving foldM\n");
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
          push_choice(scrutinee, make_Prelude__CO_free());
          set_Prelude__LB_RB_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LB_RB_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldM_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = make_Prelude_return(v2, 0);
          set_apply1(root, v6, v4);
          apply_hnf(root);
          debug(LOW, "leaving foldM\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldM_(v2, v3, v4, v5, 0));
          }
          field v7;
          field v8;
          field v9;
          field v10;
          field v11;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          v9 = make_Prelude__GT_GT_EQ(v2, 0);
          v10 = make_apply2(v3, v4, v7);
          v11 = make_Prelude_foldM_DO_US_HTlambda457(v8, v2, v3, (field)(Node*)NULL, 1);
          set_apply2(root, v9, v10, v11);
          apply_hnf(root);
          debug(LOW, "leaving foldM\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// foldM at []
void Prelude_foldM__hnf(field root)
{
  debug(LOW, "HNF foldM@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  {
    bool nondet = false;
    field scrutinee = v5;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldM_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving foldM\n");
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
          push_choice(scrutinee, make_Prelude__CO_free());
          set_Prelude__LB_RB_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LB_RB_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldM_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = make_Prelude_return(v2, 0);
          set_apply1(root, v6, v4);
          apply_hnf(root);
          debug(LOW, "leaving foldM\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldM_(v2, v3, v4, v5, 0));
          }
          field v7;
          field v8;
          field v9;
          field v10;
          field v11;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          v9 = make_Prelude__GT_GT_EQ(v2, 0);
          v10 = make_apply2(v3, v4, v7);
          v11 = make_Prelude_foldM_DO_US_HTlambda457(v8, v2, v3, (field)(Node*)NULL, 1);
          set_apply2(root, v9, v10, v11);
          apply_hnf(root);
          debug(LOW, "leaving foldM\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// foldM
Node* Prelude_foldM_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF foldM:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  {
    bool nondet = false;
    field scrutinee = v5;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_foldM_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving foldM\n");
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
          push_choice(scrutinee, make_Prelude__CO_free());
          set_Prelude__LB_RB_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LB_RB_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_foldM_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = make_Prelude_return(v2, 0);
          set_apply1(root, v6, v4);
          backup = apply_RET_hnf(backup);
          debug(LOW, "leaving foldM\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_foldM_(v2, v3, v4, v5, 0));
          }
          field v7;
          field v8;
          field v9;
          field v10;
          field v11;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          v9 = make_Prelude__GT_GT_EQ(v2, 0);
          v10 = make_apply2(v3, v4, v7);
          v11 = make_Prelude_foldM_DO_US_HTlambda457(v8, v2, v3, (field)(Node*)NULL, 1);
          set_apply2(root, v9, v10, v11);
          backup = apply_RET_hnf(backup);
          debug(LOW, "leaving foldM\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of /= in Eq for IOError
void Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_hnf(field root)
{
  debug(LOW, "HNF _impl#/=#Prelude.Eq#Prelude.IOError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError(RET, v2, v3, 0);
  v4 = RET;
  {
    bool nondet = false;
    field backup4 = (field)Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup4.n != NULL)
    {
      nondet = true;
      memcpy(backup4.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup4 = RET.n->children[0];
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
            save(root, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(backup4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#Prelude.IOError\n");
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
          if(scrutinee.n == RET.n)
          {
            backup4.n = make_restore(backup4.n);
            push_frame(backup4, free_var());
            push_choice(backup4, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(backup4, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(backup4, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of /= in Eq for IOError at []
void Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError__hnf(field root)
{
  debug(LOW, "HNF _impl#/=#Prelude.Eq#Prelude.IOError@[]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
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
            save(root, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#Prelude.IOError\n");
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
          push_choice(scrutinee, make_Prelude_False_free());
          set_Prelude_True_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v4, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(v4, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of /= in Eq for IOError
Node* Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#/=#Prelude.Eq#Prelude.IOError:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError(RET, v2, v3, 0);
  v4 = RET;
  {
    bool nondet = false;
    field backup4 = (field)Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup4.n != NULL)
    {
      nondet = true;
      memcpy(backup4.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup4 = RET.n->children[0];
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
            backup = save_RET(backup, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(backup4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#Prelude.IOError\n");
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
          if(scrutinee.n == RET.n)
          {
            backup4.n = make_restore(backup4.n);
            push_frame(backup4, free_var());
            push_choice(backup4, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_False_free());
            set_Prelude_True_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_True_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(backup4, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HTPrelude_DOIOError_(backup4, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#Prelude.IOError\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// putStr
void Prelude_putStr_hnf(field root)
{
  debug(LOW, "HNF putStr:\n");
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
            save(root, make_Prelude_putStr_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving putStr\n");
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
          push_choice(scrutinee, make_Prelude__CO_free());
          set_Prelude__LB_RB_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LB_RB_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_putStr_(v2, 0));
          }
          field v3;
          v3 = make_Prelude__LP_RP(0);
          set_Prelude_returnIO(root, v3, 0);
          Prelude_returnIO_hnf(root);
          debug(LOW, "leaving putStr\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_putStr_(v2, 0));
          }
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          v6 = make_Prelude_putChar(v4, 0);
          v7 = make_Prelude_putStr(v5, 0);
          v8 = make_Prelude__GT_GT_DL_DO_US_HTlambda283(v7, (field)(Node*)NULL, 1);
          set_Prelude__GT_GT_EQ_DL(root, v6, v8, 0);
          Prelude__GT_GT_EQ_DL_hnf(root);
          debug(LOW, "leaving putStr\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// putStr at []
void Prelude_putStr__hnf(field root)
{
  debug(LOW, "HNF putStr@[]\n");
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
            save(root, make_Prelude_putStr_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving putStr\n");
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
          push_choice(scrutinee, make_Prelude__CO_free());
          set_Prelude__LB_RB_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LB_RB_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_putStr_(v2, 0));
          }
          field v3;
          v3 = make_Prelude__LP_RP(0);
          set_Prelude_returnIO(root, v3, 0);
          Prelude_returnIO_hnf(root);
          debug(LOW, "leaving putStr\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_putStr_(v2, 0));
          }
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          v6 = make_Prelude_putChar(v4, 0);
          v7 = make_Prelude_putStr(v5, 0);
          v8 = make_Prelude__GT_GT_DL_DO_US_HTlambda283(v7, (field)(Node*)NULL, 1);
          set_Prelude__GT_GT_EQ_DL(root, v6, v8, 0);
          Prelude__GT_GT_EQ_DL_hnf(root);
          debug(LOW, "leaving putStr\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// putStr
Node* Prelude_putStr_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF putStr:\n");
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
            backup = save_RET(backup, make_Prelude_putStr_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving putStr\n");
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
          push_choice(scrutinee, make_Prelude__CO_free());
          set_Prelude__LB_RB_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LB_RB_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_putStr_(v2, 0));
          }
          field v3;
          v3 = make_Prelude__LP_RP(0);
          set_Prelude_returnIO(root, v3, 0);
          backup = Prelude_returnIO_RET_hnf(backup);
          debug(LOW, "leaving putStr\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_putStr_(v2, 0));
          }
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          v6 = make_Prelude_putChar(v4, 0);
          v7 = make_Prelude_putStr(v5, 0);
          v8 = make_Prelude__GT_GT_DL_DO_US_HTlambda283(v7, (field)(Node*)NULL, 1);
          set_Prelude__GT_GT_EQ_DL(root, v6, v8, 0);
          backup = Prelude__GT_GT_EQ_DL_RET_hnf(backup);
          debug(LOW, "leaving putStr\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// foldIO
void Prelude_foldIO_hnf(field root)
{
  debug(LOW, "HNF foldIO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            save(root, make_Prelude_foldIO_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving foldIO\n");
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
          push_choice(scrutinee, make_Prelude__CO_free());
          set_Prelude__LB_RB_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LB_RB_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldIO_(v2, v3, v4, 0));
          }
          set_Prelude_returnIO(root, v3, 0);
          Prelude_returnIO_hnf(root);
          debug(LOW, "leaving foldIO\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldIO_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          field v7;
          field v8;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v7 = make_apply2(v2, v3, v5);
          v8 = make_Prelude_foldIO_DO_US_HTlambda296(v6, v2, (field)(Node*)NULL, 1);
          set_Prelude__GT_GT_EQ_DL(root, v7, v8, 0);
          Prelude__GT_GT_EQ_DL_hnf(root);
          debug(LOW, "leaving foldIO\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// foldIO at []
void Prelude_foldIO__hnf(field root)
{
  debug(LOW, "HNF foldIO@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            save(root, make_Prelude_foldIO_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving foldIO\n");
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
          push_choice(scrutinee, make_Prelude__CO_free());
          set_Prelude__LB_RB_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LB_RB_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldIO_(v2, v3, v4, 0));
          }
          set_Prelude_returnIO(root, v3, 0);
          Prelude_returnIO_hnf(root);
          debug(LOW, "leaving foldIO\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldIO_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          field v7;
          field v8;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v7 = make_apply2(v2, v3, v5);
          v8 = make_Prelude_foldIO_DO_US_HTlambda296(v6, v2, (field)(Node*)NULL, 1);
          set_Prelude__GT_GT_EQ_DL(root, v7, v8, 0);
          Prelude__GT_GT_EQ_DL_hnf(root);
          debug(LOW, "leaving foldIO\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// foldIO
Node* Prelude_foldIO_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF foldIO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            backup = save_RET(backup, make_Prelude_foldIO_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving foldIO\n");
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
          push_choice(scrutinee, make_Prelude__CO_free());
          set_Prelude__LB_RB_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LB_RB_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_foldIO_(v2, v3, v4, 0));
          }
          set_Prelude_returnIO(root, v3, 0);
          backup = Prelude_returnIO_RET_hnf(backup);
          debug(LOW, "leaving foldIO\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_foldIO_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          field v7;
          field v8;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v7 = make_apply2(v2, v3, v5);
          v8 = make_Prelude_foldIO_DO_US_HTlambda296(v6, v2, (field)(Node*)NULL, 1);
          set_Prelude__GT_GT_EQ_DL(root, v7, v8, 0);
          backup = Prelude__GT_GT_EQ_DL_RET_hnf(backup);
          debug(LOW, "leaving foldIO\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// sequenceIO
void Prelude_sequenceIO_hnf(field root)
{
  debug(LOW, "HNF sequenceIO:\n");
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
            save(root, make_Prelude_sequenceIO_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving sequenceIO\n");
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
          push_choice(scrutinee, make_Prelude__CO_free());
          set_Prelude__LB_RB_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LB_RB_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_sequenceIO_(v2, 0));
          }
          field v3;
          v3 = make_Prelude__LB_RB(0);
          set_Prelude_returnIO(root, v3, 0);
          Prelude_returnIO_hnf(root);
          debug(LOW, "leaving sequenceIO\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_sequenceIO_(v2, 0));
          }
          field v4;
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          v6 = make_Prelude_sequenceIO_DO_US_HTlambda292(v5, (field)(Node*)NULL, 1);
          set_Prelude__GT_GT_EQ_DL(root, v4, v6, 0);
          Prelude__GT_GT_EQ_DL_hnf(root);
          debug(LOW, "leaving sequenceIO\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// sequenceIO at []
void Prelude_sequenceIO__hnf(field root)
{
  debug(LOW, "HNF sequenceIO@[]\n");
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
            save(root, make_Prelude_sequenceIO_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving sequenceIO\n");
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
          push_choice(scrutinee, make_Prelude__CO_free());
          set_Prelude__LB_RB_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LB_RB_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_sequenceIO_(v2, 0));
          }
          field v3;
          v3 = make_Prelude__LB_RB(0);
          set_Prelude_returnIO(root, v3, 0);
          Prelude_returnIO_hnf(root);
          debug(LOW, "leaving sequenceIO\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_sequenceIO_(v2, 0));
          }
          field v4;
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          v6 = make_Prelude_sequenceIO_DO_US_HTlambda292(v5, (field)(Node*)NULL, 1);
          set_Prelude__GT_GT_EQ_DL(root, v4, v6, 0);
          Prelude__GT_GT_EQ_DL_hnf(root);
          debug(LOW, "leaving sequenceIO\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// sequenceIO
Node* Prelude_sequenceIO_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF sequenceIO:\n");
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
            backup = save_RET(backup, make_Prelude_sequenceIO_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving sequenceIO\n");
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
          push_choice(scrutinee, make_Prelude__CO_free());
          set_Prelude__LB_RB_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LB_RB_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_sequenceIO_(v2, 0));
          }
          field v3;
          v3 = make_Prelude__LB_RB(0);
          set_Prelude_returnIO(root, v3, 0);
          backup = Prelude_returnIO_RET_hnf(backup);
          debug(LOW, "leaving sequenceIO\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_sequenceIO_(v2, 0));
          }
          field v4;
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          v6 = make_Prelude_sequenceIO_DO_US_HTlambda292(v5, (field)(Node*)NULL, 1);
          set_Prelude__GT_GT_EQ_DL(root, v4, v6, 0);
          backup = Prelude__GT_GT_EQ_DL_RET_hnf(backup);
          debug(LOW, "leaving sequenceIO\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// getLine._#lambda285
void Prelude_getLine_DO_US_HTlambda285_hnf(field root)
{
  debug(LOW, "HNF getLine._#lambda285:\n");
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
            save(root, make_Prelude_getLine_DO_US_HTlambda285_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving getLine._#lambda285\n");
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
        case _char_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_getLine_DO_US_HTlambda285_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.c == 10)
          {
            field v4;
            v4 = make_Prelude__LB_RB(0);
            set_Prelude_returnIO(root, v4, 0);
            Prelude_returnIO_hnf(root);
            debug(LOW, "leaving getLine._#lambda285\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v5;
            field v6;
            field v7;
            field v8;
            v5 = make_Prelude_getChar(0);
            v6 = make_Prelude_getLine_DO_US_HTlambda285((field)(Node*)NULL, 1);
            v7 = make_Prelude__GT_GT_EQ_DL(v5, v6, 0);
            v8 = make_Prelude_getLine_DO_US_HTlambda285_HTP20(v3, (field)(Node*)NULL, 1);
            set_Prelude__GT_GT_EQ_DL(root, v7, v8, 0);
            Prelude__GT_GT_EQ_DL_hnf(root);
            debug(LOW, "leaving getLine._#lambda285\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// getLine._#lambda285 at []
void Prelude_getLine_DO_US_HTlambda285__hnf(field root)
{
  debug(LOW, "HNF getLine._#lambda285@[]\n");
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
            save(root, make_Prelude_getLine_DO_US_HTlambda285_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving getLine._#lambda285\n");
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
        case _char_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_getLine_DO_US_HTlambda285_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.c == 10)
          {
            field v4;
            v4 = make_Prelude__LB_RB(0);
            set_Prelude_returnIO(root, v4, 0);
            Prelude_returnIO_hnf(root);
            debug(LOW, "leaving getLine._#lambda285\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v5;
            field v6;
            field v7;
            field v8;
            v5 = make_Prelude_getChar(0);
            v6 = make_Prelude_getLine_DO_US_HTlambda285((field)(Node*)NULL, 1);
            v7 = make_Prelude__GT_GT_EQ_DL(v5, v6, 0);
            v8 = make_Prelude_getLine_DO_US_HTlambda285_HTP20(v3, (field)(Node*)NULL, 1);
            set_Prelude__GT_GT_EQ_DL(root, v7, v8, 0);
            Prelude__GT_GT_EQ_DL_hnf(root);
            debug(LOW, "leaving getLine._#lambda285\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// getLine._#lambda285
Node* Prelude_getLine_DO_US_HTlambda285_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF getLine._#lambda285:\n");
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
            backup = save_RET(backup, make_Prelude_getLine_DO_US_HTlambda285_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving getLine._#lambda285\n");
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
        case _char_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_getLine_DO_US_HTlambda285_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.c == 10)
          {
            field v4;
            v4 = make_Prelude__LB_RB(0);
            set_Prelude_returnIO(root, v4, 0);
            backup = Prelude_returnIO_RET_hnf(backup);
            debug(LOW, "leaving getLine._#lambda285\n");
            debug_expr(LOW, root);
            return backup;
          }
          else
          {
            field v5;
            field v6;
            field v7;
            field v8;
            v5 = make_Prelude_getChar(0);
            v6 = make_Prelude_getLine_DO_US_HTlambda285((field)(Node*)NULL, 1);
            v7 = make_Prelude__GT_GT_EQ_DL(v5, v6, 0);
            v8 = make_Prelude_getLine_DO_US_HTlambda285_HTP20(v3, (field)(Node*)NULL, 1);
            set_Prelude__GT_GT_EQ_DL(root, v7, v8, 0);
            backup = Prelude__GT_GT_EQ_DL_RET_hnf(backup);
            debug(LOW, "leaving getLine._#lambda285\n");
            debug_expr(LOW, root);
            return backup;
          }
        }
      }
    }
  }
}

// getLine._#lambda285#P20
void Prelude_getLine_DO_US_HTlambda285_HTP20_hnf(field root)
{
  debug(LOW, "HNF getLine._#lambda285#P20:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make__char(v2.c, 0);
  v5 = make_Prelude__CO(v4, v3, 0);
  set_Prelude_returnIO(root, v5, 0);
  Prelude_returnIO_hnf(root);
  debug(LOW, "leaving getLine._#lambda285#P20\n");
  debug_expr(LOW, root);
  return;
}

// getLine._#lambda285#P20
Node* Prelude_getLine_DO_US_HTlambda285_HTP20_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF getLine._#lambda285#P20:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make__char(v2.c, 0);
  v5 = make_Prelude__CO(v4, v3, 0);
  set_Prelude_returnIO(root, v5, 0);
  backup = Prelude_returnIO_RET_hnf(backup);
  debug(LOW, "leaving getLine._#lambda285#P20\n");
  debug_expr(LOW, root);
  return backup;
}

// instance of Monad for IO
void Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOIO_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Monad#Prelude.IO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOIO((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v3 = make_Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOIO((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOIO((field)(Node*)NULL, 1);
  v5 = make_Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOIO((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTMonad(root, v2, v3, v4, v5, 0);
  debug(LOW, "leaving _inst#Prelude.Monad#Prelude.IO\n");
  debug_expr(LOW, root);
  return;
}

// instance of Monad for IO
Node* Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOIO_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Monad#Prelude.IO:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOIO((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v3 = make_Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOIO((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOIO((field)(Node*)NULL, 1);
  v5 = make_Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOIO((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTMonad(root, v2, v3, v4, v5, 0);
  debug(LOW, "leaving _inst#Prelude.Monad#Prelude.IO\n");
  debug_expr(LOW, root);
  return backup;
}

// instance of Monad for []
void Prelude__USinst_HTPrelude_DOMonad_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Monad#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v3 = make_Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HT_LB_RB((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HT_LB_RB((field)(Node*)NULL, 1);
  v5 = make_Prelude__USimpl_HTfail_HTPrelude_DOMonad_HT_LB_RB((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTMonad(root, v2, v3, v4, v5, 0);
  debug(LOW, "leaving _inst#Prelude.Monad#[]\n");
  debug_expr(LOW, root);
  return;
}

// instance of Monad for []
Node* Prelude__USinst_HTPrelude_DOMonad_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Monad#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HT_LB_RB((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v3 = make_Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HT_LB_RB((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HT_LB_RB((field)(Node*)NULL, 1);
  v5 = make_Prelude__USimpl_HTfail_HTPrelude_DOMonad_HT_LB_RB((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTMonad(root, v2, v3, v4, v5, 0);
  debug(LOW, "leaving _inst#Prelude.Monad#[]\n");
  debug_expr(LOW, root);
  return backup;
}

// instance of Monad for Maybe
void Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOMaybe_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Monad#Prelude.Maybe:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v3 = make_Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOMaybe((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOMaybe((field)(Node*)NULL, 1);
  v5 = make_Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOMaybe((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTMonad(root, v2, v3, v4, v5, 0);
  debug(LOW, "leaving _inst#Prelude.Monad#Prelude.Maybe\n");
  debug_expr(LOW, root);
  return;
}

// instance of Monad for Maybe
Node* Prelude__USinst_HTPrelude_DOMonad_HTPrelude_DOMaybe_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Monad#Prelude.Maybe:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = make_Prelude__USimpl_HT_GT_GT_EQ_HTPrelude_DOMonad_HTPrelude_DOMaybe((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v3 = make_Prelude__USimpl_HT_GT_GT_HTPrelude_DOMonad_HTPrelude_DOMaybe((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTreturn_HTPrelude_DOMonad_HTPrelude_DOMaybe((field)(Node*)NULL, 1);
  v5 = make_Prelude__USimpl_HTfail_HTPrelude_DOMonad_HTPrelude_DOMaybe((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTMonad(root, v2, v3, v4, v5, 0);
  debug(LOW, "leaving _inst#Prelude.Monad#Prelude.Maybe\n");
  debug_expr(LOW, root);
  return backup;
}

