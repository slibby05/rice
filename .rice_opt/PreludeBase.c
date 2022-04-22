#include "PreludeBase.h"
#include "debug.h"
#include "runtime.h"

// flip
void Prelude_flip_hnf(field root)
{
  debug(LOW, "HNF flip:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_apply2(root, v2, v4, v3);
  apply_hnf(root);
  debug(LOW, "leaving flip\n");
  debug_expr(LOW, root);
  return;
}

// flip
Node* Prelude_flip_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF flip:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_apply2(root, v2, v4, v3);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving flip\n");
  debug_expr(LOW, root);
  return backup;
}

// $
void Prelude__DL_hnf(field root)
{
  debug(LOW, "HNF $:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_apply1(root, v2, v3);
  apply_hnf(root);
  debug(LOW, "leaving $\n");
  debug_expr(LOW, root);
  return;
}

// $
Node* Prelude__DL_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF $:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_apply1(root, v2, v3);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving $\n");
  debug_expr(LOW, root);
  return backup;
}

// &&
void Prelude__AN_AN_hnf(field root)
{
  debug(LOW, "HNF &&:\n");
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
            save(root, make_Prelude__AN_AN_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving &&\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__AN_AN_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving &&\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__AN_AN_(v2, v3, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving &&\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// && at []
void Prelude__AN_AN__hnf(field root)
{
  debug(LOW, "HNF &&@[]\n");
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
            save(root, make_Prelude__AN_AN_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving &&\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__AN_AN_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving &&\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__AN_AN_(v2, v3, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving &&\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// && at [0]
void Prelude__AN_AN__0_hnf(field root)
{
  debug(LOW, "HNF &&@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving &&\n");
  debug_expr(LOW, root);
  return;
}

// &&
Node* Prelude__AN_AN_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF &&:\n");
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
            backup = save_RET(backup, make_Prelude__AN_AN_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving &&\n");
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
            backup = save_RET(backup, make_Prelude__AN_AN_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving &&\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__AN_AN_(v2, v3, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving &&\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// ||
void Prelude__OR_OR_hnf(field root)
{
  debug(LOW, "HNF ||:\n");
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
            save(root, make_Prelude__OR_OR_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving ||\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__OR_OR_(v2, v3, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving ||\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__OR_OR_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving ||\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// || at []
void Prelude__OR_OR__hnf(field root)
{
  debug(LOW, "HNF ||@[]\n");
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
            save(root, make_Prelude__OR_OR_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving ||\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__OR_OR_(v2, v3, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving ||\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__OR_OR_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving ||\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// || at [1]
void Prelude__OR_OR__1_hnf(field root)
{
  debug(LOW, "HNF ||@[1]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving ||\n");
  debug_expr(LOW, root);
  return;
}

// ||
Node* Prelude__OR_OR_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF ||:\n");
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
            backup = save_RET(backup, make_Prelude__OR_OR_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving ||\n");
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
            backup = save_RET(backup, make_Prelude__OR_OR_(v2, v3, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving ||\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__OR_OR_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving ||\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// not
void Prelude_not_hnf(field root)
{
  debug(LOW, "HNF not:\n");
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
            save(root, make_Prelude_not_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving not\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_not_(v2, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving not\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_not_(v2, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving not\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// not at []
void Prelude_not__hnf(field root)
{
  debug(LOW, "HNF not@[]\n");
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
            save(root, make_Prelude_not_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving not\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_not_(v2, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving not\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_not_(v2, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving not\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// not
Node* Prelude_not_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF not:\n");
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
            backup = save_RET(backup, make_Prelude_not_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving not\n");
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
            backup = save_RET(backup, make_Prelude_not_(v2, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving not\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_not_(v2, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving not\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// otherwise
void Prelude_otherwise_hnf(field root)
{
  debug(LOW, "HNF otherwise:\n");
  debug_expr(LOW, root);
  set_Prelude_True(root, 0);
  debug(LOW, "leaving otherwise\n");
  debug_expr(LOW, root);
  return;
}

// otherwise
Node* Prelude_otherwise_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF otherwise:\n");
  debug_expr(LOW, root);
  set_Prelude_True(root, 0);
  debug(LOW, "leaving otherwise\n");
  debug_expr(LOW, root);
  return backup;
}

// if_then_else
void Prelude_if_USthen_USelse_hnf(field root)
{
  debug(LOW, "HNF if_then_else:\n");
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
            save(root, make_Prelude_if_USthen_USelse_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving if_then_else\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_if_USthen_USelse_(v2, v3, v4, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving if_then_else\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_if_USthen_USelse_(v2, v3, v4, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving if_then_else\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// if_then_else at []
void Prelude_if_USthen_USelse__hnf(field root)
{
  debug(LOW, "HNF if_then_else@[]\n");
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
            save(root, make_Prelude_if_USthen_USelse_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving if_then_else\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_if_USthen_USelse_(v2, v3, v4, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving if_then_else\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_if_USthen_USelse_(v2, v3, v4, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving if_then_else\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// if_then_else at [0]
void Prelude_if_USthen_USelse__0_hnf(field root)
{
  debug(LOW, "HNF if_then_else@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving if_then_else\n");
  debug_expr(LOW, root);
  return;
}

// if_then_else at [1]
void Prelude_if_USthen_USelse__1_hnf(field root)
{
  debug(LOW, "HNF if_then_else@[1]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving if_then_else\n");
  debug_expr(LOW, root);
  return;
}

// if_then_else
Node* Prelude_if_USthen_USelse_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF if_then_else:\n");
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
            backup = save_RET(backup, make_Prelude_if_USthen_USelse_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving if_then_else\n");
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
            backup = save_RET(backup, make_Prelude_if_USthen_USelse_(v2, v3, v4, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving if_then_else\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_if_USthen_USelse_(v2, v3, v4, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving if_then_else\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// solve
void Prelude_solve_hnf(field root)
{
  debug(LOW, "HNF solve:\n");
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
            save(root, make_Prelude_solve_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving solve\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_solve_(v2, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving solve\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_solve_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving solve\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// solve at []
void Prelude_solve__hnf(field root)
{
  debug(LOW, "HNF solve@[]\n");
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
            save(root, make_Prelude_solve_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving solve\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_solve_(v2, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving solve\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_solve_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving solve\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// solve
Node* Prelude_solve_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF solve:\n");
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
            backup = save_RET(backup, make_Prelude_solve_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving solve\n");
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
            backup = save_RET(backup, make_Prelude_solve_(v2, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving solve\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_solve_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving solve\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// &>
void Prelude__AN_GT_hnf(field root)
{
  debug(LOW, "HNF &>:\n");
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
            save(root, make_Prelude__AN_GT_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving &>\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__AN_GT_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving &>\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__AN_GT_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving &>\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// &> at []
void Prelude__AN_GT__hnf(field root)
{
  debug(LOW, "HNF &>@[]\n");
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
            save(root, make_Prelude__AN_GT_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving &>\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__AN_GT_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving &>\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__AN_GT_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving &>\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// &> at [0]
void Prelude__AN_GT__0_hnf(field root)
{
  debug(LOW, "HNF &>@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving &>\n");
  debug_expr(LOW, root);
  return;
}

// &>
Node* Prelude__AN_GT_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF &>:\n");
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
            backup = save_RET(backup, make_Prelude__AN_GT_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving &>\n");
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
            backup = save_RET(backup, make_Prelude__AN_GT_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving &>\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__AN_GT_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving &>\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// fst
void Prelude_fst_hnf(field root)
{
  debug(LOW, "HNF fst:\n");
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
            save(root, make_Prelude_fst_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fst\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_fst_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v3);
          debug(LOW, "leaving fst\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// fst at []
void Prelude_fst__hnf(field root)
{
  debug(LOW, "HNF fst@[]\n");
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
            save(root, make_Prelude_fst_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fst\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_fst_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v3);
          debug(LOW, "leaving fst\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// fst at [0]
void Prelude_fst__0_hnf(field root)
{
  debug(LOW, "HNF fst@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving fst\n");
  debug_expr(LOW, root);
  return;
}

// fst
Node* Prelude_fst_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF fst:\n");
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
            backup = save_RET(backup, make_Prelude_fst_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fst\n");
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
            backup = save_RET(backup, make_Prelude_fst_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v3);
          debug(LOW, "leaving fst\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// snd
void Prelude_snd_hnf(field root)
{
  debug(LOW, "HNF snd:\n");
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
            save(root, make_Prelude_snd_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving snd\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_snd_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v4);
          debug(LOW, "leaving snd\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// snd at []
void Prelude_snd__hnf(field root)
{
  debug(LOW, "HNF snd@[]\n");
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
            save(root, make_Prelude_snd_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving snd\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_snd_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v4);
          debug(LOW, "leaving snd\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// snd at [0]
void Prelude_snd__0_hnf(field root)
{
  debug(LOW, "HNF snd@[0]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving snd\n");
  debug_expr(LOW, root);
  return;
}

// snd
Node* Prelude_snd_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF snd:\n");
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
            backup = save_RET(backup, make_Prelude_snd_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving snd\n");
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
            backup = save_RET(backup, make_Prelude_snd_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v4);
          debug(LOW, "leaving snd\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// head
void Prelude_head_hnf(field root)
{
  debug(LOW, "HNF head:\n");
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
            save(root, make_Prelude_head_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving head\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_head_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving head\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_head_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v3);
          debug(LOW, "leaving head\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// head at []
void Prelude_head__hnf(field root)
{
  debug(LOW, "HNF head@[]\n");
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
            save(root, make_Prelude_head_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving head\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_head_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving head\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_head_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v3);
          debug(LOW, "leaving head\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// head at [1]
void Prelude_head__1_hnf(field root)
{
  debug(LOW, "HNF head@[1]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving head\n");
  debug_expr(LOW, root);
  return;
}

// head
Node* Prelude_head_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF head:\n");
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
            backup = save_RET(backup, make_Prelude_head_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving head\n");
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
            backup = save_RET(backup, make_Prelude_head_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving head\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_head_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v3);
          debug(LOW, "leaving head\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// tail
void Prelude_tail_hnf(field root)
{
  debug(LOW, "HNF tail:\n");
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
            save(root, make_Prelude_tail_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving tail\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_tail_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving tail\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_tail_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v4);
          debug(LOW, "leaving tail\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// tail at []
void Prelude_tail__hnf(field root)
{
  debug(LOW, "HNF tail@[]\n");
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
            save(root, make_Prelude_tail_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving tail\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_tail_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving tail\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_tail_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v4);
          debug(LOW, "leaving tail\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// tail at [1]
void Prelude_tail__1_hnf(field root)
{
  debug(LOW, "HNF tail@[1]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving tail\n");
  debug_expr(LOW, root);
  return;
}

// tail
Node* Prelude_tail_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF tail:\n");
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
            backup = save_RET(backup, make_Prelude_tail_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving tail\n");
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
            backup = save_RET(backup, make_Prelude_tail_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving tail\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_tail_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v4);
          debug(LOW, "leaving tail\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// success
void Prelude_success_hnf(field root)
{
  debug(LOW, "HNF success:\n");
  debug_expr(LOW, root);
  set_Prelude_True(root, 0);
  debug(LOW, "leaving success\n");
  debug_expr(LOW, root);
  return;
}

// success
Node* Prelude_success_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF success:\n");
  debug_expr(LOW, root);
  set_Prelude_True(root, 0);
  debug(LOW, "leaving success\n");
  debug_expr(LOW, root);
  return backup;
}

// ?
void Prelude__QU_hnf(field root)
{
  debug(LOW, "HNF ?:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_choice(root, v2, v3);
  choice_hnf(root);
  debug(LOW, "leaving ?\n");
  debug_expr(LOW, root);
  return;
}

// ?
Node* Prelude__QU_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF ?:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_choice(root, v2, v3);
  backup = choice_RET_hnf(backup);
  debug(LOW, "leaving ?\n");
  debug_expr(LOW, root);
  return backup;
}

// unknown
void Prelude_unknown_hnf(field root)
{
  debug(LOW, "HNF unknown:\n");
  debug_expr(LOW, root);
  field v2 = free_var();
  set_forward(root, v2);
  debug(LOW, "leaving unknown\n");
  debug_expr(LOW, root);
  return;
}

// unknown at []
void Prelude_unknown__hnf(field root)
{
  debug(LOW, "HNF unknown@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving unknown\n");
  debug_expr(LOW, root);
  return;
}

// unknown
Node* Prelude_unknown_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF unknown:\n");
  debug_expr(LOW, root);
  field v2 = free_var();
  set_forward(root, v2);
  debug(LOW, "leaving unknown\n");
  debug_expr(LOW, root);
  return backup;
}

// PEVAL
void Prelude_PEVAL_hnf(field root)
{
  debug(LOW, "HNF PEVAL:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving PEVAL\n");
  debug_expr(LOW, root);
  return;
}

// PEVAL at []
void Prelude_PEVAL__hnf(field root)
{
  debug(LOW, "HNF PEVAL@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving PEVAL\n");
  debug_expr(LOW, root);
  return;
}

// PEVAL
Node* Prelude_PEVAL_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF PEVAL:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving PEVAL\n");
  debug_expr(LOW, root);
  return backup;
}

// &
void Prelude__AN_hnf(field root)
{
  debug(LOW, "HNF &:\n");
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
            save(root, make_Prelude__AN_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving &\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__AN_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving &\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__AN_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving &\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// & at []
void Prelude__AN__hnf(field root)
{
  debug(LOW, "HNF &@[]\n");
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
            save(root, make_Prelude__AN_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving &\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__AN_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving &\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__AN_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving &\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// & at [0]
void Prelude__AN__0_hnf(field root)
{
  debug(LOW, "HNF &@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving &\n");
  debug_expr(LOW, root);
  return;
}

// &
Node* Prelude__AN_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF &:\n");
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
            backup = save_RET(backup, make_Prelude__AN_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving &\n");
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
            backup = save_RET(backup, make_Prelude__AN_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving &\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__AN_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving &\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// eqChar
void Prelude_eqChar_hnf(field root)
{
  debug(LOW, "HNF eqChar:\n");
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
            save(root, make_Prelude_eqChar_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving eqChar\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_eqChar_(v2, v3, 0));
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
                    save(root, make_Prelude_eqChar__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving eqChar\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_eqChar__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.c == v5.c)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving eqChar\n");
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

// eqChar at []
void Prelude_eqChar__hnf(field root)
{
  debug(LOW, "HNF eqChar@[]\n");
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
            save(root, make_Prelude_eqChar_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving eqChar\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_eqChar_(v2, v3, 0));
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
                    save(root, make_Prelude_eqChar__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving eqChar\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_eqChar__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.c == v5.c)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving eqChar\n");
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

// eqChar at [0]
void Prelude_eqChar__0_hnf(field root)
{
  debug(LOW, "HNF eqChar@[0]\n");
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
            save(root, make_Prelude_eqChar__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving eqChar\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_eqChar__0(v3, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          if(v4.c == v5.c)
          {
            set_Prelude_True(root, 0);
          }
          else
          {
            set_Prelude_False(root, 0);
          }
          debug(LOW, "leaving eqChar\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// eqChar
Node* Prelude_eqChar_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF eqChar:\n");
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
            backup = save_RET(backup, make_Prelude_eqChar_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving eqChar\n");
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
            backup = save_RET(backup, make_Prelude_eqChar_(v2, v3, 0));
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
                    backup = save_RET(backup, make_Prelude_eqChar__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving eqChar\n");
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
                    backup = save_RET(backup, make_Prelude_eqChar__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.c == v5.c)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving eqChar\n");
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

// eqInt
void Prelude_eqInt_hnf(field root)
{
  debug(LOW, "HNF eqInt:\n");
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
            save(root, make_Prelude_eqInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving eqInt\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_eqInt_(v2, v3, 0));
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
                    save(root, make_Prelude_eqInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving eqInt\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_eqInt__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.i == v5.i)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving eqInt\n");
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

// eqInt at []
void Prelude_eqInt__hnf(field root)
{
  debug(LOW, "HNF eqInt@[]\n");
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
            save(root, make_Prelude_eqInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving eqInt\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_eqInt_(v2, v3, 0));
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
                    save(root, make_Prelude_eqInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving eqInt\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_eqInt__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.i == v5.i)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving eqInt\n");
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

// eqInt at [0]
void Prelude_eqInt__0_hnf(field root)
{
  debug(LOW, "HNF eqInt@[0]\n");
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
            save(root, make_Prelude_eqInt__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving eqInt\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_eqInt__0(v3, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          if(v4.i == v5.i)
          {
            set_Prelude_True(root, 0);
          }
          else
          {
            set_Prelude_False(root, 0);
          }
          debug(LOW, "leaving eqInt\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// eqInt
Node* Prelude_eqInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF eqInt:\n");
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
            backup = save_RET(backup, make_Prelude_eqInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving eqInt\n");
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
            backup = save_RET(backup, make_Prelude_eqInt_(v2, v3, 0));
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
                    backup = save_RET(backup, make_Prelude_eqInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving eqInt\n");
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
                    backup = save_RET(backup, make_Prelude_eqInt__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.i == v5.i)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving eqInt\n");
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

// eqFloat
void Prelude_eqFloat_hnf(field root)
{
  debug(LOW, "HNF eqFloat:\n");
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
            save(root, make_Prelude_eqFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving eqFloat\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_eqFloat_(v2, v3, 0));
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
                    save(root, make_Prelude_eqFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving eqFloat\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_eqFloat__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.f == v5.f)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving eqFloat\n");
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

// eqFloat at []
void Prelude_eqFloat__hnf(field root)
{
  debug(LOW, "HNF eqFloat@[]\n");
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
            save(root, make_Prelude_eqFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving eqFloat\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_eqFloat_(v2, v3, 0));
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
                    save(root, make_Prelude_eqFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving eqFloat\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_eqFloat__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.f == v5.f)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving eqFloat\n");
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

// eqFloat at [0]
void Prelude_eqFloat__0_hnf(field root)
{
  debug(LOW, "HNF eqFloat@[0]\n");
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
            save(root, make_Prelude_eqFloat__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving eqFloat\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_eqFloat__0(v3, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          if(v4.f == v5.f)
          {
            set_Prelude_True(root, 0);
          }
          else
          {
            set_Prelude_False(root, 0);
          }
          debug(LOW, "leaving eqFloat\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// eqFloat
Node* Prelude_eqFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF eqFloat:\n");
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
            backup = save_RET(backup, make_Prelude_eqFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving eqFloat\n");
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
            backup = save_RET(backup, make_Prelude_eqFloat_(v2, v3, 0));
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
                    backup = save_RET(backup, make_Prelude_eqFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving eqFloat\n");
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
                    backup = save_RET(backup, make_Prelude_eqFloat__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.f == v5.f)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving eqFloat\n");
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

// ltEqChar
void Prelude_ltEqChar_hnf(field root)
{
  debug(LOW, "HNF ltEqChar:\n");
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
            save(root, make_Prelude_ltEqChar_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving ltEqChar\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_ltEqChar_(v2, v3, 0));
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
                    save(root, make_Prelude_ltEqChar__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving ltEqChar\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_ltEqChar__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.c <= v5.c)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving ltEqChar\n");
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

// ltEqChar at []
void Prelude_ltEqChar__hnf(field root)
{
  debug(LOW, "HNF ltEqChar@[]\n");
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
            save(root, make_Prelude_ltEqChar_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving ltEqChar\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_ltEqChar_(v2, v3, 0));
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
                    save(root, make_Prelude_ltEqChar__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving ltEqChar\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_ltEqChar__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.c <= v5.c)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving ltEqChar\n");
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

// ltEqChar at [0]
void Prelude_ltEqChar__0_hnf(field root)
{
  debug(LOW, "HNF ltEqChar@[0]\n");
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
            save(root, make_Prelude_ltEqChar__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving ltEqChar\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_ltEqChar__0(v3, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          if(v4.c <= v5.c)
          {
            set_Prelude_True(root, 0);
          }
          else
          {
            set_Prelude_False(root, 0);
          }
          debug(LOW, "leaving ltEqChar\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// ltEqChar
Node* Prelude_ltEqChar_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF ltEqChar:\n");
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
            backup = save_RET(backup, make_Prelude_ltEqChar_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving ltEqChar\n");
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
            backup = save_RET(backup, make_Prelude_ltEqChar_(v2, v3, 0));
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
                    backup = save_RET(backup, make_Prelude_ltEqChar__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving ltEqChar\n");
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
                    backup = save_RET(backup, make_Prelude_ltEqChar__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.c <= v5.c)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving ltEqChar\n");
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

// ltEqInt
void Prelude_ltEqInt_hnf(field root)
{
  debug(LOW, "HNF ltEqInt:\n");
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
            save(root, make_Prelude_ltEqInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving ltEqInt\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_ltEqInt_(v2, v3, 0));
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
                    save(root, make_Prelude_ltEqInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving ltEqInt\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_ltEqInt__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.i <= v5.i)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving ltEqInt\n");
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

// ltEqInt at []
void Prelude_ltEqInt__hnf(field root)
{
  debug(LOW, "HNF ltEqInt@[]\n");
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
            save(root, make_Prelude_ltEqInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving ltEqInt\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_ltEqInt_(v2, v3, 0));
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
                    save(root, make_Prelude_ltEqInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving ltEqInt\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_ltEqInt__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.i <= v5.i)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving ltEqInt\n");
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

// ltEqInt at [0]
void Prelude_ltEqInt__0_hnf(field root)
{
  debug(LOW, "HNF ltEqInt@[0]\n");
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
            save(root, make_Prelude_ltEqInt__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving ltEqInt\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_ltEqInt__0(v3, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          if(v4.i <= v5.i)
          {
            set_Prelude_True(root, 0);
          }
          else
          {
            set_Prelude_False(root, 0);
          }
          debug(LOW, "leaving ltEqInt\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// ltEqInt
Node* Prelude_ltEqInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF ltEqInt:\n");
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
            backup = save_RET(backup, make_Prelude_ltEqInt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving ltEqInt\n");
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
            backup = save_RET(backup, make_Prelude_ltEqInt_(v2, v3, 0));
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
                    backup = save_RET(backup, make_Prelude_ltEqInt__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving ltEqInt\n");
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
                    backup = save_RET(backup, make_Prelude_ltEqInt__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.i <= v5.i)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving ltEqInt\n");
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

// ltEqFloat
void Prelude_ltEqFloat_hnf(field root)
{
  debug(LOW, "HNF ltEqFloat:\n");
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
            save(root, make_Prelude_ltEqFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving ltEqFloat\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_ltEqFloat_(v2, v3, 0));
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
                    save(root, make_Prelude_ltEqFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving ltEqFloat\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_ltEqFloat__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.f <= v5.f)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving ltEqFloat\n");
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

// ltEqFloat at []
void Prelude_ltEqFloat__hnf(field root)
{
  debug(LOW, "HNF ltEqFloat@[]\n");
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
            save(root, make_Prelude_ltEqFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving ltEqFloat\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_ltEqFloat_(v2, v3, 0));
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
                    save(root, make_Prelude_ltEqFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving ltEqFloat\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_ltEqFloat__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.f <= v5.f)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving ltEqFloat\n");
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

// ltEqFloat at [0]
void Prelude_ltEqFloat__0_hnf(field root)
{
  debug(LOW, "HNF ltEqFloat@[0]\n");
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
            save(root, make_Prelude_ltEqFloat__0(v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving ltEqFloat\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_ltEqFloat__0(v3, v4, 0));
          }
          field v5;
          v5 = child_at(scrutinee, 0);
          if(v4.f <= v5.f)
          {
            set_Prelude_True(root, 0);
          }
          else
          {
            set_Prelude_False(root, 0);
          }
          debug(LOW, "leaving ltEqFloat\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// ltEqFloat
Node* Prelude_ltEqFloat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF ltEqFloat:\n");
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
            backup = save_RET(backup, make_Prelude_ltEqFloat_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving ltEqFloat\n");
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
            backup = save_RET(backup, make_Prelude_ltEqFloat_(v2, v3, 0));
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
                    backup = save_RET(backup, make_Prelude_ltEqFloat__0(v3, v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving ltEqFloat\n");
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
                    backup = save_RET(backup, make_Prelude_ltEqFloat__0(v3, v4, 0));
                  }
                  field v5;
                  v5 = child_at(scrutinee, 0);
                  if(v4.f <= v5.f)
                  {
                    set_Prelude_True(root, 0);
                  }
                  else
                  {
                    set_Prelude_False(root, 0);
                  }
                  debug(LOW, "leaving ltEqFloat\n");
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

// ord
void Prelude_ord_hnf(field root)
{
  debug(LOW, "HNF ord:\n");
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
            save(root, make_Prelude_ord_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving ord\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_ord_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.c);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving ord\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// ord at []
void Prelude_ord__hnf(field root)
{
  debug(LOW, "HNF ord@[]\n");
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
            save(root, make_Prelude_ord_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving ord\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_ord_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.c);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving ord\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// ord
Node* Prelude_ord_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF ord:\n");
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
            backup = save_RET(backup, make_Prelude_ord_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving ord\n");
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
            backup = save_RET(backup, make_Prelude_ord_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.c);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving ord\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// chr
void Prelude_chr_hnf(field root)
{
  debug(LOW, "HNF chr:\n");
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
            save(root, make_Prelude_chr_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving chr\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_chr_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(unsigned long)(v3.i);
          set__char(root, v4.c, 0);
          debug(LOW, "leaving chr\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// chr at []
void Prelude_chr__hnf(field root)
{
  debug(LOW, "HNF chr@[]\n");
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
            save(root, make_Prelude_chr_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving chr\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_chr_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(unsigned long)(v3.i);
          set__char(root, v4.c, 0);
          debug(LOW, "leaving chr\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// chr
Node* Prelude_chr_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF chr:\n");
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
            backup = save_RET(backup, make_Prelude_chr_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving chr\n");
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
            backup = save_RET(backup, make_Prelude_chr_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(unsigned long)(v3.i);
          set__char(root, v4.c, 0);
          debug(LOW, "leaving chr\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// cond
void Prelude_cond_hnf(field root)
{
  debug(LOW, "HNF cond:\n");
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
            save(root, make_Prelude_cond_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving cond\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_cond_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving cond\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_cond_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving cond\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// cond at []
void Prelude_cond__hnf(field root)
{
  debug(LOW, "HNF cond@[]\n");
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
            save(root, make_Prelude_cond_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving cond\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_cond_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving cond\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_cond_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving cond\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// cond at [0]
void Prelude_cond__0_hnf(field root)
{
  debug(LOW, "HNF cond@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving cond\n");
  debug_expr(LOW, root);
  return;
}

// cond
Node* Prelude_cond_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF cond:\n");
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
            backup = save_RET(backup, make_Prelude_cond_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving cond\n");
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
            backup = save_RET(backup, make_Prelude_cond_(v2, v3, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving cond\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_cond_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving cond\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// build
void Prelude_build_hnf(field root)
{
  debug(LOW, "HNF build:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude__CO((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__LB_RB(0);
  set_apply2(root, v2, v3, v4);
  apply_hnf(root);
  debug(LOW, "leaving build\n");
  debug_expr(LOW, root);
  return;
}

// build
Node* Prelude_build_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF build:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude__CO((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__LB_RB(0);
  set_apply2(root, v2, v3, v4);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving build\n");
  debug_expr(LOW, root);
  return backup;
}

// mk_build
void Prelude_mk_USbuild_hnf(field root)
{
  debug(LOW, "HNF mk_build:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
  v2 = child_at(root, 4);
  v7 = make_apply1(v3, v5);
  v8 = make_apply1(v4, v6);
  set_apply2(root, v2, v7, v8);
  apply_hnf(root);
  debug(LOW, "leaving mk_build\n");
  debug_expr(LOW, root);
  return;
}

// mk_build
Node* Prelude_mk_USbuild_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF mk_build:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
  v2 = child_at(root, 4);
  v7 = make_apply1(v3, v5);
  v8 = make_apply1(v4, v6);
  set_apply2(root, v2, v7, v8);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving mk_build\n");
  debug_expr(LOW, root);
  return backup;
}

// putChar
void Prelude_putChar_hnf(field root)
{
  debug(LOW, "HNF putChar:\n");
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
            save(root, make_Prelude_putChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving putChar\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_putChar_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          set_Prelude_prim_USputChar(root, v3, 0);
          Prelude_prim_USputChar_hnf(root);
          debug(LOW, "leaving putChar\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// putChar at []
void Prelude_putChar__hnf(field root)
{
  debug(LOW, "HNF putChar@[]\n");
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
            save(root, make_Prelude_putChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving putChar\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_putChar_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          set_Prelude_prim_USputChar(root, v3, 0);
          Prelude_prim_USputChar_hnf(root);
          debug(LOW, "leaving putChar\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// putChar
Node* Prelude_putChar_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF putChar:\n");
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
            backup = save_RET(backup, make_Prelude_putChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving putChar\n");
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
            backup = save_RET(backup, make_Prelude_putChar_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          set_Prelude_prim_USputChar(root, v3, 0);
          backup = Prelude_prim_USputChar_RET_hnf(backup);
          debug(LOW, "leaving putChar\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// build_fold
void Prelude_build_USfold_hnf(field root)
{
  debug(LOW, "HNF build_fold:\n");
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
  v5 = make_Prelude__CO((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_apply1(v2, v5);
  v7 = make_Prelude__LB_RB(0);
  v8 = make_apply1(v3, v7);
  set_Prelude_foldr(root, v6, v8, v4, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving build_fold\n");
  debug_expr(LOW, root);
  return;
}

// build_fold
Node* Prelude_build_USfold_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF build_fold:\n");
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
  v5 = make_Prelude__CO((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_apply1(v2, v5);
  v7 = make_Prelude__LB_RB(0);
  v8 = make_apply1(v3, v7);
  set_Prelude_foldr(root, v6, v8, v4, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving build_fold\n");
  debug_expr(LOW, root);
  return backup;
}

// appendFile
void Prelude_appendFile_hnf(field root)
{
  debug(LOW, "HNF appendFile:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_prim_USappendFile((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__DL_HT_HT(v4, v2, 0);
  set_apply1(root, v5, v3);
  apply_hnf(root);
  debug(LOW, "leaving appendFile\n");
  debug_expr(LOW, root);
  return;
}

// appendFile
Node* Prelude_appendFile_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF appendFile:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_prim_USappendFile((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__DL_HT_HT(v4, v2, 0);
  set_apply1(root, v5, v3);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving appendFile\n");
  debug_expr(LOW, root);
  return backup;
}

// writeFile
void Prelude_writeFile_hnf(field root)
{
  debug(LOW, "HNF writeFile:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_prim_USwriteFile((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__DL_HT_HT(v4, v2, 0);
  set_apply1(root, v5, v3);
  apply_hnf(root);
  debug(LOW, "leaving writeFile\n");
  debug_expr(LOW, root);
  return;
}

// writeFile
Node* Prelude_writeFile_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF writeFile:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_prim_USwriteFile((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__DL_HT_HT(v4, v2, 0);
  set_apply1(root, v5, v3);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving writeFile\n");
  debug_expr(LOW, root);
  return backup;
}

// readFile
void Prelude_readFile_hnf(field root)
{
  debug(LOW, "HNF readFile:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USreadFile((field)(Node*)NULL, 1);
  set_Prelude__DL_HT_HT(root, v3, v2, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving readFile\n");
  debug_expr(LOW, root);
  return;
}

// readFile
Node* Prelude_readFile_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF readFile:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USreadFile((field)(Node*)NULL, 1);
  set_Prelude__DL_HT_HT(root, v3, v2, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving readFile\n");
  debug_expr(LOW, root);
  return backup;
}

// error
void Prelude_error_hnf(field root)
{
  debug(LOW, "HNF error:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  set_Prelude__DL_HT_HT(root, v3, v2, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving error\n");
  debug_expr(LOW, root);
  return;
}

// error
Node* Prelude_error_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF error:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  set_Prelude__DL_HT_HT(root, v3, v2, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving error\n");
  debug_expr(LOW, root);
  return backup;
}

// $#
void Prelude__DL_HT_hnf(field root)
{
  debug(LOW, "HNF $#:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_ensureNotFree(v3, 0);
  set_Prelude__DL_EX(root, v2, v4, 0);
  Prelude__DL_EX_hnf(root);
  debug(LOW, "leaving $#\n");
  debug_expr(LOW, root);
  return;
}

// $#
Node* Prelude__DL_HT_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF $#:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_ensureNotFree(v3, 0);
  set_Prelude__DL_EX(root, v2, v4, 0);
  backup = Prelude__DL_EX_RET_hnf(backup);
  debug(LOW, "leaving $#\n");
  debug_expr(LOW, root);
  return backup;
}

// ensureSpine
void Prelude_ensureSpine_hnf(field root)
{
  debug(LOW, "HNF ensureSpine:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude_ensureNotFree(v2, 0);
  set_Prelude_ensureSpine_DOensureList_DO20(root, v3, 0);
  Prelude_ensureSpine_DOensureList_DO20_hnf(root);
  debug(LOW, "leaving ensureSpine\n");
  debug_expr(LOW, root);
  return;
}

// ensureSpine
Node* Prelude_ensureSpine_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF ensureSpine:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude_ensureNotFree(v2, 0);
  set_Prelude_ensureSpine_DOensureList_DO20(root, v3, 0);
  backup = Prelude_ensureSpine_DOensureList_DO20_RET_hnf(backup);
  debug(LOW, "leaving ensureSpine\n");
  debug_expr(LOW, root);
  return backup;
}

// const
void Prelude_const_hnf(field root)
{
  debug(LOW, "HNF const:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_forward(root, v2);
  debug(LOW, "leaving const\n");
  debug_expr(LOW, root);
  return;
}

// const at []
void Prelude_const__hnf(field root)
{
  debug(LOW, "HNF const@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving const\n");
  debug_expr(LOW, root);
  return;
}

// const
Node* Prelude_const_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF const:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_forward(root, v2);
  debug(LOW, "leaving const\n");
  debug_expr(LOW, root);
  return backup;
}

// asTypeOf
void Prelude_asTypeOf_hnf(field root)
{
  debug(LOW, "HNF asTypeOf:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_forward(root, v2);
  debug(LOW, "leaving asTypeOf\n");
  debug_expr(LOW, root);
  return;
}

// asTypeOf at []
void Prelude_asTypeOf__hnf(field root)
{
  debug(LOW, "HNF asTypeOf@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving asTypeOf\n");
  debug_expr(LOW, root);
  return;
}

// asTypeOf
Node* Prelude_asTypeOf_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF asTypeOf:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_forward(root, v2);
  debug(LOW, "leaving asTypeOf\n");
  debug_expr(LOW, root);
  return backup;
}

// seq
void Prelude_seq_hnf(field root)
{
  debug(LOW, "HNF seq:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_const(v3, (field)(Node*)NULL, 1);
  set_Prelude__DL_EX(root, v4, v2, 0);
  Prelude__DL_EX_hnf(root);
  debug(LOW, "leaving seq\n");
  debug_expr(LOW, root);
  return;
}

// seq
Node* Prelude_seq_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF seq:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_const(v3, (field)(Node*)NULL, 1);
  set_Prelude__DL_EX(root, v4, v2, 0);
  backup = Prelude__DL_EX_RET_hnf(backup);
  debug(LOW, "leaving seq\n");
  debug_expr(LOW, root);
  return backup;
}

// id
void Prelude_id_hnf(field root)
{
  debug(LOW, "HNF id:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving id\n");
  debug_expr(LOW, root);
  return;
}

// id at []
void Prelude_id__hnf(field root)
{
  debug(LOW, "HNF id@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving id\n");
  debug_expr(LOW, root);
  return;
}

// id
Node* Prelude_id_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF id:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving id\n");
  debug_expr(LOW, root);
  return backup;
}

// groundNormalForm
void Prelude_groundNormalForm_hnf(field root)
{
  debug(LOW, "HNF groundNormalForm:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude_id((field)(Node*)NULL, 1);
  set_Prelude__DL_HT_HT(root, v3, v2, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving groundNormalForm\n");
  debug_expr(LOW, root);
  return;
}

// groundNormalForm
Node* Prelude_groundNormalForm_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF groundNormalForm:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude_id((field)(Node*)NULL, 1);
  set_Prelude__DL_HT_HT(root, v3, v2, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving groundNormalForm\n");
  debug_expr(LOW, root);
  return backup;
}

// normalForm
void Prelude_normalForm_hnf(field root)
{
  debug(LOW, "HNF normalForm:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude_id((field)(Node*)NULL, 1);
  set_Prelude__DL_EX_EX(root, v3, v2, 0);
  Prelude__DL_EX_EX_hnf(root);
  debug(LOW, "leaving normalForm\n");
  debug_expr(LOW, root);
  return;
}

// normalForm
Node* Prelude_normalForm_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF normalForm:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude_id((field)(Node*)NULL, 1);
  set_Prelude__DL_EX_EX(root, v3, v2, 0);
  backup = Prelude__DL_EX_EX_RET_hnf(backup);
  debug(LOW, "leaving normalForm\n");
  debug_expr(LOW, root);
  return backup;
}

// .
void Prelude__DO_hnf(field root)
{
  debug(LOW, "HNF .:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v3, v4);
  set_apply1(root, v2, v5);
  apply_hnf(root);
  debug(LOW, "leaving .\n");
  debug_expr(LOW, root);
  return;
}

// .
Node* Prelude__DO_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF .:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v3, v4);
  set_apply1(root, v2, v5);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving .\n");
  debug_expr(LOW, root);
  return backup;
}

// foldr
void Prelude_foldr_hnf(field root)
{
  debug(LOW, "HNF foldr:\n");
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
            save(root, make_Prelude_foldr_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving foldr\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_foldr_(v2, v3, v4, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving foldr\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldr_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          field v7;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v7 = make_Prelude_foldr(v2, v3, v6, 0);
          set_apply2(root, v2, v5, v7);
          apply_hnf(root);
          debug(LOW, "leaving foldr\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// foldr at []
void Prelude_foldr__hnf(field root)
{
  debug(LOW, "HNF foldr@[]\n");
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
            save(root, make_Prelude_foldr_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving foldr\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_foldr_(v2, v3, v4, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving foldr\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldr_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          field v7;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v7 = make_Prelude_foldr(v2, v3, v6, 0);
          set_apply2(root, v2, v5, v7);
          apply_hnf(root);
          debug(LOW, "leaving foldr\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// foldr at [0]
void Prelude_foldr__0_hnf(field root)
{
  debug(LOW, "HNF foldr@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving foldr\n");
  debug_expr(LOW, root);
  return;
}

// foldr
Node* Prelude_foldr_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF foldr:\n");
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
            backup = save_RET(backup, make_Prelude_foldr_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving foldr\n");
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
            backup = save_RET(backup, make_Prelude_foldr_(v2, v3, v4, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving foldr\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_foldr_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          field v7;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v7 = make_Prelude_foldr(v2, v3, v6, 0);
          set_apply2(root, v2, v5, v7);
          backup = apply_RET_hnf(backup);
          debug(LOW, "leaving foldr\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// ensureSpine.ensureList.20
void Prelude_ensureSpine_DOensureList_DO20_hnf(field root)
{
  debug(LOW, "HNF ensureSpine.ensureList.20:\n");
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
            save(root, make_Prelude_ensureSpine_DOensureList_DO20_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving ensureSpine.ensureList.20\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_ensureSpine_DOensureList_DO20_(v2, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving ensureSpine.ensureList.20\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_ensureSpine_DOensureList_DO20_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          v5 = make_Prelude_ensureNotFree(v4, 0);
          v6 = make_Prelude_ensureSpine_DOensureList_DO20(v5, 0);
          set_Prelude__CO(root, v3, v6, 0);
          debug(LOW, "leaving ensureSpine.ensureList.20\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// ensureSpine.ensureList.20 at []
void Prelude_ensureSpine_DOensureList_DO20__hnf(field root)
{
  debug(LOW, "HNF ensureSpine.ensureList.20@[]\n");
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
            save(root, make_Prelude_ensureSpine_DOensureList_DO20_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving ensureSpine.ensureList.20\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_ensureSpine_DOensureList_DO20_(v2, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving ensureSpine.ensureList.20\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_ensureSpine_DOensureList_DO20_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          v5 = make_Prelude_ensureNotFree(v4, 0);
          v6 = make_Prelude_ensureSpine_DOensureList_DO20(v5, 0);
          set_Prelude__CO(root, v3, v6, 0);
          debug(LOW, "leaving ensureSpine.ensureList.20\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// ensureSpine.ensureList.20
Node* Prelude_ensureSpine_DOensureList_DO20_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF ensureSpine.ensureList.20:\n");
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
            backup = save_RET(backup, make_Prelude_ensureSpine_DOensureList_DO20_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving ensureSpine.ensureList.20\n");
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
            backup = save_RET(backup, make_Prelude_ensureSpine_DOensureList_DO20_(v2, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving ensureSpine.ensureList.20\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_ensureSpine_DOensureList_DO20_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          v5 = make_Prelude_ensureNotFree(v4, 0);
          v6 = make_Prelude_ensureSpine_DOensureList_DO20(v5, 0);
          set_Prelude__CO(root, v3, v6, 0);
          debug(LOW, "leaving ensureSpine.ensureList.20\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// until
void Prelude_until_hnf(field root)
{
  debug(LOW, "HNF until:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v2, v4);
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
            save(root, make_Prelude_until_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving until\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_until_(v2, v3, v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving until\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_until_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = make_apply1(v3, v4);
          set_Prelude_until(root, v2, v3, v6, 0);
          Prelude_until_hnf(root);
          debug(LOW, "leaving until\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// until at []
void Prelude_until__hnf(field root)
{
  debug(LOW, "HNF until@[]\n");
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
            save(root, make_Prelude_until_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving until\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_until_(v2, v3, v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving until\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_until_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = make_apply1(v3, v4);
          set_Prelude_until(root, v2, v3, v6, 0);
          Prelude_until_hnf(root);
          debug(LOW, "leaving until\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// until at [0]
void Prelude_until__0_hnf(field root)
{
  debug(LOW, "HNF until@[0]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving until\n");
  debug_expr(LOW, root);
  return;
}

// until
Node* Prelude_until_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF until:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v2, v4);
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
            backup = save_RET(backup, make_Prelude_until_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving until\n");
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
            backup = save_RET(backup, make_Prelude_until_(v2, v3, v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving until\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_until_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = make_apply1(v3, v4);
          set_Prelude_until(root, v2, v3, v6, 0);
          backup = Prelude_until_RET_hnf(backup);
          debug(LOW, "leaving until\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

