#include "PreludeList.h"
#include "debug.h"
#include "runtime.h"
#include "PreludeBase.h"
#include "PreludeCompare.h"
#include "PreludeNum.h"

// enumFromThenTo_build
void Prelude_enumFromThenTo_USbuild_hnf(field root)
{
  debug(LOW, "HNF enumFromThenTo_build:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
  v2 = child_at(root, 4);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_enumFromThenTo_USbuild_(v2, v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromThenTo_build\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_enumFromThenTo_USbuild_(v2, v3, v4, v5, v6, 0));
          }
          field v7;
          v7 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude_enumFromThenTo_USbuild__0(v3, v4, v5, v6, v7, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving enumFromThenTo_build\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude_enumFromThenTo_USbuild__0(v3, v4, v5, v6, v7, 0));
                  }
                  field v8;
                  v8 = child_at(scrutinee, 0);
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
                            save(root, make_Prelude_enumFromThenTo_USbuild__0_0(v4, v5, v6, v7, v8, 0));
                          }
                          fail(root);
                          debug(LOW, "leaving enumFromThenTo_build\n");
                          debug_expr(LOW, root);
                          return;
                        }
                        case FUNCTION_TAG:
                        {
                          HNF(scrutinee);
                          break;
                        }
                        case CHOICE_TAG:
                        {
                          choose(scrutinee);
                          break;
                        }
                        case FORWARD_TAG:
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
                            save(root, make_Prelude_enumFromThenTo_USbuild__0_0(v4, v5, v6, v7, v8, 0));
                          }
                          field v9;
                          v9 = child_at(scrutinee, 0);
                          set_Prelude_enumFromThenTo_USbuild_HTworker(root, v5, v6, v7, v8, v9, 0);
                          Prelude_enumFromThenTo_USbuild_HTworker_hnf(root);
                          debug(LOW, "leaving enumFromThenTo_build\n");
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
    }
  }
}

// enumFromThenTo_build at []
void Prelude_enumFromThenTo_USbuild__hnf(field root)
{
  debug(LOW, "HNF enumFromThenTo_build@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
  v2 = child_at(root, 4);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_enumFromThenTo_USbuild_(v2, v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromThenTo_build\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_enumFromThenTo_USbuild_(v2, v3, v4, v5, v6, 0));
          }
          field v7;
          v7 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude_enumFromThenTo_USbuild__0(v3, v4, v5, v6, v7, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving enumFromThenTo_build\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude_enumFromThenTo_USbuild__0(v3, v4, v5, v6, v7, 0));
                  }
                  field v8;
                  v8 = child_at(scrutinee, 0);
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
                            save(root, make_Prelude_enumFromThenTo_USbuild__0_0(v4, v5, v6, v7, v8, 0));
                          }
                          fail(root);
                          debug(LOW, "leaving enumFromThenTo_build\n");
                          debug_expr(LOW, root);
                          return;
                        }
                        case FUNCTION_TAG:
                        {
                          HNF(scrutinee);
                          break;
                        }
                        case CHOICE_TAG:
                        {
                          choose(scrutinee);
                          break;
                        }
                        case FORWARD_TAG:
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
                            save(root, make_Prelude_enumFromThenTo_USbuild__0_0(v4, v5, v6, v7, v8, 0));
                          }
                          field v9;
                          v9 = child_at(scrutinee, 0);
                          set_Prelude_enumFromThenTo_USbuild_HTworker(root, v5, v6, v7, v8, v9, 0);
                          Prelude_enumFromThenTo_USbuild_HTworker_hnf(root);
                          debug(LOW, "leaving enumFromThenTo_build\n");
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
    }
  }
}

// enumFromThenTo_build at [0]
void Prelude_enumFromThenTo_USbuild__0_hnf(field root)
{
  debug(LOW, "HNF enumFromThenTo_build@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v7 = child_at(root, 0);
  v6 = child_at(root, 1);
  v5 = child_at(root, 2);
  v4 = child_at(root, 3);
  v3 = child_at(root, 4);
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
            save(root, make_Prelude_enumFromThenTo_USbuild__0(v3, v4, v5, v6, v7, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromThenTo_build\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_enumFromThenTo_USbuild__0(v3, v4, v5, v6, v7, 0));
          }
          field v8;
          v8 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude_enumFromThenTo_USbuild__0_0(v4, v5, v6, v7, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving enumFromThenTo_build\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude_enumFromThenTo_USbuild__0_0(v4, v5, v6, v7, v8, 0));
                  }
                  field v9;
                  v9 = child_at(scrutinee, 0);
                  set_Prelude_enumFromThenTo_USbuild_HTworker(root, v5, v6, v7, v8, v9, 0);
                  Prelude_enumFromThenTo_USbuild_HTworker_hnf(root);
                  debug(LOW, "leaving enumFromThenTo_build\n");
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

// enumFromThenTo_build at [0,0]
void Prelude_enumFromThenTo_USbuild__0_0_hnf(field root)
{
  debug(LOW, "HNF enumFromThenTo_build@[0,0]\n");
  debug_expr(LOW, root);
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v8 = child_at(root, 0);
  v7 = child_at(root, 1);
  v6 = child_at(root, 2);
  v5 = child_at(root, 3);
  v4 = child_at(root, 4);
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
            save(root, make_Prelude_enumFromThenTo_USbuild__0_0(v4, v5, v6, v7, v8, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromThenTo_build\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_enumFromThenTo_USbuild__0_0(v4, v5, v6, v7, v8, 0));
          }
          field v9;
          v9 = child_at(scrutinee, 0);
          set_Prelude_enumFromThenTo_USbuild_HTworker(root, v5, v6, v7, v8, v9, 0);
          Prelude_enumFromThenTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving enumFromThenTo_build\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// enumFromThenTo_build
Node* Prelude_enumFromThenTo_USbuild_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF enumFromThenTo_build:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
  v2 = child_at(root, 4);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_enumFromThenTo_USbuild_(v2, v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromThenTo_build\n");
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
            backup = save_RET(backup, make_Prelude_enumFromThenTo_USbuild_(v2, v3, v4, v5, v6, 0));
          }
          field v7;
          v7 = child_at(scrutinee, 0);
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
                    backup = save_RET(backup, make_Prelude_enumFromThenTo_USbuild__0(v3, v4, v5, v6, v7, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving enumFromThenTo_build\n");
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
                    backup = save_RET(backup, make_Prelude_enumFromThenTo_USbuild__0(v3, v4, v5, v6, v7, 0));
                  }
                  field v8;
                  v8 = child_at(scrutinee, 0);
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
                            backup = save_RET(backup, make_Prelude_enumFromThenTo_USbuild__0_0(v4, v5, v6, v7, v8, 0));
                          }
                          fail(root);
                          debug(LOW, "leaving enumFromThenTo_build\n");
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
                            backup = save_RET(backup, make_Prelude_enumFromThenTo_USbuild__0_0(v4, v5, v6, v7, v8, 0));
                          }
                          field v9;
                          v9 = child_at(scrutinee, 0);
                          set_Prelude_enumFromThenTo_USbuild_HTworker(root, v5, v6, v7, v8, v9, 0);
                          backup = Prelude_enumFromThenTo_USbuild_HTworker_RET_hnf(backup);
                          debug(LOW, "leaving enumFromThenTo_build\n");
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
    }
  }
}

// enumFromTo_build
void Prelude_enumFromTo_USbuild_hnf(field root)
{
  debug(LOW, "HNF enumFromTo_build:\n");
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
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_enumFromTo_USbuild_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromTo_build\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_enumFromTo_USbuild_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude_enumFromTo_USbuild__0(v3, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving enumFromTo_build\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude_enumFromTo_USbuild__0(v3, v4, v5, v6, 0));
                  }
                  field v7;
                  v7 = child_at(scrutinee, 0);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v4, v5, v6, v7, 0);
                  Prelude_enumFromTo_USbuild_HTworker_hnf(root);
                  debug(LOW, "leaving enumFromTo_build\n");
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

// enumFromTo_build at []
void Prelude_enumFromTo_USbuild__hnf(field root)
{
  debug(LOW, "HNF enumFromTo_build@[]\n");
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
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_enumFromTo_USbuild_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromTo_build\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_enumFromTo_USbuild_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude_enumFromTo_USbuild__0(v3, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving enumFromTo_build\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude_enumFromTo_USbuild__0(v3, v4, v5, v6, 0));
                  }
                  field v7;
                  v7 = child_at(scrutinee, 0);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v4, v5, v6, v7, 0);
                  Prelude_enumFromTo_USbuild_HTworker_hnf(root);
                  debug(LOW, "leaving enumFromTo_build\n");
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

// enumFromTo_build at [0]
void Prelude_enumFromTo_USbuild__0_hnf(field root)
{
  debug(LOW, "HNF enumFromTo_build@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
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
            save(root, make_Prelude_enumFromTo_USbuild__0(v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromTo_build\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_enumFromTo_USbuild__0(v3, v4, v5, v6, 0));
          }
          field v7;
          v7 = child_at(scrutinee, 0);
          set_Prelude_enumFromTo_USbuild_HTworker(root, v4, v5, v6, v7, 0);
          Prelude_enumFromTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving enumFromTo_build\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// enumFromTo_build
Node* Prelude_enumFromTo_USbuild_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF enumFromTo_build:\n");
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
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_enumFromTo_USbuild_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromTo_build\n");
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
            backup = save_RET(backup, make_Prelude_enumFromTo_USbuild_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
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
                    backup = save_RET(backup, make_Prelude_enumFromTo_USbuild__0(v3, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving enumFromTo_build\n");
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
                    backup = save_RET(backup, make_Prelude_enumFromTo_USbuild__0(v3, v4, v5, v6, 0));
                  }
                  field v7;
                  v7 = child_at(scrutinee, 0);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v4, v5, v6, v7, 0);
                  backup = Prelude_enumFromTo_USbuild_HTworker_RET_hnf(backup);
                  debug(LOW, "leaving enumFromTo_build\n");
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

// splitAt
void Prelude_splitAt_hnf(field root)
{
  debug(LOW, "HNF splitAt:\n");
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
            save(root, make_Prelude_splitAt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving splitAt\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_splitAt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          set_Prelude_splitAt_HTworker(root, v3, v4, 0);
          Prelude_splitAt_HTworker_hnf(root);
          debug(LOW, "leaving splitAt\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// splitAt at []
void Prelude_splitAt__hnf(field root)
{
  debug(LOW, "HNF splitAt@[]\n");
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
            save(root, make_Prelude_splitAt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving splitAt\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_splitAt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          set_Prelude_splitAt_HTworker(root, v3, v4, 0);
          Prelude_splitAt_HTworker_hnf(root);
          debug(LOW, "leaving splitAt\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// splitAt
Node* Prelude_splitAt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF splitAt:\n");
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
            backup = save_RET(backup, make_Prelude_splitAt_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving splitAt\n");
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
            backup = save_RET(backup, make_Prelude_splitAt_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          set_Prelude_splitAt_HTworker(root, v3, v4, 0);
          backup = Prelude_splitAt_HTworker_RET_hnf(backup);
          debug(LOW, "leaving splitAt\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// take
void Prelude_take_hnf(field root)
{
  debug(LOW, "HNF take:\n");
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
            save(root, make_Prelude_take_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving take\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_take_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          set_Prelude_take_HTworker(root, v3, v4, 0);
          Prelude_take_HTworker_hnf(root);
          debug(LOW, "leaving take\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// take at []
void Prelude_take__hnf(field root)
{
  debug(LOW, "HNF take@[]\n");
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
            save(root, make_Prelude_take_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving take\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_take_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          set_Prelude_take_HTworker(root, v3, v4, 0);
          Prelude_take_HTworker_hnf(root);
          debug(LOW, "leaving take\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// take
Node* Prelude_take_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF take:\n");
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
            backup = save_RET(backup, make_Prelude_take_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving take\n");
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
            backup = save_RET(backup, make_Prelude_take_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          set_Prelude_take_HTworker(root, v3, v4, 0);
          backup = Prelude_take_HTworker_RET_hnf(backup);
          debug(LOW, "leaving take\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// drop
void Prelude_drop_hnf(field root)
{
  debug(LOW, "HNF drop:\n");
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
            save(root, make_Prelude_drop_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving drop\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_drop_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          set_Prelude_drop_HTworker(root, v3, v4, 0);
          Prelude_drop_HTworker_hnf(root);
          debug(LOW, "leaving drop\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// drop at []
void Prelude_drop__hnf(field root)
{
  debug(LOW, "HNF drop@[]\n");
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
            save(root, make_Prelude_drop_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving drop\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_drop_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          set_Prelude_drop_HTworker(root, v3, v4, 0);
          Prelude_drop_HTworker_hnf(root);
          debug(LOW, "leaving drop\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// drop
Node* Prelude_drop_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF drop:\n");
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
            backup = save_RET(backup, make_Prelude_drop_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving drop\n");
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
            backup = save_RET(backup, make_Prelude_drop_(v2, v3, 0));
          }
          field v4;
          v4 = child_at(scrutinee, 0);
          set_Prelude_drop_HTworker(root, v3, v4, 0);
          backup = Prelude_drop_HTworker_RET_hnf(backup);
          debug(LOW, "leaving drop\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// default for minBound in Bounded
void Prelude__USdef_HTminBound_HTPrelude_DOBounded_hnf(field root)
{
  debug(LOW, "HNF _def#minBound#Prelude.Bounded:\n");
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
            save(root, make_Prelude__USdef_HTminBound_HTPrelude_DOBounded_(v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#minBound#Prelude.Bounded\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTminBound_HTPrelude_DOBounded_(v3, 0));
          }
          field v4;
          field v5;
          v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v5 = toCurryString("No instance or default method for class operation `minBound\'");
          set_Prelude__DL_HT_HT(root, v4, v5, 0);
          Prelude__DL_HT_HT_hnf(root);
          debug(LOW, "leaving _def#minBound#Prelude.Bounded\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for minBound in Bounded at []
void Prelude__USdef_HTminBound_HTPrelude_DOBounded__hnf(field root)
{
  debug(LOW, "HNF _def#minBound#Prelude.Bounded@[]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
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
            save(root, make_Prelude__USdef_HTminBound_HTPrelude_DOBounded_(v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#minBound#Prelude.Bounded\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTminBound_HTPrelude_DOBounded_(v3, 0));
          }
          field v4;
          field v5;
          v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v5 = toCurryString("No instance or default method for class operation `minBound\'");
          set_Prelude__DL_HT_HT(root, v4, v5, 0);
          Prelude__DL_HT_HT_hnf(root);
          debug(LOW, "leaving _def#minBound#Prelude.Bounded\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for minBound in Bounded
Node* Prelude__USdef_HTminBound_HTPrelude_DOBounded_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#minBound#Prelude.Bounded:\n");
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
            backup = save_RET(backup, make_Prelude__USdef_HTminBound_HTPrelude_DOBounded_(v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#minBound#Prelude.Bounded\n");
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HTminBound_HTPrelude_DOBounded_(v3, 0));
          }
          field v4;
          field v5;
          v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v5 = toCurryString("No instance or default method for class operation `minBound\'");
          set_Prelude__DL_HT_HT(root, v4, v5, 0);
          backup = Prelude__DL_HT_HT_RET_hnf(backup);
          debug(LOW, "leaving _def#minBound#Prelude.Bounded\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// default for maxBound in Bounded
void Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_hnf(field root)
{
  debug(LOW, "HNF _def#maxBound#Prelude.Bounded:\n");
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
            save(root, make_Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_(v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#maxBound#Prelude.Bounded\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_(v3, 0));
          }
          field v4;
          field v5;
          v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v5 = toCurryString("No instance or default method for class operation `maxBound\'");
          set_Prelude__DL_HT_HT(root, v4, v5, 0);
          Prelude__DL_HT_HT_hnf(root);
          debug(LOW, "leaving _def#maxBound#Prelude.Bounded\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for maxBound in Bounded at []
void Prelude__USdef_HTmaxBound_HTPrelude_DOBounded__hnf(field root)
{
  debug(LOW, "HNF _def#maxBound#Prelude.Bounded@[]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
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
            save(root, make_Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_(v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#maxBound#Prelude.Bounded\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_(v3, 0));
          }
          field v4;
          field v5;
          v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v5 = toCurryString("No instance or default method for class operation `maxBound\'");
          set_Prelude__DL_HT_HT(root, v4, v5, 0);
          Prelude__DL_HT_HT_hnf(root);
          debug(LOW, "leaving _def#maxBound#Prelude.Bounded\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for maxBound in Bounded
Node* Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#maxBound#Prelude.Bounded:\n");
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
            backup = save_RET(backup, make_Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_(v3, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#maxBound#Prelude.Bounded\n");
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HTmaxBound_HTPrelude_DOBounded_(v3, 0));
          }
          field v4;
          field v5;
          v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v5 = toCurryString("No instance or default method for class operation `maxBound\'");
          set_Prelude__DL_HT_HT(root, v4, v5, 0);
          backup = Prelude__DL_HT_HT_RET_hnf(backup);
          debug(LOW, "leaving _def#maxBound#Prelude.Bounded\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// default for toEnum in Enum
void Prelude__USdef_HTtoEnum_HTPrelude_DOEnum_hnf(field root)
{
  debug(LOW, "HNF _def#toEnum#Prelude.Enum:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `toEnum\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving _def#toEnum#Prelude.Enum\n");
  debug_expr(LOW, root);
  return;
}

// default for toEnum in Enum
Node* Prelude__USdef_HTtoEnum_HTPrelude_DOEnum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#toEnum#Prelude.Enum:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `toEnum\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving _def#toEnum#Prelude.Enum\n");
  debug_expr(LOW, root);
  return backup;
}

// default for fromEnum in Enum
void Prelude__USdef_HTfromEnum_HTPrelude_DOEnum_hnf(field root)
{
  debug(LOW, "HNF _def#fromEnum#Prelude.Enum:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `fromEnum\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  Prelude__DL_HT_HT_hnf(root);
  debug(LOW, "leaving _def#fromEnum#Prelude.Enum\n");
  debug_expr(LOW, root);
  return;
}

// default for fromEnum in Enum
Node* Prelude__USdef_HTfromEnum_HTPrelude_DOEnum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#fromEnum#Prelude.Enum:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
  v4 = toCurryString("No instance or default method for class operation `fromEnum\'");
  set_Prelude__DL_HT_HT(root, v3, v4, 0);
  backup = Prelude__DL_HT_HT_RET_hnf(backup);
  debug(LOW, "leaving _def#fromEnum#Prelude.Enum\n");
  debug_expr(LOW, root);
  return backup;
}

// succ
void Prelude_succ_hnf(field root)
{
  debug(LOW, "HNF succ:\n");
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
            save(root, make_Prelude_succ_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving succ\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_succ_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v3);
          debug(LOW, "leaving succ\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// succ at []
void Prelude_succ__hnf(field root)
{
  debug(LOW, "HNF succ@[]\n");
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
            save(root, make_Prelude_succ_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving succ\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_succ_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v3);
          debug(LOW, "leaving succ\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// succ at [0]
void Prelude_succ__0_hnf(field root)
{
  debug(LOW, "HNF succ@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving succ\n");
  debug_expr(LOW, root);
  return;
}

// succ
Node* Prelude_succ_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF succ:\n");
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
            backup = save_RET(backup, make_Prelude_succ_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving succ\n");
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_succ_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v3);
          debug(LOW, "leaving succ\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// pred
void Prelude_pred_hnf(field root)
{
  debug(LOW, "HNF pred:\n");
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
            save(root, make_Prelude_pred_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving pred\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_pred_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v4);
          debug(LOW, "leaving pred\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// pred at []
void Prelude_pred__hnf(field root)
{
  debug(LOW, "HNF pred@[]\n");
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
            save(root, make_Prelude_pred_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving pred\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_pred_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v4);
          debug(LOW, "leaving pred\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// pred at [0]
void Prelude_pred__0_hnf(field root)
{
  debug(LOW, "HNF pred@[0]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving pred\n");
  debug_expr(LOW, root);
  return;
}

// pred
Node* Prelude_pred_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF pred:\n");
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
            backup = save_RET(backup, make_Prelude_pred_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving pred\n");
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_pred_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v4);
          debug(LOW, "leaving pred\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// enumFrom
void Prelude_enumFrom_hnf(field root)
{
  debug(LOW, "HNF enumFrom:\n");
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
            save(root, make_Prelude_enumFrom_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFrom\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_enumFrom_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v7);
          debug(LOW, "leaving enumFrom\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// enumFrom at []
void Prelude_enumFrom__hnf(field root)
{
  debug(LOW, "HNF enumFrom@[]\n");
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
            save(root, make_Prelude_enumFrom_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFrom\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_enumFrom_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v7);
          debug(LOW, "leaving enumFrom\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// enumFrom at [0]
void Prelude_enumFrom__0_hnf(field root)
{
  debug(LOW, "HNF enumFrom@[0]\n");
  debug_expr(LOW, root);
  field v7;
  v7 = child_at(root, 0);
  set_forward(root, v7);
  debug(LOW, "leaving enumFrom\n");
  debug_expr(LOW, root);
  return;
}

// enumFrom
Node* Prelude_enumFrom_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF enumFrom:\n");
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
            backup = save_RET(backup, make_Prelude_enumFrom_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFrom\n");
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_enumFrom_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v7);
          debug(LOW, "leaving enumFrom\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// enumFromThen
void Prelude_enumFromThen_hnf(field root)
{
  debug(LOW, "HNF enumFromThen:\n");
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
            save(root, make_Prelude_enumFromThen_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromThen\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_enumFromThen_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v8);
          debug(LOW, "leaving enumFromThen\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// enumFromThen at []
void Prelude_enumFromThen__hnf(field root)
{
  debug(LOW, "HNF enumFromThen@[]\n");
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
            save(root, make_Prelude_enumFromThen_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromThen\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_enumFromThen_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v8);
          debug(LOW, "leaving enumFromThen\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// enumFromThen at [0]
void Prelude_enumFromThen__0_hnf(field root)
{
  debug(LOW, "HNF enumFromThen@[0]\n");
  debug_expr(LOW, root);
  field v8;
  v8 = child_at(root, 0);
  set_forward(root, v8);
  debug(LOW, "leaving enumFromThen\n");
  debug_expr(LOW, root);
  return;
}

// enumFromThen
Node* Prelude_enumFromThen_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF enumFromThen:\n");
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
            backup = save_RET(backup, make_Prelude_enumFromThen_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromThen\n");
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_enumFromThen_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v8);
          debug(LOW, "leaving enumFromThen\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// enumFromTo
void Prelude_enumFromTo_hnf(field root)
{
  debug(LOW, "HNF enumFromTo:\n");
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
            save(root, make_Prelude_enumFromTo_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromTo\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_enumFromTo_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v9);
          debug(LOW, "leaving enumFromTo\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// enumFromTo at []
void Prelude_enumFromTo__hnf(field root)
{
  debug(LOW, "HNF enumFromTo@[]\n");
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
            save(root, make_Prelude_enumFromTo_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromTo\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_enumFromTo_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v9);
          debug(LOW, "leaving enumFromTo\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// enumFromTo at [0]
void Prelude_enumFromTo__0_hnf(field root)
{
  debug(LOW, "HNF enumFromTo@[0]\n");
  debug_expr(LOW, root);
  field v9;
  v9 = child_at(root, 0);
  set_forward(root, v9);
  debug(LOW, "leaving enumFromTo\n");
  debug_expr(LOW, root);
  return;
}

// enumFromTo
Node* Prelude_enumFromTo_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF enumFromTo:\n");
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
            backup = save_RET(backup, make_Prelude_enumFromTo_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromTo\n");
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_enumFromTo_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v9);
          debug(LOW, "leaving enumFromTo\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// enumFromThenTo
void Prelude_enumFromThenTo_hnf(field root)
{
  debug(LOW, "HNF enumFromThenTo:\n");
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
            save(root, make_Prelude_enumFromThenTo_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromThenTo\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_enumFromThenTo_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v10);
          debug(LOW, "leaving enumFromThenTo\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// enumFromThenTo at []
void Prelude_enumFromThenTo__hnf(field root)
{
  debug(LOW, "HNF enumFromThenTo@[]\n");
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
            save(root, make_Prelude_enumFromThenTo_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromThenTo\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_enumFromThenTo_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v10);
          debug(LOW, "leaving enumFromThenTo\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// enumFromThenTo at [0]
void Prelude_enumFromThenTo__0_hnf(field root)
{
  debug(LOW, "HNF enumFromThenTo@[0]\n");
  debug_expr(LOW, root);
  field v10;
  v10 = child_at(root, 0);
  set_forward(root, v10);
  debug(LOW, "leaving enumFromThenTo\n");
  debug_expr(LOW, root);
  return;
}

// enumFromThenTo
Node* Prelude_enumFromThenTo_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF enumFromThenTo:\n");
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
            backup = save_RET(backup, make_Prelude_enumFromThenTo_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving enumFromThenTo\n");
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_enumFromThenTo_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v10);
          debug(LOW, "leaving enumFromThenTo\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// null_fold
void Prelude_null_USfold_hnf(field root)
{
  debug(LOW, "HNF null_fold:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_Prelude_False(root, 0);
  debug(LOW, "leaving null_fold\n");
  debug_expr(LOW, root);
  return;
}

// null_fold
Node* Prelude_null_USfold_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF null_fold:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_Prelude_False(root, 0);
  debug(LOW, "leaving null_fold\n");
  debug_expr(LOW, root);
  return backup;
}

// null
void Prelude_null_hnf(field root)
{
  debug(LOW, "HNF null:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_null_USfold((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude_True(0);
  set_Prelude_foldr(root, v3, v4, v2, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving null\n");
  debug_expr(LOW, root);
  return;
}

// null
Node* Prelude_null_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF null:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_null_USfold((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude_True(0);
  set_Prelude_foldr(root, v3, v4, v2, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving null\n");
  debug_expr(LOW, root);
  return backup;
}

// length_fold
void Prelude_length_USfold_hnf(field root)
{
  debug(LOW, "HNF length_fold:\n");
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
            save(root, make_Prelude_length_USfold_(v3, 0));
          }
          fail(root);
          debug(LOW, "leaving length_fold\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_length_USfold_(v3, 0));
          }
          field v4;
          field v5;
          v4 = child_at(scrutinee, 0);
          v5 = (field)(long)(1 + v4.i);
          set__int(root, v5.i, 0);
          debug(LOW, "leaving length_fold\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// length_fold at []
void Prelude_length_USfold__hnf(field root)
{
  debug(LOW, "HNF length_fold@[]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
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
            save(root, make_Prelude_length_USfold_(v3, 0));
          }
          fail(root);
          debug(LOW, "leaving length_fold\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_length_USfold_(v3, 0));
          }
          field v4;
          field v5;
          v4 = child_at(scrutinee, 0);
          v5 = (field)(long)(1 + v4.i);
          set__int(root, v5.i, 0);
          debug(LOW, "leaving length_fold\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// length_fold
Node* Prelude_length_USfold_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF length_fold:\n");
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
            backup = save_RET(backup, make_Prelude_length_USfold_(v3, 0));
          }
          fail(root);
          debug(LOW, "leaving length_fold\n");
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
            backup = save_RET(backup, make_Prelude_length_USfold_(v3, 0));
          }
          field v4;
          field v5;
          v4 = child_at(scrutinee, 0);
          v5 = (field)(long)(1 + v4.i);
          set__int(root, v5.i, 0);
          debug(LOW, "leaving length_fold\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// length
void Prelude_length_hnf(field root)
{
  debug(LOW, "HNF length:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_length_USfold((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make__int(0, 0);
  set_Prelude_foldr(root, v3, v4, v2, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving length\n");
  debug_expr(LOW, root);
  return;
}

// length
Node* Prelude_length_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF length:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_length_USfold((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make__int(0, 0);
  set_Prelude_foldr(root, v3, v4, v2, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving length\n");
  debug_expr(LOW, root);
  return backup;
}

// enumFromThenTo_
void Prelude_enumFromThenTo_US_hnf(field root)
{
  debug(LOW, "HNF enumFromThenTo_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt(v3, v2, 0);
  v6 = make_Prelude_enumFromThenTo_USbuild(v2, v5, v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v6, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving enumFromThenTo_\n");
  debug_expr(LOW, root);
  return;
}

// enumFromThenTo_
Node* Prelude_enumFromThenTo_US_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF enumFromThenTo_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt(v3, v2, 0);
  v6 = make_Prelude_enumFromThenTo_USbuild(v2, v5, v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v6, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving enumFromThenTo_\n");
  debug_expr(LOW, root);
  return backup;
}

// enumFromTo_
void Prelude_enumFromTo_US_hnf(field root)
{
  debug(LOW, "HNF enumFromTo_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_enumFromTo_USbuild(v2, v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v4, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving enumFromTo_\n");
  debug_expr(LOW, root);
  return;
}

// enumFromTo_
Node* Prelude_enumFromTo_US_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF enumFromTo_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_enumFromTo_USbuild(v2, v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v4, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving enumFromTo_\n");
  debug_expr(LOW, root);
  return backup;
}

// iterate
void Prelude_iterate_hnf(field root)
{
  debug(LOW, "HNF iterate:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_iterate_USbuild(v2, v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v4, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving iterate\n");
  debug_expr(LOW, root);
  return;
}

// iterate
Node* Prelude_iterate_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF iterate:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_iterate_USbuild(v2, v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v4, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving iterate\n");
  debug_expr(LOW, root);
  return backup;
}

// enumFromThen_
void Prelude_enumFromThen_US_hnf(field root)
{
  debug(LOW, "HNF enumFromThen_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt(v3, v2, 0);
  v5 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt(v4, (field)(Node*)NULL, 1);
  v6 = make_Prelude_iterate_USbuild(v5, v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v6, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving enumFromThen_\n");
  debug_expr(LOW, root);
  return;
}

// enumFromThen_
Node* Prelude_enumFromThen_US_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF enumFromThen_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt(v3, v2, 0);
  v5 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt(v4, (field)(Node*)NULL, 1);
  v6 = make_Prelude_iterate_USbuild(v5, v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v6, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving enumFromThen_\n");
  debug_expr(LOW, root);
  return backup;
}

// enumFrom_
void Prelude_enumFrom_US_hnf(field root)
{
  debug(LOW, "HNF enumFrom_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = child_at(root, 0);
  v3 = make__int(1, 0);
  v4 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt(v3, (field)(Node*)NULL, 1);
  v5 = make_Prelude_iterate_USbuild(v4, v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v5, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving enumFrom_\n");
  debug_expr(LOW, root);
  return;
}

// enumFrom_
Node* Prelude_enumFrom_US_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF enumFrom_:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = child_at(root, 0);
  v3 = make__int(1, 0);
  v4 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt(v3, (field)(Node*)NULL, 1);
  v5 = make_Prelude_iterate_USbuild(v4, v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v5, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving enumFrom_\n");
  debug_expr(LOW, root);
  return backup;
}

// lookup_fold
void Prelude_lookup_USfold_hnf(field root)
{
  debug(LOW, "HNF lookup_fold:\n");
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
            save(root, make_Prelude_lookup_USfold_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving lookup_fold\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_lookup_USfold_(v2, v3, v4, v5, 0));
          }
          field v6;
          field v7;
          field v8;
          field v9;
          v7 = child_at(scrutinee, 0);
          v6 = child_at(scrutinee, 1);
          v8 = make_Prelude__EQ_EQ(v2, 0);
          v9 = make_apply2(v8, v3, v6);
          {
            bool nondet = false;
            field scrutinee = v9;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_lookup_USfold__0(v5, v7, v9, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving lookup_fold\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_lookup_USfold__0(v5, v7, v9, 0));
                  }
                  set_Prelude_Just(root, v7, 0);
                  debug(LOW, "leaving lookup_fold\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_False_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_lookup_USfold__0(v5, v7, v9, 0));
                  }
                  set_forward(root, v5);
                  debug(LOW, "leaving lookup_fold\n");
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

// lookup_fold at []
void Prelude_lookup_USfold__hnf(field root)
{
  debug(LOW, "HNF lookup_fold@[]\n");
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
            save(root, make_Prelude_lookup_USfold_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving lookup_fold\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_lookup_USfold_(v2, v3, v4, v5, 0));
          }
          field v6;
          field v7;
          field v8;
          field v9;
          v7 = child_at(scrutinee, 0);
          v6 = child_at(scrutinee, 1);
          v8 = make_Prelude__EQ_EQ(v2, 0);
          v9 = make_apply2(v8, v3, v6);
          {
            bool nondet = false;
            field scrutinee = v9;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_lookup_USfold__0(v5, v7, v9, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving lookup_fold\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_lookup_USfold__0(v5, v7, v9, 0));
                  }
                  set_Prelude_Just(root, v7, 0);
                  debug(LOW, "leaving lookup_fold\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_False_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_lookup_USfold__0(v5, v7, v9, 0));
                  }
                  set_forward(root, v5);
                  debug(LOW, "leaving lookup_fold\n");
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

// lookup_fold at [0]
void Prelude_lookup_USfold__0_hnf(field root)
{
  debug(LOW, "HNF lookup_fold@[0]\n");
  debug_expr(LOW, root);
  field v5;
  field v7;
  field v9;
  v9 = child_at(root, 0);
  v7 = child_at(root, 1);
  v5 = child_at(root, 2);
  {
    bool nondet = false;
    field scrutinee = v9;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_lookup_USfold__0(v5, v7, v9, 0));
          }
          fail(root);
          debug(LOW, "leaving lookup_fold\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_lookup_USfold__0(v5, v7, v9, 0));
          }
          set_Prelude_Just(root, v7, 0);
          debug(LOW, "leaving lookup_fold\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_lookup_USfold__0(v5, v7, v9, 0));
          }
          set_forward(root, v5);
          debug(LOW, "leaving lookup_fold\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// lookup_fold at [0,1]
void Prelude_lookup_USfold__0_1_hnf(field root)
{
  debug(LOW, "HNF lookup_fold@[0,1]\n");
  debug_expr(LOW, root);
  field v5;
  v5 = child_at(root, 0);
  set_forward(root, v5);
  debug(LOW, "leaving lookup_fold\n");
  debug_expr(LOW, root);
  return;
}

// lookup_fold
Node* Prelude_lookup_USfold_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF lookup_fold:\n");
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
            backup = save_RET(backup, make_Prelude_lookup_USfold_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving lookup_fold\n");
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
            backup = save_RET(backup, make_Prelude_lookup_USfold_(v2, v3, v4, v5, 0));
          }
          field v6;
          field v7;
          field v8;
          field v9;
          v7 = child_at(scrutinee, 0);
          v6 = child_at(scrutinee, 1);
          v8 = make_Prelude__EQ_EQ(v2, 0);
          v9 = make_apply2(v8, v3, v6);
          {
            bool nondet = false;
            field scrutinee = v9;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_lookup_USfold__0(v5, v7, v9, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving lookup_fold\n");
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
                    backup = save_RET(backup, make_Prelude_lookup_USfold__0(v5, v7, v9, 0));
                  }
                  set_Prelude_Just(root, v7, 0);
                  debug(LOW, "leaving lookup_fold\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude_False_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_lookup_USfold__0(v5, v7, v9, 0));
                  }
                  set_forward(root, v5);
                  debug(LOW, "leaving lookup_fold\n");
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

// lookup
void Prelude_lookup_hnf(field root)
{
  debug(LOW, "HNF lookup:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_lookup_USfold(v2, v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude_Nothing(0);
  set_Prelude_foldr(root, v5, v6, v4, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving lookup\n");
  debug_expr(LOW, root);
  return;
}

// lookup
Node* Prelude_lookup_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF lookup:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_lookup_USfold(v2, v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude_Nothing(0);
  set_Prelude_foldr(root, v5, v6, v4, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving lookup\n");
  debug_expr(LOW, root);
  return backup;
}

// repeat_build
void Prelude_repeat_USbuild_hnf(field root)
{
  debug(LOW, "HNF repeat_build:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply2(v3, v2, v5);
  child_at(v5, 2) = v5;
  set_forward(root, v5);
  debug(LOW, "leaving repeat_build\n");
  debug_expr(LOW, root);
  return;
}

// repeat_build at []
void Prelude_repeat_USbuild__hnf(field root)
{
  debug(LOW, "HNF repeat_build@[]\n");
  debug_expr(LOW, root);
  field v5;
  v5 = child_at(root, 0);
  set_forward(root, v5);
  debug(LOW, "leaving repeat_build\n");
  debug_expr(LOW, root);
  return;
}

// repeat_build
Node* Prelude_repeat_USbuild_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF repeat_build:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply2(v3, v2, v5);
  child_at(v5, 2) = v5;
  set_forward(root, v5);
  debug(LOW, "leaving repeat_build\n");
  debug_expr(LOW, root);
  return backup;
}

// repeat
void Prelude_repeat_hnf(field root)
{
  debug(LOW, "HNF repeat:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude_repeat_USbuild(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v3, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving repeat\n");
  debug_expr(LOW, root);
  return;
}

// repeat
Node* Prelude_repeat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF repeat:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude_repeat_USbuild(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v3, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving repeat\n");
  debug_expr(LOW, root);
  return backup;
}

// concat_mkc
void Prelude_concat_USmkc_hnf(field root)
{
  debug(LOW, "HNF concat_mkc:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude_foldr(root, v2, v4, v3, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving concat_mkc\n");
  debug_expr(LOW, root);
  return;
}

// concat_mkc
Node* Prelude_concat_USmkc_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF concat_mkc:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude_foldr(root, v2, v4, v3, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving concat_mkc\n");
  debug_expr(LOW, root);
  return backup;
}

// concat
void Prelude_concat_hnf(field root)
{
  debug(LOW, "HNF concat:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_concat_USmkc((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v4 = make_Prelude_id((field)(Node*)NULL, 1);
  set_Prelude_build_USfold(root, v3, v4, v2, 0);
  Prelude_build_USfold_hnf(root);
  debug(LOW, "leaving concat\n");
  debug_expr(LOW, root);
  return;
}

// concat
Node* Prelude_concat_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF concat:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_concat_USmkc((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v4 = make_Prelude_id((field)(Node*)NULL, 1);
  set_Prelude_build_USfold(root, v3, v4, v2, 0);
  backup = Prelude_build_USfold_RET_hnf(backup);
  debug(LOW, "leaving concat\n");
  debug_expr(LOW, root);
  return backup;
}

// append_build
void Prelude_append_USbuild_hnf(field root)
{
  debug(LOW, "HNF append_build:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_apply2(v4, v3, v5);
  set_apply2(root, v4, v2, v6);
  apply_hnf(root);
  debug(LOW, "leaving append_build\n");
  debug_expr(LOW, root);
  return;
}

// append_build
Node* Prelude_append_USbuild_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF append_build:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_apply2(v4, v3, v5);
  set_apply2(root, v4, v2, v6);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving append_build\n");
  debug_expr(LOW, root);
  return backup;
}

// ++
void Prelude__PL_PL_hnf(field root)
{
  debug(LOW, "HNF ++:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__PL_PL_HTP0(v2, v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v4, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving ++\n");
  debug_expr(LOW, root);
  return;
}

// ++
Node* Prelude__PL_PL_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF ++:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__PL_PL_HTP0(v2, v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v4, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving ++\n");
  debug_expr(LOW, root);
  return backup;
}

// ++#P0
void Prelude__PL_PL_HTP0_hnf(field root)
{
  debug(LOW, "HNF ++#P0:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_Prelude_foldr(v4, v5, v3, 0);
  set_Prelude_foldr(root, v4, v6, v2, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving ++#P0\n");
  debug_expr(LOW, root);
  return;
}

// ++#P0
Node* Prelude__PL_PL_HTP0_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF ++#P0:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_Prelude_foldr(v4, v5, v3, 0);
  set_Prelude_foldr(root, v4, v6, v2, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving ++#P0\n");
  debug_expr(LOW, root);
  return backup;
}

// filter_mkc
void Prelude_filter_USmkc_hnf(field root)
{
  debug(LOW, "HNF filter_mkc:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_apply1(v2, v4);
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
            save(root, make_Prelude_filter_USmkc_(v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving filter_mkc\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_filter_USmkc_(v3, v4, v5, v6, 0));
          }
          set_apply2(root, v3, v4, v5);
          apply_hnf(root);
          debug(LOW, "leaving filter_mkc\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_filter_USmkc_(v3, v4, v5, v6, 0));
          }
          set_forward(root, v5);
          debug(LOW, "leaving filter_mkc\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// filter_mkc at []
void Prelude_filter_USmkc__hnf(field root)
{
  debug(LOW, "HNF filter_mkc@[]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
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
            save(root, make_Prelude_filter_USmkc_(v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving filter_mkc\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_filter_USmkc_(v3, v4, v5, v6, 0));
          }
          set_apply2(root, v3, v4, v5);
          apply_hnf(root);
          debug(LOW, "leaving filter_mkc\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_filter_USmkc_(v3, v4, v5, v6, 0));
          }
          set_forward(root, v5);
          debug(LOW, "leaving filter_mkc\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// filter_mkc at [1]
void Prelude_filter_USmkc__1_hnf(field root)
{
  debug(LOW, "HNF filter_mkc@[1]\n");
  debug_expr(LOW, root);
  field v5;
  v5 = child_at(root, 0);
  set_forward(root, v5);
  debug(LOW, "leaving filter_mkc\n");
  debug_expr(LOW, root);
  return;
}

// filter_mkc
Node* Prelude_filter_USmkc_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF filter_mkc:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_apply1(v2, v4);
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
            backup = save_RET(backup, make_Prelude_filter_USmkc_(v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving filter_mkc\n");
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
            backup = save_RET(backup, make_Prelude_filter_USmkc_(v3, v4, v5, v6, 0));
          }
          set_apply2(root, v3, v4, v5);
          backup = apply_RET_hnf(backup);
          debug(LOW, "leaving filter_mkc\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_filter_USmkc_(v3, v4, v5, v6, 0));
          }
          set_forward(root, v5);
          debug(LOW, "leaving filter_mkc\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// filter
void Prelude_filter_hnf(field root)
{
  debug(LOW, "HNF filter:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_filter_USmkc(v2, (field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v5 = make_Prelude_id((field)(Node*)NULL, 1);
  set_Prelude_build_USfold(root, v4, v5, v3, 0);
  Prelude_build_USfold_hnf(root);
  debug(LOW, "leaving filter\n");
  debug_expr(LOW, root);
  return;
}

// filter
Node* Prelude_filter_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF filter:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_filter_USmkc(v2, (field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v5 = make_Prelude_id((field)(Node*)NULL, 1);
  set_Prelude_build_USfold(root, v4, v5, v3, 0);
  backup = Prelude_build_USfold_RET_hnf(backup);
  debug(LOW, "leaving filter\n");
  debug_expr(LOW, root);
  return backup;
}

// map_mkc
void Prelude_map_USmkc_hnf(field root)
{
  debug(LOW, "HNF map_mkc:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_apply1(v2, v4);
  set_apply2(root, v3, v6, v5);
  apply_hnf(root);
  debug(LOW, "leaving map_mkc\n");
  debug_expr(LOW, root);
  return;
}

// map_mkc
Node* Prelude_map_USmkc_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF map_mkc:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_apply1(v2, v4);
  set_apply2(root, v3, v6, v5);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving map_mkc\n");
  debug_expr(LOW, root);
  return backup;
}

// map
void Prelude_map_hnf(field root)
{
  debug(LOW, "HNF map:\n");
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
  debug(LOW, "leaving map\n");
  debug_expr(LOW, root);
  return;
}

// map
Node* Prelude_map_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF map:\n");
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
  debug(LOW, "leaving map\n");
  debug_expr(LOW, root);
  return backup;
}

// concatMap
void Prelude_concatMap_hnf(field root)
{
  debug(LOW, "HNF concatMap:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_concatMap_HTP1(v2, (field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v5 = make_Prelude_concatMap_HTP2((field)(Node*)NULL, 1);
  set_Prelude_build_USfold(root, v4, v5, v3, 0);
  Prelude_build_USfold_hnf(root);
  debug(LOW, "leaving concatMap\n");
  debug_expr(LOW, root);
  return;
}

// concatMap
Node* Prelude_concatMap_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF concatMap:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_concatMap_HTP1(v2, (field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v5 = make_Prelude_concatMap_HTP2((field)(Node*)NULL, 1);
  set_Prelude_build_USfold(root, v4, v5, v3, 0);
  backup = Prelude_build_USfold_RET_hnf(backup);
  debug(LOW, "leaving concatMap\n");
  debug_expr(LOW, root);
  return backup;
}

// concatMap#P2
void Prelude_concatMap_HTP2_hnf(field root)
{
  debug(LOW, "HNF concatMap#P2:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving concatMap#P2\n");
  debug_expr(LOW, root);
  return;
}

// concatMap#P2 at []
void Prelude_concatMap_HTP2__hnf(field root)
{
  debug(LOW, "HNF concatMap#P2@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving concatMap#P2\n");
  debug_expr(LOW, root);
  return;
}

// concatMap#P2
Node* Prelude_concatMap_HTP2_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF concatMap#P2:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving concatMap#P2\n");
  debug_expr(LOW, root);
  return backup;
}

// concatMap#P1
void Prelude_concatMap_HTP1_hnf(field root)
{
  debug(LOW, "HNF concatMap#P1:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_apply1(v2, v4);
  set_Prelude_foldr(root, v3, v5, v6, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving concatMap#P1\n");
  debug_expr(LOW, root);
  return;
}

// concatMap#P1
Node* Prelude_concatMap_HTP1_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF concatMap#P1:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_apply1(v2, v4);
  set_Prelude_foldr(root, v3, v5, v6, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving concatMap#P1\n");
  debug_expr(LOW, root);
  return backup;
}

// break
void Prelude_break_hnf(field root)
{
  debug(LOW, "HNF break:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_break_HTP3(v2, (field)(Node*)NULL, 1);
  set_Prelude_span(root, v4, v3, 0);
  Prelude_span_hnf(root);
  debug(LOW, "leaving break\n");
  debug_expr(LOW, root);
  return;
}

// break
Node* Prelude_break_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF break:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_break_HTP3(v2, (field)(Node*)NULL, 1);
  set_Prelude_span(root, v4, v3, 0);
  backup = Prelude_span_RET_hnf(backup);
  debug(LOW, "leaving break\n");
  debug_expr(LOW, root);
  return backup;
}

// break#P3
void Prelude_break_HTP3_hnf(field root)
{
  debug(LOW, "HNF break#P3:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_apply1(v2, v3);
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
            save(root, make_Prelude_break_HTP3_(v4, 0));
          }
          fail(root);
          debug(LOW, "leaving break#P3\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_break_HTP3_(v4, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving break#P3\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_break_HTP3_(v4, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving break#P3\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// break#P3 at []
void Prelude_break_HTP3__hnf(field root)
{
  debug(LOW, "HNF break#P3@[]\n");
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
            save(root, make_Prelude_break_HTP3_(v4, 0));
          }
          fail(root);
          debug(LOW, "leaving break#P3\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_break_HTP3_(v4, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving break#P3\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_break_HTP3_(v4, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving break#P3\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// break#P3
Node* Prelude_break_HTP3_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF break#P3:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_apply1(v2, v3);
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
            backup = save_RET(backup, make_Prelude_break_HTP3_(v4, 0));
          }
          fail(root);
          debug(LOW, "leaving break#P3\n");
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
            backup = save_RET(backup, make_Prelude_break_HTP3_(v4, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving break#P3\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_break_HTP3_(v4, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving break#P3\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// replicate
void Prelude_replicate_hnf(field root)
{
  debug(LOW, "HNF replicate:\n");
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
            save(root, make_Prelude_replicate_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving replicate\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_replicate_(v2, v3, 0));
          }
          field v4;
          field v5;
          field v6;
          v4 = child_at(scrutinee, 0);
          v5 = make_Prelude_repeat_USbuild(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          v6 = make_Prelude_build(v5, 0);
          set_Prelude_take_HTworker(root, v6, v4, 0);
          Prelude_take_HTworker_hnf(root);
          debug(LOW, "leaving replicate\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// replicate at []
void Prelude_replicate__hnf(field root)
{
  debug(LOW, "HNF replicate@[]\n");
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
            save(root, make_Prelude_replicate_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving replicate\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_replicate_(v2, v3, 0));
          }
          field v4;
          field v5;
          field v6;
          v4 = child_at(scrutinee, 0);
          v5 = make_Prelude_repeat_USbuild(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          v6 = make_Prelude_build(v5, 0);
          set_Prelude_take_HTworker(root, v6, v4, 0);
          Prelude_take_HTworker_hnf(root);
          debug(LOW, "leaving replicate\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// replicate
Node* Prelude_replicate_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF replicate:\n");
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
            backup = save_RET(backup, make_Prelude_replicate_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving replicate\n");
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
            backup = save_RET(backup, make_Prelude_replicate_(v2, v3, 0));
          }
          field v4;
          field v5;
          field v6;
          v4 = child_at(scrutinee, 0);
          v5 = make_Prelude_repeat_USbuild(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          v6 = make_Prelude_build(v5, 0);
          set_Prelude_take_HTworker(root, v6, v4, 0);
          backup = Prelude_take_HTworker_RET_hnf(backup);
          debug(LOW, "leaving replicate\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of > in Ord for []
void Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _impl#>#Prelude.Ord#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(RET, v2, v3, v4, 0);
  v5 = RET;
  {
    bool nondet = false;
    field backup5 = (field)Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup5.n != NULL)
    {
      nondet = true;
      memcpy(backup5.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup5 = RET.n->children[0];
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
            save(root, make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#>#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            backup5.n = make_restore(backup5.n);
            push_frame(backup5, free_var());
            push_choice(backup5, make_Prelude_GT_free());
            push_choice(backup5, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_GT_free());
            push_choice(scrutinee, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#>#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#>#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#>#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of > in Ord for [] at []
void Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB__hnf(field root)
{
  debug(LOW, "HNF _impl#>#Prelude.Ord#[]@[]\n");
  debug_expr(LOW, root);
  field v5;
  v5 = child_at(root, 0);
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
            save(root, make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#>#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          push_choice(scrutinee, make_Prelude_GT_free());
          push_choice(scrutinee, make_Prelude_EQ_free());
          set_Prelude_LT_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#>#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#>#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#>#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of > in Ord for []
Node* Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#>#Prelude.Ord#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(RET, v2, v3, v4, 0);
  v5 = RET;
  {
    bool nondet = false;
    field backup5 = (field)Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup5.n != NULL)
    {
      nondet = true;
      memcpy(backup5.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup5 = RET.n->children[0];
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
            backup = save_RET(backup, make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#>#Prelude.Ord#[]\n");
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
            backup5.n = make_restore(backup5.n);
            push_frame(backup5, free_var());
            push_choice(backup5, make_Prelude_GT_free());
            push_choice(backup5, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_GT_free());
            push_choice(scrutinee, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#>#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#>#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#>#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of < in Ord for []
void Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _impl#<#Prelude.Ord#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(RET, v2, v3, v4, 0);
  v5 = RET;
  {
    bool nondet = false;
    field backup5 = (field)Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup5.n != NULL)
    {
      nondet = true;
      memcpy(backup5.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup5 = RET.n->children[0];
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
            save(root, make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#<#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            backup5.n = make_restore(backup5.n);
            push_frame(backup5, free_var());
            push_choice(backup5, make_Prelude_GT_free());
            push_choice(backup5, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_GT_free());
            push_choice(scrutinee, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#<#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#<#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#<#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of < in Ord for [] at []
void Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB__hnf(field root)
{
  debug(LOW, "HNF _impl#<#Prelude.Ord#[]@[]\n");
  debug_expr(LOW, root);
  field v5;
  v5 = child_at(root, 0);
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
            save(root, make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#<#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          push_choice(scrutinee, make_Prelude_GT_free());
          push_choice(scrutinee, make_Prelude_EQ_free());
          set_Prelude_LT_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#<#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#<#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#<#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of < in Ord for []
Node* Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#<#Prelude.Ord#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(RET, v2, v3, v4, 0);
  v5 = RET;
  {
    bool nondet = false;
    field backup5 = (field)Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup5.n != NULL)
    {
      nondet = true;
      memcpy(backup5.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup5 = RET.n->children[0];
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
            backup = save_RET(backup, make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#<#Prelude.Ord#[]\n");
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
            backup5.n = make_restore(backup5.n);
            push_frame(backup5, free_var());
            push_choice(backup5, make_Prelude_GT_free());
            push_choice(backup5, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_GT_free());
            push_choice(scrutinee, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#<#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#<#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#<#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of >= in Ord for []
void Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _impl#>=#Prelude.Ord#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(RET, v2, v3, v4, 0);
  v5 = RET;
  {
    bool nondet = false;
    field backup5 = (field)Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup5.n != NULL)
    {
      nondet = true;
      memcpy(backup5.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup5 = RET.n->children[0];
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
            save(root, make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#>=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            backup5.n = make_restore(backup5.n);
            push_frame(backup5, free_var());
            push_choice(backup5, make_Prelude_GT_free());
            push_choice(backup5, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_GT_free());
            push_choice(scrutinee, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#>=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#>=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#>=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of >= in Ord for [] at []
void Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB__hnf(field root)
{
  debug(LOW, "HNF _impl#>=#Prelude.Ord#[]@[]\n");
  debug_expr(LOW, root);
  field v5;
  v5 = child_at(root, 0);
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
            save(root, make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#>=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          push_choice(scrutinee, make_Prelude_GT_free());
          push_choice(scrutinee, make_Prelude_EQ_free());
          set_Prelude_LT_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#>=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#>=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#>=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of >= in Ord for []
Node* Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#>=#Prelude.Ord#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(RET, v2, v3, v4, 0);
  v5 = RET;
  {
    bool nondet = false;
    field backup5 = (field)Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup5.n != NULL)
    {
      nondet = true;
      memcpy(backup5.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup5 = RET.n->children[0];
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
            backup = save_RET(backup, make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#>=#Prelude.Ord#[]\n");
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
            backup5.n = make_restore(backup5.n);
            push_frame(backup5, free_var());
            push_choice(backup5, make_Prelude_GT_free());
            push_choice(backup5, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_GT_free());
            push_choice(scrutinee, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#>=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#>=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#>=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of <= in Ord for []
void Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _impl#<=#Prelude.Ord#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(RET, v2, v3, v4, 0);
  v5 = RET;
  {
    bool nondet = false;
    field backup5 = (field)Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup5.n != NULL)
    {
      nondet = true;
      memcpy(backup5.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup5 = RET.n->children[0];
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
            save(root, make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#<=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            backup5.n = make_restore(backup5.n);
            push_frame(backup5, free_var());
            push_choice(backup5, make_Prelude_GT_free());
            push_choice(backup5, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_GT_free());
            push_choice(scrutinee, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#<=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#<=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#<=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of <= in Ord for [] at []
void Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB__hnf(field root)
{
  debug(LOW, "HNF _impl#<=#Prelude.Ord#[]@[]\n");
  debug_expr(LOW, root);
  field v5;
  v5 = child_at(root, 0);
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
            save(root, make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#<=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          push_choice(scrutinee, make_Prelude_GT_free());
          push_choice(scrutinee, make_Prelude_EQ_free());
          set_Prelude_LT_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#<=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#<=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_(v5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#<=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of <= in Ord for []
Node* Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#<=#Prelude.Ord#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(RET, v2, v3, v4, 0);
  v5 = RET;
  {
    bool nondet = false;
    field backup5 = (field)Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup5.n != NULL)
    {
      nondet = true;
      memcpy(backup5.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup5 = RET.n->children[0];
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
            backup = save_RET(backup, make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#<=#Prelude.Ord#[]\n");
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
            backup5.n = make_restore(backup5.n);
            push_frame(backup5, free_var());
            push_choice(backup5, make_Prelude_GT_free());
            push_choice(backup5, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_GT_free());
            push_choice(scrutinee, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#<=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#<=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#<=#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of max in Ord for []
void Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _impl#max#Prelude.Ord#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(RET, v2, v3, v4, 0);
  v5 = RET;
  {
    bool nondet = false;
    field backup5 = (field)Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup5.n != NULL)
    {
      nondet = true;
      memcpy(backup5.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup5 = RET.n->children[0];
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
            save(root, make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#max#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            backup5.n = make_restore(backup5.n);
            push_frame(backup5, free_var());
            push_choice(backup5, make_Prelude_GT_free());
            push_choice(backup5, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_GT_free());
            push_choice(scrutinee, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving _impl#max#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving _impl#max#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving _impl#max#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of max in Ord for [] at []
void Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__hnf(field root)
{
  debug(LOW, "HNF _impl#max#Prelude.Ord#[]@[]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
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
            save(root, make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#max#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          push_choice(scrutinee, make_Prelude_GT_free());
          push_choice(scrutinee, make_Prelude_EQ_free());
          set_Prelude_LT_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, v5, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving _impl#max#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving _impl#max#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, v5, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving _impl#max#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of max in Ord for [] at [0]
void Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__0_hnf(field root)
{
  debug(LOW, "HNF _impl#max#Prelude.Ord#[]@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving _impl#max#Prelude.Ord#[]\n");
  debug_expr(LOW, root);
  return;
}

// implementation of max in Ord for [] at [1]
void Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__1_hnf(field root)
{
  debug(LOW, "HNF _impl#max#Prelude.Ord#[]@[1]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving _impl#max#Prelude.Ord#[]\n");
  debug_expr(LOW, root);
  return;
}

// implementation of max in Ord for [] at [2]
void Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB__2_hnf(field root)
{
  debug(LOW, "HNF _impl#max#Prelude.Ord#[]@[2]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving _impl#max#Prelude.Ord#[]\n");
  debug_expr(LOW, root);
  return;
}

// implementation of max in Ord for []
Node* Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#max#Prelude.Ord#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(RET, v2, v3, v4, 0);
  v5 = RET;
  {
    bool nondet = false;
    field backup5 = (field)Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup5.n != NULL)
    {
      nondet = true;
      memcpy(backup5.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup5 = RET.n->children[0];
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
            backup = save_RET(backup, make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#max#Prelude.Ord#[]\n");
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
            backup5.n = make_restore(backup5.n);
            push_frame(backup5, free_var());
            push_choice(backup5, make_Prelude_GT_free());
            push_choice(backup5, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_GT_free());
            push_choice(scrutinee, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving _impl#max#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving _impl#max#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving _impl#max#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of min in Ord for []
void Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _impl#min#Prelude.Ord#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(RET, v2, v3, v4, 0);
  v5 = RET;
  {
    bool nondet = false;
    field backup5 = (field)Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup5.n != NULL)
    {
      nondet = true;
      memcpy(backup5.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup5 = RET.n->children[0];
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
            save(root, make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#min#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            backup5.n = make_restore(backup5.n);
            push_frame(backup5, free_var());
            push_choice(backup5, make_Prelude_GT_free());
            push_choice(backup5, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_GT_free());
            push_choice(scrutinee, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving _impl#min#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving _impl#min#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving _impl#min#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of min in Ord for [] at []
void Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__hnf(field root)
{
  debug(LOW, "HNF _impl#min#Prelude.Ord#[]@[]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
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
            save(root, make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#min#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          push_choice(scrutinee, make_Prelude_GT_free());
          push_choice(scrutinee, make_Prelude_EQ_free());
          set_Prelude_LT_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, v5, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving _impl#min#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving _impl#min#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, v5, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving _impl#min#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of min in Ord for [] at [0]
void Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__0_hnf(field root)
{
  debug(LOW, "HNF _impl#min#Prelude.Ord#[]@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving _impl#min#Prelude.Ord#[]\n");
  debug_expr(LOW, root);
  return;
}

// implementation of min in Ord for [] at [1]
void Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__1_hnf(field root)
{
  debug(LOW, "HNF _impl#min#Prelude.Ord#[]@[1]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving _impl#min#Prelude.Ord#[]\n");
  debug_expr(LOW, root);
  return;
}

// implementation of min in Ord for [] at [2]
void Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB__2_hnf(field root)
{
  debug(LOW, "HNF _impl#min#Prelude.Ord#[]@[2]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving _impl#min#Prelude.Ord#[]\n");
  debug_expr(LOW, root);
  return;
}

// implementation of min in Ord for []
Node* Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#min#Prelude.Ord#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(RET, v2, v3, v4, 0);
  v5 = RET;
  {
    bool nondet = false;
    field backup5 = (field)Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup5.n != NULL)
    {
      nondet = true;
      memcpy(backup5.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup5 = RET.n->children[0];
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
            backup = save_RET(backup, make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#min#Prelude.Ord#[]\n");
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
            backup5.n = make_restore(backup5.n);
            push_frame(backup5, free_var());
            push_choice(backup5, make_Prelude_GT_free());
            push_choice(backup5, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
          else
          {
            push_frame(scrutinee, free_var());
            push_choice(scrutinee, make_Prelude_GT_free());
            push_choice(scrutinee, make_Prelude_EQ_free());
            set_Prelude_LT_free(scrutinee);
            nondet = true;
            break;
          }
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving _impl#min#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving _impl#min#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB_(v3, v4, backup5, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving _impl#min#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of /= in Eq for []
void Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _impl#/=#Prelude.Eq#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(RET, v2, v3, v4, 0);
  v5 = RET;
  {
    bool nondet = false;
    field backup5 = (field)Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup5.n != NULL)
    {
      nondet = true;
      memcpy(backup5.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup5 = RET.n->children[0];
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
            save(root, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_(backup5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            backup5.n = make_restore(backup5.n);
            push_frame(backup5, free_var());
            push_choice(backup5, make_Prelude_False_free());
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
            save(root, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of /= in Eq for [] at []
void Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB__hnf(field root)
{
  debug(LOW, "HNF _impl#/=#Prelude.Eq#[]@[]\n");
  debug_expr(LOW, root);
  field v5;
  v5 = child_at(root, 0);
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
            save(root, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_(v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_(v5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_(v5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of /= in Eq for []
Node* Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#/=#Prelude.Eq#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(RET, v2, v3, v4, 0);
  v5 = RET;
  {
    bool nondet = false;
    field backup5 = (field)Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(NULL);
    field scrutinee = RET;
    if(backup5.n != NULL)
    {
      nondet = true;
      memcpy(backup5.n, RET.n, sizeof(Node));
    }
    else if(RET.n->symbol->tag == FORWARD_TAG)
    {
      backup5 = RET.n->children[0];
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
            backup = save_RET(backup, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_(backup5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#[]\n");
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
            backup5.n = make_restore(backup5.n);
            push_frame(backup5, free_var());
            push_choice(backup5, make_Prelude_False_free());
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
            backup = save_RET(backup, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB_(backup5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#/=#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// instance of Eq for []
void Prelude__USinst_HTPrelude_DOEq_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Eq#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude__USDict_HTEq(root, v3, v4, 0);
  debug(LOW, "leaving _inst#Prelude.Eq#[]\n");
  debug_expr(LOW, root);
  return;
}

// instance of Eq for []
Node* Prelude__USinst_HTPrelude_DOEq_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Eq#[]:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude__USDict_HTEq(root, v3, v4, 0);
  debug(LOW, "leaving _inst#Prelude.Eq#[]\n");
  debug_expr(LOW, root);
  return backup;
}

// instance of Ord for []
void Prelude__USinst_HTPrelude_DOOrd_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Ord#[]:\n");
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
  v2 = child_at(root, 0);
  v3 = make_Prelude__USsuper_HTPrelude_DOOrd_HTPrelude_DOEq(v2, 0);
  v4 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USDict_HTEq(v4, v5, 0);
  v7 = make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v9 = make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v10 = make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v11 = make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v12 = make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v13 = make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude__USDict_HTOrd(root, v6, v7, v8, v9, v10, v11, v12, v13, 0);
  debug(LOW, "leaving _inst#Prelude.Ord#[]\n");
  debug_expr(LOW, root);
  return;
}

// instance of Ord for []
Node* Prelude__USinst_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Ord#[]:\n");
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
  v2 = child_at(root, 0);
  v3 = make_Prelude__USsuper_HTPrelude_DOOrd_HTPrelude_DOEq(v2, 0);
  v4 = make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HT_FS_EQ_HTPrelude_DOEq_HT_LB_RB(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v6 = make_Prelude__USDict_HTEq(v4, v5, 0);
  v7 = make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = make_Prelude__USimpl_HT_LT_EQ_HTPrelude_DOOrd_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v9 = make_Prelude__USimpl_HT_GT_EQ_HTPrelude_DOOrd_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v10 = make_Prelude__USimpl_HT_LT_HTPrelude_DOOrd_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v11 = make_Prelude__USimpl_HT_GT_HTPrelude_DOOrd_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v12 = make_Prelude__USimpl_HTmin_HTPrelude_DOOrd_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v13 = make_Prelude__USimpl_HTmax_HTPrelude_DOOrd_HT_LB_RB(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude__USDict_HTOrd(root, v6, v7, v8, v9, v10, v11, v12, v13, 0);
  debug(LOW, "leaving _inst#Prelude.Ord#[]\n");
  debug_expr(LOW, root);
  return backup;
}

// fromEnum
void Prelude_fromEnum_hnf(field root)
{
  debug(LOW, "HNF fromEnum:\n");
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
            save(root, make_Prelude_fromEnum_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fromEnum\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_fromEnum_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v6);
          debug(LOW, "leaving fromEnum\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// fromEnum at []
void Prelude_fromEnum__hnf(field root)
{
  debug(LOW, "HNF fromEnum@[]\n");
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
            save(root, make_Prelude_fromEnum_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fromEnum\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_fromEnum_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v6);
          debug(LOW, "leaving fromEnum\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// fromEnum at [0]
void Prelude_fromEnum__0_hnf(field root)
{
  debug(LOW, "HNF fromEnum@[0]\n");
  debug_expr(LOW, root);
  field v6;
  v6 = child_at(root, 0);
  set_forward(root, v6);
  debug(LOW, "leaving fromEnum\n");
  debug_expr(LOW, root);
  return;
}

// fromEnum
Node* Prelude_fromEnum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF fromEnum:\n");
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
            backup = save_RET(backup, make_Prelude_fromEnum_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving fromEnum\n");
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_fromEnum_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v6);
          debug(LOW, "leaving fromEnum\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// toEnum
void Prelude_toEnum_hnf(field root)
{
  debug(LOW, "HNF toEnum:\n");
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
            save(root, make_Prelude_toEnum_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving toEnum\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_toEnum_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v5);
          debug(LOW, "leaving toEnum\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// toEnum at []
void Prelude_toEnum__hnf(field root)
{
  debug(LOW, "HNF toEnum@[]\n");
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
            save(root, make_Prelude_toEnum_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving toEnum\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_toEnum_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v5);
          debug(LOW, "leaving toEnum\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// toEnum at [0]
void Prelude_toEnum__0_hnf(field root)
{
  debug(LOW, "HNF toEnum@[0]\n");
  debug_expr(LOW, root);
  field v5;
  v5 = child_at(root, 0);
  set_forward(root, v5);
  debug(LOW, "leaving toEnum\n");
  debug_expr(LOW, root);
  return;
}

// toEnum
Node* Prelude_toEnum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF toEnum:\n");
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
            backup = save_RET(backup, make_Prelude_toEnum_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving toEnum\n");
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
          set_Prelude__USDict_HTEnum_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTEnum_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_toEnum_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v5);
          debug(LOW, "leaving toEnum\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// default for succ in Enum
void Prelude__USdef_HTsucc_HTPrelude_DOEnum_hnf(field root)
{
  debug(LOW, "HNF _def#succ#Prelude.Enum:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_toEnum(v2, 0);
  v5 = make_Prelude_fromEnum(v2, 0);
  v6 = make_apply1(v5, v3);
  v7 = make_Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0(v6, 0);
  set_apply1(root, v4, v7);
  apply_hnf(root);
  debug(LOW, "leaving _def#succ#Prelude.Enum\n");
  debug_expr(LOW, root);
  return;
}

// default for succ in Enum
Node* Prelude__USdef_HTsucc_HTPrelude_DOEnum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#succ#Prelude.Enum:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_toEnum(v2, 0);
  v5 = make_Prelude_fromEnum(v2, 0);
  v6 = make_apply1(v5, v3);
  v7 = make_Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0(v6, 0);
  set_apply1(root, v4, v7);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _def#succ#Prelude.Enum\n");
  debug_expr(LOW, root);
  return backup;
}

// default for succ in Enum
void Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_hnf(field root)
{
  debug(LOW, "HNF _def#succ#Prelude.Enum#A0:\n");
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
            save(root, make_Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#succ#Prelude.Enum#A0\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.i + 1);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _def#succ#Prelude.Enum#A0\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for succ in Enum at []
void Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0__hnf(field root)
{
  debug(LOW, "HNF _def#succ#Prelude.Enum#A0@[]\n");
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
            save(root, make_Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#succ#Prelude.Enum#A0\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.i + 1);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _def#succ#Prelude.Enum#A0\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for succ in Enum
Node* Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#succ#Prelude.Enum#A0:\n");
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
            backup = save_RET(backup, make_Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#succ#Prelude.Enum#A0\n");
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
            backup = save_RET(backup, make_Prelude__USdef_HTsucc_HTPrelude_DOEnum_HTA0_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.i + 1);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _def#succ#Prelude.Enum#A0\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// maxBound
void Prelude_maxBound_hnf(field root)
{
  debug(LOW, "HNF maxBound:\n");
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
            save(root, make_Prelude_maxBound_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving maxBound\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTBounded_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTBounded_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_maxBound_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v4);
          debug(LOW, "leaving maxBound\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// maxBound at []
void Prelude_maxBound__hnf(field root)
{
  debug(LOW, "HNF maxBound@[]\n");
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
            save(root, make_Prelude_maxBound_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving maxBound\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTBounded_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTBounded_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_maxBound_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v4);
          debug(LOW, "leaving maxBound\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// maxBound at [0]
void Prelude_maxBound__0_hnf(field root)
{
  debug(LOW, "HNF maxBound@[0]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving maxBound\n");
  debug_expr(LOW, root);
  return;
}

// maxBound
Node* Prelude_maxBound_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF maxBound:\n");
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
            backup = save_RET(backup, make_Prelude_maxBound_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving maxBound\n");
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
          set_Prelude__USDict_HTBounded_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTBounded_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_maxBound_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v4);
          debug(LOW, "leaving maxBound\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// minBound
void Prelude_minBound_hnf(field root)
{
  debug(LOW, "HNF minBound:\n");
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
            save(root, make_Prelude_minBound_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving minBound\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTBounded_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTBounded_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_minBound_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v3);
          debug(LOW, "leaving minBound\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// minBound at []
void Prelude_minBound__hnf(field root)
{
  debug(LOW, "HNF minBound@[]\n");
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
            save(root, make_Prelude_minBound_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving minBound\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTBounded_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTBounded_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_minBound_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v3);
          debug(LOW, "leaving minBound\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// minBound at [0]
void Prelude_minBound__0_hnf(field root)
{
  debug(LOW, "HNF minBound@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving minBound\n");
  debug_expr(LOW, root);
  return;
}

// minBound
Node* Prelude_minBound_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF minBound:\n");
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
            backup = save_RET(backup, make_Prelude_minBound_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving minBound\n");
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
          set_Prelude__USDict_HTBounded_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTBounded_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_minBound_(v2, 0));
          }
          field v3;
          field v4;
          v4 = child_at(scrutinee, 0);
          v3 = child_at(scrutinee, 1);
          set_forward(root, v3);
          debug(LOW, "leaving minBound\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// or
void Prelude_or_hnf(field root)
{
  debug(LOW, "HNF or:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude__OR_OR((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude_False(0);
  set_Prelude_foldr(root, v3, v4, v2, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving or\n");
  debug_expr(LOW, root);
  return;
}

// or
Node* Prelude_or_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF or:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude__OR_OR((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude_False(0);
  set_Prelude_foldr(root, v3, v4, v2, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving or\n");
  debug_expr(LOW, root);
  return backup;
}

// any
void Prelude_any_hnf(field root)
{
  debug(LOW, "HNF any:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_any_HTP4(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude_False(0);
  set_Prelude_foldr(root, v4, v5, v3, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving any\n");
  debug_expr(LOW, root);
  return;
}

// any
Node* Prelude_any_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF any:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_any_HTP4(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude_False(0);
  set_Prelude_foldr(root, v4, v5, v3, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving any\n");
  debug_expr(LOW, root);
  return backup;
}

// any#P4
void Prelude_any_HTP4_hnf(field root)
{
  debug(LOW, "HNF any#P4:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v2, v3);
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
            save(root, make_Prelude_any_HTP4_(v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving any#P4\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_any_HTP4_(v4, v5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving any#P4\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_any_HTP4_(v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving any#P4\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// any#P4 at []
void Prelude_any_HTP4__hnf(field root)
{
  debug(LOW, "HNF any#P4@[]\n");
  debug_expr(LOW, root);
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
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
            save(root, make_Prelude_any_HTP4_(v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving any#P4\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_any_HTP4_(v4, v5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving any#P4\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_any_HTP4_(v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving any#P4\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// any#P4 at [1]
void Prelude_any_HTP4__1_hnf(field root)
{
  debug(LOW, "HNF any#P4@[1]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving any#P4\n");
  debug_expr(LOW, root);
  return;
}

// any#P4
Node* Prelude_any_HTP4_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF any#P4:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v2, v3);
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
            backup = save_RET(backup, make_Prelude_any_HTP4_(v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving any#P4\n");
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
            backup = save_RET(backup, make_Prelude_any_HTP4_(v4, v5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving any#P4\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_any_HTP4_(v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving any#P4\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// elem
void Prelude_elem_hnf(field root)
{
  debug(LOW, "HNF elem:\n");
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
  v5 = make_Prelude__EQ_EQ(v2, 0);
  v6 = make_apply1(v5, v3);
  v7 = make_Prelude_elem_HTP5(v6, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = make_Prelude_False(0);
  set_Prelude_foldr(root, v7, v8, v4, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving elem\n");
  debug_expr(LOW, root);
  return;
}

// elem
Node* Prelude_elem_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF elem:\n");
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
  v5 = make_Prelude__EQ_EQ(v2, 0);
  v6 = make_apply1(v5, v3);
  v7 = make_Prelude_elem_HTP5(v6, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = make_Prelude_False(0);
  set_Prelude_foldr(root, v7, v8, v4, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving elem\n");
  debug_expr(LOW, root);
  return backup;
}

// elem#P5
void Prelude_elem_HTP5_hnf(field root)
{
  debug(LOW, "HNF elem#P5:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v2, v3);
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
            save(root, make_Prelude_elem_HTP5_(v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving elem#P5\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_elem_HTP5_(v4, v5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving elem#P5\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_elem_HTP5_(v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving elem#P5\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// elem#P5 at []
void Prelude_elem_HTP5__hnf(field root)
{
  debug(LOW, "HNF elem#P5@[]\n");
  debug_expr(LOW, root);
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
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
            save(root, make_Prelude_elem_HTP5_(v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving elem#P5\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_elem_HTP5_(v4, v5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving elem#P5\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_elem_HTP5_(v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving elem#P5\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// elem#P5 at [1]
void Prelude_elem_HTP5__1_hnf(field root)
{
  debug(LOW, "HNF elem#P5@[1]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving elem#P5\n");
  debug_expr(LOW, root);
  return;
}

// elem#P5
Node* Prelude_elem_HTP5_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF elem#P5:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v2, v3);
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
            backup = save_RET(backup, make_Prelude_elem_HTP5_(v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving elem#P5\n");
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
            backup = save_RET(backup, make_Prelude_elem_HTP5_(v4, v5, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving elem#P5\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_elem_HTP5_(v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving elem#P5\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// and
void Prelude_and_hnf(field root)
{
  debug(LOW, "HNF and:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude__AN_AN((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude_True(0);
  set_Prelude_foldr(root, v3, v4, v2, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving and\n");
  debug_expr(LOW, root);
  return;
}

// and
Node* Prelude_and_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF and:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude__AN_AN((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude_True(0);
  set_Prelude_foldr(root, v3, v4, v2, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving and\n");
  debug_expr(LOW, root);
  return backup;
}

// all
void Prelude_all_hnf(field root)
{
  debug(LOW, "HNF all:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_all_HTP6(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude_True(0);
  set_Prelude_foldr(root, v4, v5, v3, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving all\n");
  debug_expr(LOW, root);
  return;
}

// all
Node* Prelude_all_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF all:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_all_HTP6(v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude_True(0);
  set_Prelude_foldr(root, v4, v5, v3, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving all\n");
  debug_expr(LOW, root);
  return backup;
}

// all#P6
void Prelude_all_HTP6_hnf(field root)
{
  debug(LOW, "HNF all#P6:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v2, v3);
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
            save(root, make_Prelude_all_HTP6_(v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving all#P6\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_all_HTP6_(v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving all#P6\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_all_HTP6_(v4, v5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving all#P6\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// all#P6 at []
void Prelude_all_HTP6__hnf(field root)
{
  debug(LOW, "HNF all#P6@[]\n");
  debug_expr(LOW, root);
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
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
            save(root, make_Prelude_all_HTP6_(v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving all#P6\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_all_HTP6_(v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving all#P6\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_all_HTP6_(v4, v5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving all#P6\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// all#P6 at [0]
void Prelude_all_HTP6__0_hnf(field root)
{
  debug(LOW, "HNF all#P6@[0]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving all#P6\n");
  debug_expr(LOW, root);
  return;
}

// all#P6
Node* Prelude_all_HTP6_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF all#P6:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v2, v3);
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
            backup = save_RET(backup, make_Prelude_all_HTP6_(v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving all#P6\n");
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
            backup = save_RET(backup, make_Prelude_all_HTP6_(v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving all#P6\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_all_HTP6_(v4, v5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving all#P6\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// notElem
void Prelude_notElem_hnf(field root)
{
  debug(LOW, "HNF notElem:\n");
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
  v5 = make_Prelude__FS_EQ(v2, 0);
  v6 = make_apply1(v5, v3);
  v7 = make_Prelude_notElem_HTP7(v6, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = make_Prelude_True(0);
  set_Prelude_foldr(root, v7, v8, v4, 0);
  Prelude_foldr_hnf(root);
  debug(LOW, "leaving notElem\n");
  debug_expr(LOW, root);
  return;
}

// notElem
Node* Prelude_notElem_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF notElem:\n");
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
  v5 = make_Prelude__FS_EQ(v2, 0);
  v6 = make_apply1(v5, v3);
  v7 = make_Prelude_notElem_HTP7(v6, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = make_Prelude_True(0);
  set_Prelude_foldr(root, v7, v8, v4, 0);
  backup = Prelude_foldr_RET_hnf(backup);
  debug(LOW, "leaving notElem\n");
  debug_expr(LOW, root);
  return backup;
}

// notElem#P7
void Prelude_notElem_HTP7_hnf(field root)
{
  debug(LOW, "HNF notElem#P7:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v2, v3);
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
            save(root, make_Prelude_notElem_HTP7_(v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving notElem#P7\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_notElem_HTP7_(v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving notElem#P7\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_notElem_HTP7_(v4, v5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving notElem#P7\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// notElem#P7 at []
void Prelude_notElem_HTP7__hnf(field root)
{
  debug(LOW, "HNF notElem#P7@[]\n");
  debug_expr(LOW, root);
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
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
            save(root, make_Prelude_notElem_HTP7_(v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving notElem#P7\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_notElem_HTP7_(v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving notElem#P7\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_notElem_HTP7_(v4, v5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving notElem#P7\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// notElem#P7 at [0]
void Prelude_notElem_HTP7__0_hnf(field root)
{
  debug(LOW, "HNF notElem#P7@[0]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving notElem#P7\n");
  debug_expr(LOW, root);
  return;
}

// notElem#P7
Node* Prelude_notElem_HTP7_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF notElem#P7:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_apply1(v2, v3);
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
            backup = save_RET(backup, make_Prelude_notElem_HTP7_(v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving notElem#P7\n");
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
            backup = save_RET(backup, make_Prelude_notElem_HTP7_(v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving notElem#P7\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_notElem_HTP7_(v4, v5, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving notElem#P7\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// anyOf
void Prelude_anyOf_hnf(field root)
{
  debug(LOW, "HNF anyOf:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude__QU((field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr1(root, v3, v2, 0);
  Prelude_foldr1_hnf(root);
  debug(LOW, "leaving anyOf\n");
  debug_expr(LOW, root);
  return;
}

// anyOf
Node* Prelude_anyOf_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF anyOf:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = child_at(root, 0);
  v3 = make_Prelude__QU((field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_foldr1(root, v3, v2, 0);
  backup = Prelude_foldr1_RET_hnf(backup);
  debug(LOW, "leaving anyOf\n");
  debug_expr(LOW, root);
  return backup;
}

// reverse
void Prelude_reverse_hnf(field root)
{
  debug(LOW, "HNF reverse:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_reverse_HTP8((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__LB_RB(0);
  set_Prelude_foldl(root, v3, v4, v2, 0);
  Prelude_foldl_hnf(root);
  debug(LOW, "leaving reverse\n");
  debug_expr(LOW, root);
  return;
}

// reverse
Node* Prelude_reverse_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF reverse:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude_reverse_HTP8((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__LB_RB(0);
  set_Prelude_foldl(root, v3, v4, v2, 0);
  backup = Prelude_foldl_RET_hnf(backup);
  debug(LOW, "leaving reverse\n");
  debug_expr(LOW, root);
  return backup;
}

// reverse#P8
void Prelude_reverse_HTP8_hnf(field root)
{
  debug(LOW, "HNF reverse#P8:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_Prelude__CO(root, v3, v2, 0);
  debug(LOW, "leaving reverse#P8\n");
  debug_expr(LOW, root);
  return;
}

// reverse#P8
Node* Prelude_reverse_HTP8_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF reverse#P8:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  set_Prelude__CO(root, v3, v2, 0);
  debug(LOW, "leaving reverse#P8\n");
  debug_expr(LOW, root);
  return backup;
}

// foldl1
void Prelude_foldl1_hnf(field root)
{
  debug(LOW, "HNF foldl1:\n");
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
            save(root, make_Prelude_foldl1_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving foldl1\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_foldl1_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving foldl1\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldl1_(v2, v3, 0));
          }
          field v4;
          field v5;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          set_Prelude_foldl(root, v2, v4, v5, 0);
          Prelude_foldl_hnf(root);
          debug(LOW, "leaving foldl1\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// foldl1 at []
void Prelude_foldl1__hnf(field root)
{
  debug(LOW, "HNF foldl1@[]\n");
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
            save(root, make_Prelude_foldl1_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving foldl1\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_foldl1_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving foldl1\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldl1_(v2, v3, 0));
          }
          field v4;
          field v5;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          set_Prelude_foldl(root, v2, v4, v5, 0);
          Prelude_foldl_hnf(root);
          debug(LOW, "leaving foldl1\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// foldl1
Node* Prelude_foldl1_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF foldl1:\n");
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
            backup = save_RET(backup, make_Prelude_foldl1_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving foldl1\n");
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
            backup = save_RET(backup, make_Prelude_foldl1_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving foldl1\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_foldl1_(v2, v3, 0));
          }
          field v4;
          field v5;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          set_Prelude_foldl(root, v2, v4, v5, 0);
          backup = Prelude_foldl_RET_hnf(backup);
          debug(LOW, "leaving foldl1\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of enumFromThenTo in Enum for Int
void Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromThenTo#Prelude.Enum#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt(v3, v2, 0);
  v6 = make_Prelude_enumFromThenTo_USbuild(v2, v5, v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v6, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving _impl#enumFromThenTo#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFromThenTo in Enum for Int
Node* Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromThenTo#Prelude.Enum#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt(v3, v2, 0);
  v6 = make_Prelude_enumFromThenTo_USbuild(v2, v5, v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v6, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFromThenTo#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return backup;
}

// boundedEnumFromThen
void Prelude_boundedEnumFromThen_hnf(field root)
{
  debug(LOW, "HNF boundedEnumFromThen:\n");
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
  v6 = make_Prelude_fromEnum(v3, 0);
  v7 = make_apply1(v6, v4);
  {
    bool nondet = false;
    field scrutinee = v7;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_boundedEnumFromThen_(v2, v3, v5, v7, 0));
          }
          fail(root);
          debug(LOW, "leaving boundedEnumFromThen\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_boundedEnumFromThen_(v2, v3, v5, v7, 0));
          }
          field v8;
          field v9;
          field v10;
          v8 = child_at(scrutinee, 0);
          v9 = make_Prelude_fromEnum(v3, 0);
          v10 = make_apply1(v9, v5);
          {
            bool nondet = false;
            field scrutinee = v10;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_boundedEnumFromThen__0(v2, v3, v8, v10, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving boundedEnumFromThen\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude_boundedEnumFromThen__0(v2, v3, v8, v10, 0));
                  }
                  field v11;
                  v11 = child_at(scrutinee, 0);
                  if(v8.i <= v11.i)
                  {
                    field v12;
                    field v13;
                    field v14;
                    field v15;
                    field v16;
                    field v17;
                    field v18;
                    field v19;
                    v12 = make_Prelude_toEnum(v3, 0);
                    v13 = make_Prelude_fromEnum(v3, 0);
                    v14 = make_Prelude_maxBound(v2, 0);
                    v15 = make_Prelude__LP_RP(0);
                    v16 = make_apply1(v14, v15);
                    v17 = make_apply1(v13, v16);
                    v18 = (field)(long)(v11.i - v8.i);
                    v19 = make_Prelude_boundedEnumFromThen_HTP9(v8, v12, v17, v18, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                    set_Prelude_build(root, v19, 0);
                    Prelude_build_hnf(root);
                    debug(LOW, "leaving boundedEnumFromThen\n");
                    debug_expr(LOW, root);
                    return;
                  }
                  else
                  {
                    field v20;
                    field v21;
                    field v22;
                    field v23;
                    field v24;
                    field v25;
                    field v26;
                    field v27;
                    v20 = make_Prelude_toEnum(v3, 0);
                    v21 = make_Prelude_fromEnum(v3, 0);
                    v22 = make_Prelude_minBound(v2, 0);
                    v23 = make_Prelude__LP_RP(0);
                    v24 = make_apply1(v22, v23);
                    v25 = make_apply1(v21, v24);
                    v26 = (field)(long)(v11.i - v8.i);
                    v27 = make_Prelude_boundedEnumFromThen_HTP10(v8, v20, v25, v26, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                    set_Prelude_build(root, v27, 0);
                    Prelude_build_hnf(root);
                    debug(LOW, "leaving boundedEnumFromThen\n");
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

// boundedEnumFromThen at []
void Prelude_boundedEnumFromThen__hnf(field root)
{
  debug(LOW, "HNF boundedEnumFromThen@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v5;
  field v7;
  v7 = child_at(root, 0);
  v5 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  {
    bool nondet = false;
    field scrutinee = v7;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_boundedEnumFromThen_(v2, v3, v5, v7, 0));
          }
          fail(root);
          debug(LOW, "leaving boundedEnumFromThen\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_boundedEnumFromThen_(v2, v3, v5, v7, 0));
          }
          field v8;
          field v9;
          field v10;
          v8 = child_at(scrutinee, 0);
          v9 = make_Prelude_fromEnum(v3, 0);
          v10 = make_apply1(v9, v5);
          {
            bool nondet = false;
            field scrutinee = v10;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_boundedEnumFromThen__0(v2, v3, v8, v10, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving boundedEnumFromThen\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude_boundedEnumFromThen__0(v2, v3, v8, v10, 0));
                  }
                  field v11;
                  v11 = child_at(scrutinee, 0);
                  if(v8.i <= v11.i)
                  {
                    field v12;
                    field v13;
                    field v14;
                    field v15;
                    field v16;
                    field v17;
                    field v18;
                    field v19;
                    v12 = make_Prelude_toEnum(v3, 0);
                    v13 = make_Prelude_fromEnum(v3, 0);
                    v14 = make_Prelude_maxBound(v2, 0);
                    v15 = make_Prelude__LP_RP(0);
                    v16 = make_apply1(v14, v15);
                    v17 = make_apply1(v13, v16);
                    v18 = (field)(long)(v11.i - v8.i);
                    v19 = make_Prelude_boundedEnumFromThen_HTP9(v8, v12, v17, v18, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                    set_Prelude_build(root, v19, 0);
                    Prelude_build_hnf(root);
                    debug(LOW, "leaving boundedEnumFromThen\n");
                    debug_expr(LOW, root);
                    return;
                  }
                  else
                  {
                    field v20;
                    field v21;
                    field v22;
                    field v23;
                    field v24;
                    field v25;
                    field v26;
                    field v27;
                    v20 = make_Prelude_toEnum(v3, 0);
                    v21 = make_Prelude_fromEnum(v3, 0);
                    v22 = make_Prelude_minBound(v2, 0);
                    v23 = make_Prelude__LP_RP(0);
                    v24 = make_apply1(v22, v23);
                    v25 = make_apply1(v21, v24);
                    v26 = (field)(long)(v11.i - v8.i);
                    v27 = make_Prelude_boundedEnumFromThen_HTP10(v8, v20, v25, v26, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                    set_Prelude_build(root, v27, 0);
                    Prelude_build_hnf(root);
                    debug(LOW, "leaving boundedEnumFromThen\n");
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

// boundedEnumFromThen at [0]
void Prelude_boundedEnumFromThen__0_hnf(field root)
{
  debug(LOW, "HNF boundedEnumFromThen@[0]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v8;
  field v10;
  v10 = child_at(root, 0);
  v8 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  {
    bool nondet = false;
    field scrutinee = v10;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_boundedEnumFromThen__0(v2, v3, v8, v10, 0));
          }
          fail(root);
          debug(LOW, "leaving boundedEnumFromThen\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_boundedEnumFromThen__0(v2, v3, v8, v10, 0));
          }
          field v11;
          v11 = child_at(scrutinee, 0);
          if(v8.i <= v11.i)
          {
            field v12;
            field v13;
            field v14;
            field v15;
            field v16;
            field v17;
            field v18;
            field v19;
            v12 = make_Prelude_toEnum(v3, 0);
            v13 = make_Prelude_fromEnum(v3, 0);
            v14 = make_Prelude_maxBound(v2, 0);
            v15 = make_Prelude__LP_RP(0);
            v16 = make_apply1(v14, v15);
            v17 = make_apply1(v13, v16);
            v18 = (field)(long)(v11.i - v8.i);
            v19 = make_Prelude_boundedEnumFromThen_HTP9(v8, v12, v17, v18, (field)(Node*)NULL, (field)(Node*)NULL, 2);
            set_Prelude_build(root, v19, 0);
            Prelude_build_hnf(root);
            debug(LOW, "leaving boundedEnumFromThen\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v20;
            field v21;
            field v22;
            field v23;
            field v24;
            field v25;
            field v26;
            field v27;
            v20 = make_Prelude_toEnum(v3, 0);
            v21 = make_Prelude_fromEnum(v3, 0);
            v22 = make_Prelude_minBound(v2, 0);
            v23 = make_Prelude__LP_RP(0);
            v24 = make_apply1(v22, v23);
            v25 = make_apply1(v21, v24);
            v26 = (field)(long)(v11.i - v8.i);
            v27 = make_Prelude_boundedEnumFromThen_HTP10(v8, v20, v25, v26, (field)(Node*)NULL, (field)(Node*)NULL, 2);
            set_Prelude_build(root, v27, 0);
            Prelude_build_hnf(root);
            debug(LOW, "leaving boundedEnumFromThen\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// boundedEnumFromThen
Node* Prelude_boundedEnumFromThen_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF boundedEnumFromThen:\n");
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
  v6 = make_Prelude_fromEnum(v3, 0);
  v7 = make_apply1(v6, v4);
  {
    bool nondet = false;
    field scrutinee = v7;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_boundedEnumFromThen_(v2, v3, v5, v7, 0));
          }
          fail(root);
          debug(LOW, "leaving boundedEnumFromThen\n");
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
            backup = save_RET(backup, make_Prelude_boundedEnumFromThen_(v2, v3, v5, v7, 0));
          }
          field v8;
          field v9;
          field v10;
          v8 = child_at(scrutinee, 0);
          v9 = make_Prelude_fromEnum(v3, 0);
          v10 = make_apply1(v9, v5);
          {
            bool nondet = false;
            field scrutinee = v10;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_boundedEnumFromThen__0(v2, v3, v8, v10, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving boundedEnumFromThen\n");
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
                    backup = save_RET(backup, make_Prelude_boundedEnumFromThen__0(v2, v3, v8, v10, 0));
                  }
                  field v11;
                  v11 = child_at(scrutinee, 0);
                  if(v8.i <= v11.i)
                  {
                    field v12;
                    field v13;
                    field v14;
                    field v15;
                    field v16;
                    field v17;
                    field v18;
                    field v19;
                    v12 = make_Prelude_toEnum(v3, 0);
                    v13 = make_Prelude_fromEnum(v3, 0);
                    v14 = make_Prelude_maxBound(v2, 0);
                    v15 = make_Prelude__LP_RP(0);
                    v16 = make_apply1(v14, v15);
                    v17 = make_apply1(v13, v16);
                    v18 = (field)(long)(v11.i - v8.i);
                    v19 = make_Prelude_boundedEnumFromThen_HTP9(v8, v12, v17, v18, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                    set_Prelude_build(root, v19, 0);
                    backup = Prelude_build_RET_hnf(backup);
                    debug(LOW, "leaving boundedEnumFromThen\n");
                    debug_expr(LOW, root);
                    return backup;
                  }
                  else
                  {
                    field v20;
                    field v21;
                    field v22;
                    field v23;
                    field v24;
                    field v25;
                    field v26;
                    field v27;
                    v20 = make_Prelude_toEnum(v3, 0);
                    v21 = make_Prelude_fromEnum(v3, 0);
                    v22 = make_Prelude_minBound(v2, 0);
                    v23 = make_Prelude__LP_RP(0);
                    v24 = make_apply1(v22, v23);
                    v25 = make_apply1(v21, v24);
                    v26 = (field)(long)(v11.i - v8.i);
                    v27 = make_Prelude_boundedEnumFromThen_HTP10(v8, v20, v25, v26, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                    set_Prelude_build(root, v27, 0);
                    backup = Prelude_build_RET_hnf(backup);
                    debug(LOW, "leaving boundedEnumFromThen\n");
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

// boundedEnumFromThen#P10
void Prelude_boundedEnumFromThen_HTP10_hnf(field root)
{
  debug(LOW, "HNF boundedEnumFromThen#P10:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v7 = child_at(root, 0);
  v6 = child_at(root, 1);
  v5 = child_at(root, 2);
  v4 = child_at(root, 3);
  v3 = child_at(root, 4);
  v2 = child_at(root, 5);
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
            save(root, make_Prelude_boundedEnumFromThen_HTP10_(v2, v3, v4, v5, v6, v7, 0));
          }
          fail(root);
          debug(LOW, "leaving boundedEnumFromThen#P10\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_boundedEnumFromThen_HTP10_(v2, v3, v4, v5, v6, v7, 0));
          }
          field v8;
          field v9;
          v8 = child_at(scrutinee, 0);
          v9 = make_Prelude_map_USmkc(v3, v6, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromThenTo_USbuild_HTworker(root, v9, v7, v2, v5, v8, 0);
          Prelude_enumFromThenTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving boundedEnumFromThen#P10\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// boundedEnumFromThen#P10 at []
void Prelude_boundedEnumFromThen_HTP10__hnf(field root)
{
  debug(LOW, "HNF boundedEnumFromThen#P10@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v7 = child_at(root, 0);
  v6 = child_at(root, 1);
  v5 = child_at(root, 2);
  v4 = child_at(root, 3);
  v3 = child_at(root, 4);
  v2 = child_at(root, 5);
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
            save(root, make_Prelude_boundedEnumFromThen_HTP10_(v2, v3, v4, v5, v6, v7, 0));
          }
          fail(root);
          debug(LOW, "leaving boundedEnumFromThen#P10\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_boundedEnumFromThen_HTP10_(v2, v3, v4, v5, v6, v7, 0));
          }
          field v8;
          field v9;
          v8 = child_at(scrutinee, 0);
          v9 = make_Prelude_map_USmkc(v3, v6, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromThenTo_USbuild_HTworker(root, v9, v7, v2, v5, v8, 0);
          Prelude_enumFromThenTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving boundedEnumFromThen#P10\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// boundedEnumFromThen#P10
Node* Prelude_boundedEnumFromThen_HTP10_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF boundedEnumFromThen#P10:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v7 = child_at(root, 0);
  v6 = child_at(root, 1);
  v5 = child_at(root, 2);
  v4 = child_at(root, 3);
  v3 = child_at(root, 4);
  v2 = child_at(root, 5);
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
            backup = save_RET(backup, make_Prelude_boundedEnumFromThen_HTP10_(v2, v3, v4, v5, v6, v7, 0));
          }
          fail(root);
          debug(LOW, "leaving boundedEnumFromThen#P10\n");
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
            backup = save_RET(backup, make_Prelude_boundedEnumFromThen_HTP10_(v2, v3, v4, v5, v6, v7, 0));
          }
          field v8;
          field v9;
          v8 = child_at(scrutinee, 0);
          v9 = make_Prelude_map_USmkc(v3, v6, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromThenTo_USbuild_HTworker(root, v9, v7, v2, v5, v8, 0);
          backup = Prelude_enumFromThenTo_USbuild_HTworker_RET_hnf(backup);
          debug(LOW, "leaving boundedEnumFromThen#P10\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// boundedEnumFromThen#P9
void Prelude_boundedEnumFromThen_HTP9_hnf(field root)
{
  debug(LOW, "HNF boundedEnumFromThen#P9:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v7 = child_at(root, 0);
  v6 = child_at(root, 1);
  v5 = child_at(root, 2);
  v4 = child_at(root, 3);
  v3 = child_at(root, 4);
  v2 = child_at(root, 5);
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
            save(root, make_Prelude_boundedEnumFromThen_HTP9_(v2, v3, v4, v5, v6, v7, 0));
          }
          fail(root);
          debug(LOW, "leaving boundedEnumFromThen#P9\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_boundedEnumFromThen_HTP9_(v2, v3, v4, v5, v6, v7, 0));
          }
          field v8;
          field v9;
          v8 = child_at(scrutinee, 0);
          v9 = make_Prelude_map_USmkc(v3, v6, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromThenTo_USbuild_HTworker(root, v9, v7, v2, v5, v8, 0);
          Prelude_enumFromThenTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving boundedEnumFromThen#P9\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// boundedEnumFromThen#P9 at []
void Prelude_boundedEnumFromThen_HTP9__hnf(field root)
{
  debug(LOW, "HNF boundedEnumFromThen#P9@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v7 = child_at(root, 0);
  v6 = child_at(root, 1);
  v5 = child_at(root, 2);
  v4 = child_at(root, 3);
  v3 = child_at(root, 4);
  v2 = child_at(root, 5);
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
            save(root, make_Prelude_boundedEnumFromThen_HTP9_(v2, v3, v4, v5, v6, v7, 0));
          }
          fail(root);
          debug(LOW, "leaving boundedEnumFromThen#P9\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_boundedEnumFromThen_HTP9_(v2, v3, v4, v5, v6, v7, 0));
          }
          field v8;
          field v9;
          v8 = child_at(scrutinee, 0);
          v9 = make_Prelude_map_USmkc(v3, v6, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromThenTo_USbuild_HTworker(root, v9, v7, v2, v5, v8, 0);
          Prelude_enumFromThenTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving boundedEnumFromThen#P9\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// boundedEnumFromThen#P9
Node* Prelude_boundedEnumFromThen_HTP9_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF boundedEnumFromThen#P9:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v7 = child_at(root, 0);
  v6 = child_at(root, 1);
  v5 = child_at(root, 2);
  v4 = child_at(root, 3);
  v3 = child_at(root, 4);
  v2 = child_at(root, 5);
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
            backup = save_RET(backup, make_Prelude_boundedEnumFromThen_HTP9_(v2, v3, v4, v5, v6, v7, 0));
          }
          fail(root);
          debug(LOW, "leaving boundedEnumFromThen#P9\n");
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
            backup = save_RET(backup, make_Prelude_boundedEnumFromThen_HTP9_(v2, v3, v4, v5, v6, v7, 0));
          }
          field v8;
          field v9;
          v8 = child_at(scrutinee, 0);
          v9 = make_Prelude_map_USmkc(v3, v6, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromThenTo_USbuild_HTworker(root, v9, v7, v2, v5, v8, 0);
          backup = Prelude_enumFromThenTo_USbuild_HTworker_RET_hnf(backup);
          debug(LOW, "leaving boundedEnumFromThen#P9\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of enumFromTo in Enum for Int
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_enumFromTo_USbuild(v2, v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v4, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFromTo in Enum for Int
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_enumFromTo_USbuild(v2, v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v4, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return backup;
}

// boundedEnumFrom
void Prelude_boundedEnumFrom_hnf(field root)
{
  debug(LOW, "HNF boundedEnumFrom:\n");
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
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_toEnum(v3, 0);
  v6 = make_Prelude_fromEnum(v3, 0);
  v7 = make_apply1(v6, v4);
  v8 = make_Prelude_fromEnum(v3, 0);
  v9 = make_Prelude_maxBound(v2, 0);
  v10 = make_Prelude__LP_RP(0);
  v11 = make_apply1(v9, v10);
  v12 = make_apply1(v8, v11);
  v13 = make_Prelude_boundedEnumFrom_HTP11(v7, v12, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v13, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving boundedEnumFrom\n");
  debug_expr(LOW, root);
  return;
}

// boundedEnumFrom
Node* Prelude_boundedEnumFrom_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF boundedEnumFrom:\n");
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
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_toEnum(v3, 0);
  v6 = make_Prelude_fromEnum(v3, 0);
  v7 = make_apply1(v6, v4);
  v8 = make_Prelude_fromEnum(v3, 0);
  v9 = make_Prelude_maxBound(v2, 0);
  v10 = make_Prelude__LP_RP(0);
  v11 = make_apply1(v9, v10);
  v12 = make_apply1(v8, v11);
  v13 = make_Prelude_boundedEnumFrom_HTP11(v7, v12, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v13, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving boundedEnumFrom\n");
  debug_expr(LOW, root);
  return backup;
}

// boundedEnumFrom#P11
void Prelude_boundedEnumFrom_HTP11_hnf(field root)
{
  debug(LOW, "HNF boundedEnumFrom#P11:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
  v2 = child_at(root, 4);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_boundedEnumFrom_HTP11_(v2, v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving boundedEnumFrom#P11\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_boundedEnumFrom_HTP11_(v2, v3, v4, v5, v6, 0));
          }
          field v7;
          v7 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude_boundedEnumFrom_HTP11__0(v3, v4, v5, v6, v7, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving boundedEnumFrom#P11\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude_boundedEnumFrom_HTP11__0(v3, v4, v5, v6, v7, 0));
                  }
                  field v8;
                  field v9;
                  v8 = child_at(scrutinee, 0);
                  v9 = make_Prelude_map_USmkc(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v9, v6, v7, v8, 0);
                  Prelude_enumFromTo_USbuild_HTworker_hnf(root);
                  debug(LOW, "leaving boundedEnumFrom#P11\n");
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

// boundedEnumFrom#P11 at []
void Prelude_boundedEnumFrom_HTP11__hnf(field root)
{
  debug(LOW, "HNF boundedEnumFrom#P11@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
  v2 = child_at(root, 4);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_boundedEnumFrom_HTP11_(v2, v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving boundedEnumFrom#P11\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_boundedEnumFrom_HTP11_(v2, v3, v4, v5, v6, 0));
          }
          field v7;
          v7 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude_boundedEnumFrom_HTP11__0(v3, v4, v5, v6, v7, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving boundedEnumFrom#P11\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude_boundedEnumFrom_HTP11__0(v3, v4, v5, v6, v7, 0));
                  }
                  field v8;
                  field v9;
                  v8 = child_at(scrutinee, 0);
                  v9 = make_Prelude_map_USmkc(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v9, v6, v7, v8, 0);
                  Prelude_enumFromTo_USbuild_HTworker_hnf(root);
                  debug(LOW, "leaving boundedEnumFrom#P11\n");
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

// boundedEnumFrom#P11 at [0]
void Prelude_boundedEnumFrom_HTP11__0_hnf(field root)
{
  debug(LOW, "HNF boundedEnumFrom#P11@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v7 = child_at(root, 0);
  v6 = child_at(root, 1);
  v5 = child_at(root, 2);
  v4 = child_at(root, 3);
  v3 = child_at(root, 4);
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
            save(root, make_Prelude_boundedEnumFrom_HTP11__0(v3, v4, v5, v6, v7, 0));
          }
          fail(root);
          debug(LOW, "leaving boundedEnumFrom#P11\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude_boundedEnumFrom_HTP11__0(v3, v4, v5, v6, v7, 0));
          }
          field v8;
          field v9;
          v8 = child_at(scrutinee, 0);
          v9 = make_Prelude_map_USmkc(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromTo_USbuild_HTworker(root, v9, v6, v7, v8, 0);
          Prelude_enumFromTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving boundedEnumFrom#P11\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// boundedEnumFrom#P11
Node* Prelude_boundedEnumFrom_HTP11_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF boundedEnumFrom#P11:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
  v2 = child_at(root, 4);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_boundedEnumFrom_HTP11_(v2, v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving boundedEnumFrom#P11\n");
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
            backup = save_RET(backup, make_Prelude_boundedEnumFrom_HTP11_(v2, v3, v4, v5, v6, 0));
          }
          field v7;
          v7 = child_at(scrutinee, 0);
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
                    backup = save_RET(backup, make_Prelude_boundedEnumFrom_HTP11__0(v3, v4, v5, v6, v7, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving boundedEnumFrom#P11\n");
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
                    backup = save_RET(backup, make_Prelude_boundedEnumFrom_HTP11__0(v3, v4, v5, v6, v7, 0));
                  }
                  field v8;
                  field v9;
                  v8 = child_at(scrutinee, 0);
                  v9 = make_Prelude_map_USmkc(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v9, v6, v7, v8, 0);
                  backup = Prelude_enumFromTo_USbuild_HTworker_RET_hnf(backup);
                  debug(LOW, "leaving boundedEnumFrom#P11\n");
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

// implementation of enumFromThen in Enum for Int
void Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromThen#Prelude.Enum#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt(v3, v2, 0);
  v5 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt(v4, (field)(Node*)NULL, 1);
  v6 = make_Prelude_iterate_USbuild(v5, v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v6, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving _impl#enumFromThen#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFromThen in Enum for Int
Node* Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromThen#Prelude.Enum#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt(v3, v2, 0);
  v5 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt(v4, (field)(Node*)NULL, 1);
  v6 = make_Prelude_iterate_USbuild(v5, v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v6, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFromThen#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return backup;
}

// default for enumFromThen in Enum
void Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_hnf(field root)
{
  debug(LOW, "HNF _def#enumFromThen#Prelude.Enum:\n");
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
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_toEnum(v2, 0);
  v6 = make_Prelude_fromEnum(v2, 0);
  v7 = make_apply1(v6, v3);
  v8 = make_Prelude_fromEnum(v2, 0);
  v9 = make_apply1(v8, v4);
  v10 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt(v9, v7, 0);
  v11 = make_Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_HTP12(v7, v5, v10, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v11, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving _def#enumFromThen#Prelude.Enum\n");
  debug_expr(LOW, root);
  return;
}

// default for enumFromThen in Enum
Node* Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#enumFromThen#Prelude.Enum:\n");
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
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_toEnum(v2, 0);
  v6 = make_Prelude_fromEnum(v2, 0);
  v7 = make_apply1(v6, v3);
  v8 = make_Prelude_fromEnum(v2, 0);
  v9 = make_apply1(v8, v4);
  v10 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt(v9, v7, 0);
  v11 = make_Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_HTP12(v7, v5, v10, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v11, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving _def#enumFromThen#Prelude.Enum\n");
  debug_expr(LOW, root);
  return backup;
}

// default for enumFromThen in Enum
void Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_HTP12_hnf(field root)
{
  debug(LOW, "HNF _def#enumFromThen#Prelude.Enum#P12:\n");
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
  v7 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt(v4, (field)(Node*)NULL, 1);
  v8 = make_Prelude_map_USmkc(v3, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_iterate_USbuild(root, v7, v2, v8, v6, 0);
  Prelude_iterate_USbuild_hnf(root);
  debug(LOW, "leaving _def#enumFromThen#Prelude.Enum#P12\n");
  debug_expr(LOW, root);
  return;
}

// default for enumFromThen in Enum
Node* Prelude__USdef_HTenumFromThen_HTPrelude_DOEnum_HTP12_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#enumFromThen#Prelude.Enum#P12:\n");
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
  v7 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt(v4, (field)(Node*)NULL, 1);
  v8 = make_Prelude_map_USmkc(v3, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_iterate_USbuild(root, v7, v2, v8, v6, 0);
  backup = Prelude_iterate_USbuild_RET_hnf(backup);
  debug(LOW, "leaving _def#enumFromThen#Prelude.Enum#P12\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFrom in Enum for Int
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = child_at(root, 0);
  v3 = make__int(1, 0);
  v4 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt(v3, (field)(Node*)NULL, 1);
  v5 = make_Prelude_iterate_USbuild(v4, v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v5, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFrom in Enum for Int
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v2 = child_at(root, 0);
  v3 = make__int(1, 0);
  v4 = make_Prelude__USimpl_HT_PL_HTPrelude_DONum_HTPrelude_DOInt(v3, (field)(Node*)NULL, 1);
  v5 = make_Prelude_iterate_USbuild(v4, v2, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v5, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return backup;
}

// default for enumFrom in Enum
void Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_hnf(field root)
{
  debug(LOW, "HNF _def#enumFrom#Prelude.Enum:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_toEnum(v2, 0);
  v5 = make_Prelude_fromEnum(v2, 0);
  v6 = make_apply1(v5, v3);
  v7 = make_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13(v6, v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v7, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving _def#enumFrom#Prelude.Enum\n");
  debug_expr(LOW, root);
  return;
}

// default for enumFrom in Enum
Node* Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#enumFrom#Prelude.Enum:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_toEnum(v2, 0);
  v5 = make_Prelude_fromEnum(v2, 0);
  v6 = make_apply1(v5, v3);
  v7 = make_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13(v6, v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v7, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving _def#enumFrom#Prelude.Enum\n");
  debug_expr(LOW, root);
  return backup;
}

// default for enumFrom in Enum
void Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_hnf(field root)
{
  debug(LOW, "HNF _def#enumFrom#Prelude.Enum#P13:\n");
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
  v6 = make_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14((field)(Node*)NULL, 1);
  v7 = make_Prelude_map_USmkc(v3, v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_iterate_USbuild(root, v6, v2, v7, v5, 0);
  Prelude_iterate_USbuild_hnf(root);
  debug(LOW, "leaving _def#enumFrom#Prelude.Enum#P13\n");
  debug_expr(LOW, root);
  return;
}

// default for enumFrom in Enum
Node* Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#enumFrom#Prelude.Enum#P13:\n");
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
  v6 = make_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14((field)(Node*)NULL, 1);
  v7 = make_Prelude_map_USmkc(v3, v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_iterate_USbuild(root, v6, v2, v7, v5, 0);
  backup = Prelude_iterate_USbuild_RET_hnf(backup);
  debug(LOW, "leaving _def#enumFrom#Prelude.Enum#P13\n");
  debug_expr(LOW, root);
  return backup;
}

// default for enumFrom in Enum
void Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_hnf(field root)
{
  debug(LOW, "HNF _def#enumFrom#Prelude.Enum#P13#P14:\n");
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
            save(root, make_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#enumFrom#Prelude.Enum#P13#P14\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(1 + v3.i);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _def#enumFrom#Prelude.Enum#P13#P14\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for enumFrom in Enum at []
void Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14__hnf(field root)
{
  debug(LOW, "HNF _def#enumFrom#Prelude.Enum#P13#P14@[]\n");
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
            save(root, make_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#enumFrom#Prelude.Enum#P13#P14\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(1 + v3.i);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _def#enumFrom#Prelude.Enum#P13#P14\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for enumFrom in Enum
Node* Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#enumFrom#Prelude.Enum#P13#P14:\n");
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
            backup = save_RET(backup, make_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#enumFrom#Prelude.Enum#P13#P14\n");
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
            backup = save_RET(backup, make_Prelude__USdef_HTenumFrom_HTPrelude_DOEnum_HTP13_HTP14_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(1 + v3.i);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _def#enumFrom#Prelude.Enum#P13#P14\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of fromEnum in Enum for Int
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#fromEnum#Prelude.Enum#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// implementation of fromEnum in Enum for Int at []
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt__hnf(field root)
{
  debug(LOW, "HNF _impl#fromEnum#Prelude.Enum#Prelude.Int@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// implementation of fromEnum in Enum for Int
Node* Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#fromEnum#Prelude.Enum#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of toEnum in Enum for Int
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#toEnum#Prelude.Enum#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// implementation of toEnum in Enum for Int at []
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt__hnf(field root)
{
  debug(LOW, "HNF _impl#toEnum#Prelude.Enum#Prelude.Int@[]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// implementation of toEnum in Enum for Int
Node* Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#toEnum#Prelude.Enum#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of pred in Enum for Int
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#pred#Prelude.Enum#Prelude.Int:\n");
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
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.i - 1);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of pred in Enum for Int at []
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt__hnf(field root)
{
  debug(LOW, "HNF _impl#pred#Prelude.Enum#Prelude.Int@[]\n");
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
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.i - 1);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of pred in Enum for Int
Node* Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#pred#Prelude.Enum#Prelude.Int:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Int\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.i - 1);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Int\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of succ in Enum for Int
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _impl#succ#Prelude.Enum#Prelude.Int:\n");
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
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.i + 1);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of succ in Enum for Int at []
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt__hnf(field root)
{
  debug(LOW, "HNF _impl#succ#Prelude.Enum#Prelude.Int@[]\n");
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
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.i + 1);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Int\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of succ in Enum for Int
Node* Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#succ#Prelude.Enum#Prelude.Int:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Int\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.i + 1);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Int\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// instance of Enum for Int
void Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOInt_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Enum#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  v2 = make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v4 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v5 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v6 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v9 = make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  set_Prelude__USDict_HTEnum(root, v2, v3, v4, v5, v6, v7, v8, v9, 0);
  debug(LOW, "leaving _inst#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return;
}

// instance of Enum for Int
Node* Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOInt_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Enum#Prelude.Int:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  v2 = make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v4 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v5 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v6 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v8 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v9 = make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOInt((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  set_Prelude__USDict_HTEnum(root, v2, v3, v4, v5, v6, v7, v8, v9, 0);
  debug(LOW, "leaving _inst#Prelude.Enum#Prelude.Int\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of fromEnum in Enum for Char
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root)
{
  debug(LOW, "HNF _impl#fromEnum#Prelude.Enum#Prelude.Char:\n");
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
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.c);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of fromEnum in Enum for Char at []
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar__hnf(field root)
{
  debug(LOW, "HNF _impl#fromEnum#Prelude.Enum#Prelude.Char@[]\n");
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
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.c);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of fromEnum in Enum for Char
Node* Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#fromEnum#Prelude.Enum#Prelude.Char:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Char\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.c);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Char\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of toEnum in Enum for Char
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root)
{
  debug(LOW, "HNF _impl#toEnum#Prelude.Enum#Prelude.Char:\n");
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
            save(root, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(unsigned long)(v3.i);
          set__char(root, v4.c, 0);
          debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of toEnum in Enum for Char at []
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar__hnf(field root)
{
  debug(LOW, "HNF _impl#toEnum#Prelude.Enum#Prelude.Char@[]\n");
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
            save(root, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(unsigned long)(v3.i);
          set__char(root, v4.c, 0);
          debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of toEnum in Enum for Char
Node* Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#toEnum#Prelude.Enum#Prelude.Char:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Char\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(unsigned long)(v3.i);
          set__char(root, v4.c, 0);
          debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Char\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of pred in Enum for Char
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root)
{
  debug(LOW, "HNF _impl#pred#Prelude.Enum#Prelude.Char:\n");
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
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.c);
          if(v4.i <= 0)
          {
            field v5;
            field v6;
            v5 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
            v6 = toCurryString("Prelude.Enum.Char.succ: no predecessor");
            set_Prelude__DL_HT_HT(root, v5, v6, 0);
            Prelude__DL_HT_HT_hnf(root);
            debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Char\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v7;
            field v8;
            field v9;
            v7 = (field)(long)(v3.c);
            v8 = (field)(long)(v7.i - 1);
            v9 = (field)(unsigned long)(v8.i);
            set__char(root, v9.c, 0);
            debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Char\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of pred in Enum for Char at []
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar__hnf(field root)
{
  debug(LOW, "HNF _impl#pred#Prelude.Enum#Prelude.Char@[]\n");
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
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.c);
          if(v4.i <= 0)
          {
            field v5;
            field v6;
            v5 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
            v6 = toCurryString("Prelude.Enum.Char.succ: no predecessor");
            set_Prelude__DL_HT_HT(root, v5, v6, 0);
            Prelude__DL_HT_HT_hnf(root);
            debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Char\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v7;
            field v8;
            field v9;
            v7 = (field)(long)(v3.c);
            v8 = (field)(long)(v7.i - 1);
            v9 = (field)(unsigned long)(v8.i);
            set__char(root, v9.c, 0);
            debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Char\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of pred in Enum for Char
Node* Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#pred#Prelude.Enum#Prelude.Char:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Char\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.c);
          if(v4.i <= 0)
          {
            field v5;
            field v6;
            v5 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
            v6 = toCurryString("Prelude.Enum.Char.succ: no predecessor");
            set_Prelude__DL_HT_HT(root, v5, v6, 0);
            backup = Prelude__DL_HT_HT_RET_hnf(backup);
            debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Char\n");
            debug_expr(LOW, root);
            return backup;
          }
          else
          {
            field v7;
            field v8;
            field v9;
            v7 = (field)(long)(v3.c);
            v8 = (field)(long)(v7.i - 1);
            v9 = (field)(unsigned long)(v8.i);
            set__char(root, v9.c, 0);
            debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Char\n");
            debug_expr(LOW, root);
            return backup;
          }
        }
      }
    }
  }
}

// implementation of succ in Enum for Char
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root)
{
  debug(LOW, "HNF _impl#succ#Prelude.Enum#Prelude.Char:\n");
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
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.c);
          if(1114111 <= v4.i)
          {
            field v5;
            field v6;
            v5 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
            v6 = toCurryString("Prelude.Enum.Char.succ: no successor");
            set_Prelude__DL_HT_HT(root, v5, v6, 0);
            Prelude__DL_HT_HT_hnf(root);
            debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Char\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v7;
            field v8;
            field v9;
            v7 = (field)(long)(v3.c);
            v8 = (field)(long)(v7.i + 1);
            v9 = (field)(unsigned long)(v8.i);
            set__char(root, v9.c, 0);
            debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Char\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of succ in Enum for Char at []
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar__hnf(field root)
{
  debug(LOW, "HNF _impl#succ#Prelude.Enum#Prelude.Char@[]\n");
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
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.c);
          if(1114111 <= v4.i)
          {
            field v5;
            field v6;
            v5 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
            v6 = toCurryString("Prelude.Enum.Char.succ: no successor");
            set_Prelude__DL_HT_HT(root, v5, v6, 0);
            Prelude__DL_HT_HT_hnf(root);
            debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Char\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            field v7;
            field v8;
            field v9;
            v7 = (field)(long)(v3.c);
            v8 = (field)(long)(v7.i + 1);
            v9 = (field)(unsigned long)(v8.i);
            set__char(root, v9.c, 0);
            debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Char\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// implementation of succ in Enum for Char
Node* Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#succ#Prelude.Enum#Prelude.Char:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Char\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.c);
          if(1114111 <= v4.i)
          {
            field v5;
            field v6;
            v5 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
            v6 = toCurryString("Prelude.Enum.Char.succ: no successor");
            set_Prelude__DL_HT_HT(root, v5, v6, 0);
            backup = Prelude__DL_HT_HT_RET_hnf(backup);
            debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Char\n");
            debug_expr(LOW, root);
            return backup;
          }
          else
          {
            field v7;
            field v8;
            field v9;
            v7 = (field)(long)(v3.c);
            v8 = (field)(long)(v7.i + 1);
            v9 = (field)(unsigned long)(v8.i);
            set__char(root, v9.c, 0);
            debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Char\n");
            debug_expr(LOW, root);
            return backup;
          }
        }
      }
    }
  }
}

// implementation of maxBound in Bounded for Char
void Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_hnf(field root)
{
  debug(LOW, "HNF _impl#maxBound#Prelude.Bounded#Prelude.Char:\n");
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
            save(root, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_(v2, 0));
          }
          set__char(root, 1114111, 0);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of maxBound in Bounded for Char at []
void Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar__hnf(field root)
{
  debug(LOW, "HNF _impl#maxBound#Prelude.Bounded#Prelude.Char@[]\n");
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
            save(root, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_(v2, 0));
          }
          set__char(root, 1114111, 0);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of maxBound in Bounded for Char
Node* Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#maxBound#Prelude.Bounded#Prelude.Char:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Char\n");
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar_(v2, 0));
          }
          set__char(root, 1114111, 0);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Char\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of minBound in Bounded for Char
void Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_hnf(field root)
{
  debug(LOW, "HNF _impl#minBound#Prelude.Bounded#Prelude.Char:\n");
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
            save(root, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_(v2, 0));
          }
          set__char(root, 0, 0);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of minBound in Bounded for Char at []
void Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar__hnf(field root)
{
  debug(LOW, "HNF _impl#minBound#Prelude.Bounded#Prelude.Char@[]\n");
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
            save(root, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_(v2, 0));
          }
          set__char(root, 0, 0);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Char\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of minBound in Bounded for Char
Node* Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#minBound#Prelude.Bounded#Prelude.Char:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Char\n");
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar_(v2, 0));
          }
          set__char(root, 0, 0);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Char\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// instance of Bounded for Char
void Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOChar_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Bounded#Prelude.Char:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTBounded(root, v2, v3, 0);
  debug(LOW, "leaving _inst#Prelude.Bounded#Prelude.Char\n");
  debug_expr(LOW, root);
  return;
}

// instance of Bounded for Char
Node* Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOChar_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Bounded#Prelude.Char:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTBounded(root, v2, v3, 0);
  debug(LOW, "leaving _inst#Prelude.Bounded#Prelude.Char\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of fromEnum in Enum for Ordering
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root)
{
  debug(LOW, "HNF _impl#fromEnum#Prelude.Enum#Prelude.Ordering:\n");
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
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          push_choice(scrutinee, make_Prelude_GT_free());
          push_choice(scrutinee, make_Prelude_EQ_free());
          set_Prelude_LT_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set__int(root, 0, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set__int(root, 2, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set__int(root, 1, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of fromEnum in Enum for Ordering at []
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf(field root)
{
  debug(LOW, "HNF _impl#fromEnum#Prelude.Enum#Prelude.Ordering@[]\n");
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
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          push_choice(scrutinee, make_Prelude_GT_free());
          push_choice(scrutinee, make_Prelude_EQ_free());
          set_Prelude_LT_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set__int(root, 0, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set__int(root, 2, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set__int(root, 1, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of fromEnum in Enum for Ordering
Node* Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#fromEnum#Prelude.Enum#Prelude.Ordering:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Ordering\n");
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
          push_choice(scrutinee, make_Prelude_GT_free());
          push_choice(scrutinee, make_Prelude_EQ_free());
          set_Prelude_LT_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set__int(root, 0, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set__int(root, 2, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set__int(root, 1, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of toEnum in Enum for Ordering
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root)
{
  debug(LOW, "HNF _impl#toEnum#Prelude.Enum#Prelude.Ordering:\n");
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
            save(root, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i == 0)
          {
            set_Prelude_LT(root, 0);
            debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Ordering\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            if(v3.i == 1)
            {
              set_Prelude_EQ(root, 0);
              debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Ordering\n");
              debug_expr(LOW, root);
              return;
            }
            else
            {
              if(v3.i == 2)
              {
                set_Prelude_GT(root, 0);
                debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Ordering\n");
                debug_expr(LOW, root);
                return;
              }
              else
              {
                field v4;
                field v5;
                v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
                v5 = toCurryString("Prelude.Enum.Ordering.toEnum: bad argument");
                set_Prelude__DL_HT_HT(root, v4, v5, 0);
                Prelude__DL_HT_HT_hnf(root);
                debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Ordering\n");
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

// implementation of toEnum in Enum for Ordering at []
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf(field root)
{
  debug(LOW, "HNF _impl#toEnum#Prelude.Enum#Prelude.Ordering@[]\n");
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
            save(root, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i == 0)
          {
            set_Prelude_LT(root, 0);
            debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Ordering\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            if(v3.i == 1)
            {
              set_Prelude_EQ(root, 0);
              debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Ordering\n");
              debug_expr(LOW, root);
              return;
            }
            else
            {
              if(v3.i == 2)
              {
                set_Prelude_GT(root, 0);
                debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Ordering\n");
                debug_expr(LOW, root);
                return;
              }
              else
              {
                field v4;
                field v5;
                v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
                v5 = toCurryString("Prelude.Enum.Ordering.toEnum: bad argument");
                set_Prelude__DL_HT_HT(root, v4, v5, 0);
                Prelude__DL_HT_HT_hnf(root);
                debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Ordering\n");
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

// implementation of toEnum in Enum for Ordering
Node* Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#toEnum#Prelude.Enum#Prelude.Ordering:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Ordering\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i == 0)
          {
            set_Prelude_LT(root, 0);
            debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Ordering\n");
            debug_expr(LOW, root);
            return backup;
          }
          else
          {
            if(v3.i == 1)
            {
              set_Prelude_EQ(root, 0);
              debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Ordering\n");
              debug_expr(LOW, root);
              return backup;
            }
            else
            {
              if(v3.i == 2)
              {
                set_Prelude_GT(root, 0);
                debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Ordering\n");
                debug_expr(LOW, root);
                return backup;
              }
              else
              {
                field v4;
                field v5;
                v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
                v5 = toCurryString("Prelude.Enum.Ordering.toEnum: bad argument");
                set_Prelude__DL_HT_HT(root, v4, v5, 0);
                backup = Prelude__DL_HT_HT_RET_hnf(backup);
                debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Ordering\n");
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

// implementation of pred in Enum for Ordering
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root)
{
  debug(LOW, "HNF _impl#pred#Prelude.Enum#Prelude.Ordering:\n");
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
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          push_choice(scrutinee, make_Prelude_GT_free());
          push_choice(scrutinee, make_Prelude_EQ_free());
          set_Prelude_LT_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          field v3;
          field v4;
          v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v4 = toCurryString("Prelude.Enum.Ordering.pred: bad argument");
          set_Prelude__DL_HT_HT(root, v3, v4, 0);
          Prelude__DL_HT_HT_hnf(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_EQ(root, 0);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_LT(root, 0);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of pred in Enum for Ordering at []
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf(field root)
{
  debug(LOW, "HNF _impl#pred#Prelude.Enum#Prelude.Ordering@[]\n");
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
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          push_choice(scrutinee, make_Prelude_GT_free());
          push_choice(scrutinee, make_Prelude_EQ_free());
          set_Prelude_LT_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          field v3;
          field v4;
          v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v4 = toCurryString("Prelude.Enum.Ordering.pred: bad argument");
          set_Prelude__DL_HT_HT(root, v3, v4, 0);
          Prelude__DL_HT_HT_hnf(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_EQ(root, 0);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_LT(root, 0);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of pred in Enum for Ordering
Node* Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#pred#Prelude.Enum#Prelude.Ordering:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Ordering\n");
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
          push_choice(scrutinee, make_Prelude_GT_free());
          push_choice(scrutinee, make_Prelude_EQ_free());
          set_Prelude_LT_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          field v3;
          field v4;
          v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v4 = toCurryString("Prelude.Enum.Ordering.pred: bad argument");
          set_Prelude__DL_HT_HT(root, v3, v4, 0);
          backup = Prelude__DL_HT_HT_RET_hnf(backup);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_EQ(root, 0);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_LT(root, 0);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of succ in Enum for Ordering
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root)
{
  debug(LOW, "HNF _impl#succ#Prelude.Enum#Prelude.Ordering:\n");
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
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          push_choice(scrutinee, make_Prelude_GT_free());
          push_choice(scrutinee, make_Prelude_EQ_free());
          set_Prelude_LT_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_EQ(root, 0);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          field v3;
          field v4;
          v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v4 = toCurryString("Prelude.Enum.Ordering.succ: bad argument");
          set_Prelude__DL_HT_HT(root, v3, v4, 0);
          Prelude__DL_HT_HT_hnf(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_GT(root, 0);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of succ in Enum for Ordering at []
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering__hnf(field root)
{
  debug(LOW, "HNF _impl#succ#Prelude.Enum#Prelude.Ordering@[]\n");
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
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          push_choice(scrutinee, make_Prelude_GT_free());
          push_choice(scrutinee, make_Prelude_EQ_free());
          set_Prelude_LT_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_EQ(root, 0);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          field v3;
          field v4;
          v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v4 = toCurryString("Prelude.Enum.Ordering.succ: bad argument");
          set_Prelude__DL_HT_HT(root, v3, v4, 0);
          Prelude__DL_HT_HT_hnf(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_GT(root, 0);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of succ in Enum for Ordering
Node* Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#succ#Prelude.Enum#Prelude.Ordering:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Ordering\n");
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
          push_choice(scrutinee, make_Prelude_GT_free());
          push_choice(scrutinee, make_Prelude_EQ_free());
          set_Prelude_LT_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude_LT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_EQ(root, 0);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_GT_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          field v3;
          field v4;
          v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v4 = toCurryString("Prelude.Enum.Ordering.succ: bad argument");
          set_Prelude__DL_HT_HT(root, v3, v4, 0);
          backup = Prelude__DL_HT_HT_RET_hnf(backup);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_EQ_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_GT(root, 0);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of maxBound in Bounded for Ordering
void Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_hnf(field root)
{
  debug(LOW, "HNF _impl#maxBound#Prelude.Bounded#Prelude.Ordering:\n");
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
            save(root, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_GT(root, 0);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of maxBound in Bounded for Ordering at []
void Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__hnf(field root)
{
  debug(LOW, "HNF _impl#maxBound#Prelude.Bounded#Prelude.Ordering@[]\n");
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
            save(root, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_GT(root, 0);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of maxBound in Bounded for Ordering
Node* Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#maxBound#Prelude.Bounded#Prelude.Ordering:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Ordering\n");
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_GT(root, 0);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of minBound in Bounded for Ordering
void Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_hnf(field root)
{
  debug(LOW, "HNF _impl#minBound#Prelude.Bounded#Prelude.Ordering:\n");
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
            save(root, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_LT(root, 0);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of minBound in Bounded for Ordering at []
void Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering__hnf(field root)
{
  debug(LOW, "HNF _impl#minBound#Prelude.Bounded#Prelude.Ordering@[]\n");
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
            save(root, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_LT(root, 0);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of minBound in Bounded for Ordering
Node* Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#minBound#Prelude.Bounded#Prelude.Ordering:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Ordering\n");
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering_(v2, 0));
          }
          set_Prelude_LT(root, 0);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Ordering\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// instance of Bounded for Ordering
void Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOOrdering_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Bounded#Prelude.Ordering:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTBounded(root, v2, v3, 0);
  debug(LOW, "leaving _inst#Prelude.Bounded#Prelude.Ordering\n");
  debug_expr(LOW, root);
  return;
}

// instance of Bounded for Ordering
Node* Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOOrdering_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Bounded#Prelude.Ordering:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTBounded(root, v2, v3, 0);
  debug(LOW, "leaving _inst#Prelude.Bounded#Prelude.Ordering\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of fromEnum in Enum for Bool
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root)
{
  debug(LOW, "HNF _impl#fromEnum#Prelude.Enum#Prelude.Bool:\n");
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
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          set__int(root, 1, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          set__int(root, 0, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of fromEnum in Enum for Bool at []
void Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool__hnf(field root)
{
  debug(LOW, "HNF _impl#fromEnum#Prelude.Enum#Prelude.Bool@[]\n");
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
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          set__int(root, 1, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          set__int(root, 0, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of fromEnum in Enum for Bool
Node* Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#fromEnum#Prelude.Enum#Prelude.Bool:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Bool\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          set__int(root, 1, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          set__int(root, 0, 0);
          debug(LOW, "leaving _impl#fromEnum#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of toEnum in Enum for Bool
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root)
{
  debug(LOW, "HNF _impl#toEnum#Prelude.Enum#Prelude.Bool:\n");
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
            save(root, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i == 0)
          {
            set_Prelude_False(root, 0);
            debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Bool\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            if(v3.i == 1)
            {
              set_Prelude_True(root, 0);
              debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Bool\n");
              debug_expr(LOW, root);
              return;
            }
            else
            {
              field v4;
              field v5;
              v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
              v5 = toCurryString("Prelude.Enum.Bool.toEnum: bad argument");
              set_Prelude__DL_HT_HT(root, v4, v5, 0);
              Prelude__DL_HT_HT_hnf(root);
              debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Bool\n");
              debug_expr(LOW, root);
              return;
            }
          }
        }
      }
    }
  }
}

// implementation of toEnum in Enum for Bool at []
void Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool__hnf(field root)
{
  debug(LOW, "HNF _impl#toEnum#Prelude.Enum#Prelude.Bool@[]\n");
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
            save(root, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i == 0)
          {
            set_Prelude_False(root, 0);
            debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Bool\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            if(v3.i == 1)
            {
              set_Prelude_True(root, 0);
              debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Bool\n");
              debug_expr(LOW, root);
              return;
            }
            else
            {
              field v4;
              field v5;
              v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
              v5 = toCurryString("Prelude.Enum.Bool.toEnum: bad argument");
              set_Prelude__DL_HT_HT(root, v4, v5, 0);
              Prelude__DL_HT_HT_hnf(root);
              debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Bool\n");
              debug_expr(LOW, root);
              return;
            }
          }
        }
      }
    }
  }
}

// implementation of toEnum in Enum for Bool
Node* Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#toEnum#Prelude.Enum#Prelude.Bool:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Bool\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          field v3;
          v3 = child_at(scrutinee, 0);
          if(v3.i == 0)
          {
            set_Prelude_False(root, 0);
            debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Bool\n");
            debug_expr(LOW, root);
            return backup;
          }
          else
          {
            if(v3.i == 1)
            {
              set_Prelude_True(root, 0);
              debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Bool\n");
              debug_expr(LOW, root);
              return backup;
            }
            else
            {
              field v4;
              field v5;
              v4 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
              v5 = toCurryString("Prelude.Enum.Bool.toEnum: bad argument");
              set_Prelude__DL_HT_HT(root, v4, v5, 0);
              backup = Prelude__DL_HT_HT_RET_hnf(backup);
              debug(LOW, "leaving _impl#toEnum#Prelude.Enum#Prelude.Bool\n");
              debug_expr(LOW, root);
              return backup;
            }
          }
        }
      }
    }
  }
}

// implementation of pred in Enum for Bool
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root)
{
  debug(LOW, "HNF _impl#pred#Prelude.Enum#Prelude.Bool:\n");
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
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          field v3;
          field v4;
          v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v4 = toCurryString("Prelude.Enum.Bool.pred: bad argument");
          set_Prelude__DL_HT_HT(root, v3, v4, 0);
          Prelude__DL_HT_HT_hnf(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of pred in Enum for Bool at []
void Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool__hnf(field root)
{
  debug(LOW, "HNF _impl#pred#Prelude.Enum#Prelude.Bool@[]\n");
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
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          field v3;
          field v4;
          v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v4 = toCurryString("Prelude.Enum.Bool.pred: bad argument");
          set_Prelude__DL_HT_HT(root, v3, v4, 0);
          Prelude__DL_HT_HT_hnf(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of pred in Enum for Bool
Node* Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#pred#Prelude.Enum#Prelude.Bool:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Bool\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          field v3;
          field v4;
          v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v4 = toCurryString("Prelude.Enum.Bool.pred: bad argument");
          set_Prelude__DL_HT_HT(root, v3, v4, 0);
          backup = Prelude__DL_HT_HT_RET_hnf(backup);
          debug(LOW, "leaving _impl#pred#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of succ in Enum for Bool
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root)
{
  debug(LOW, "HNF _impl#succ#Prelude.Enum#Prelude.Bool:\n");
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
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          field v3;
          field v4;
          v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v4 = toCurryString("Prelude.Enum.Bool.succ: bad argument");
          set_Prelude__DL_HT_HT(root, v3, v4, 0);
          Prelude__DL_HT_HT_hnf(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of succ in Enum for Bool at []
void Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool__hnf(field root)
{
  debug(LOW, "HNF _impl#succ#Prelude.Enum#Prelude.Bool@[]\n");
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
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          field v3;
          field v4;
          v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v4 = toCurryString("Prelude.Enum.Bool.succ: bad argument");
          set_Prelude__DL_HT_HT(root, v3, v4, 0);
          Prelude__DL_HT_HT_hnf(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of succ in Enum for Bool
Node* Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#succ#Prelude.Enum#Prelude.Bool:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Bool\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          field v3;
          field v4;
          v3 = make_Prelude_prim_USerror((field)(Node*)NULL, 1);
          v4 = toCurryString("Prelude.Enum.Bool.succ: bad argument");
          set_Prelude__DL_HT_HT(root, v3, v4, 0);
          backup = Prelude__DL_HT_HT_RET_hnf(backup);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool_(v2, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#succ#Prelude.Enum#Prelude.Bool\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of maxBound in Bounded for Bool
void Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_hnf(field root)
{
  debug(LOW, "HNF _impl#maxBound#Prelude.Bounded#Prelude.Bool:\n");
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
            save(root, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_(v2, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of maxBound in Bounded for Bool at []
void Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool__hnf(field root)
{
  debug(LOW, "HNF _impl#maxBound#Prelude.Bounded#Prelude.Bool@[]\n");
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
            save(root, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_(v2, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of maxBound in Bounded for Bool
Node* Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#maxBound#Prelude.Bounded#Prelude.Bool:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Bool\n");
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool_(v2, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#maxBound#Prelude.Bounded#Prelude.Bool\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of minBound in Bounded for Bool
void Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_hnf(field root)
{
  debug(LOW, "HNF _impl#minBound#Prelude.Bounded#Prelude.Bool:\n");
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
            save(root, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_(v2, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of minBound in Bounded for Bool at []
void Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool__hnf(field root)
{
  debug(LOW, "HNF _impl#minBound#Prelude.Bounded#Prelude.Bool@[]\n");
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
            save(root, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_(v2, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Bool\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of minBound in Bounded for Bool
Node* Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#minBound#Prelude.Bounded#Prelude.Bool:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Bool\n");
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
          set_Prelude__LP_RP_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__LP_RP_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool_(v2, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#minBound#Prelude.Bounded#Prelude.Bool\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// instance of Bounded for Bool
void Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOBool_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Bounded#Prelude.Bool:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTBounded(root, v2, v3, 0);
  debug(LOW, "leaving _inst#Prelude.Bounded#Prelude.Bool\n");
  debug_expr(LOW, root);
  return;
}

// instance of Bounded for Bool
Node* Prelude__USinst_HTPrelude_DOBounded_HTPrelude_DOBool_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Bounded#Prelude.Bool:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v2 = make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTBounded(root, v2, v3, 0);
  debug(LOW, "leaving _inst#Prelude.Bounded#Prelude.Bool\n");
  debug_expr(LOW, root);
  return backup;
}

// default for enumFromThenTo in Enum
void Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_hnf(field root)
{
  debug(LOW, "HNF _def#enumFromThenTo#Prelude.Enum:\n");
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
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_Prelude_toEnum(v2, 0);
  v7 = make_Prelude_fromEnum(v2, 0);
  v8 = make_apply1(v7, v3);
  v9 = make_Prelude_fromEnum(v2, 0);
  v10 = make_apply1(v9, v4);
  v11 = make_Prelude_fromEnum(v2, 0);
  v12 = make_apply1(v11, v5);
  v13 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt(v10, v8, 0);
  v14 = make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15(v8, v12, v6, v13, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v14, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum\n");
  debug_expr(LOW, root);
  return;
}

// default for enumFromThenTo in Enum
Node* Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#enumFromThenTo#Prelude.Enum:\n");
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
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  v6 = make_Prelude_toEnum(v2, 0);
  v7 = make_Prelude_fromEnum(v2, 0);
  v8 = make_apply1(v7, v3);
  v9 = make_Prelude_fromEnum(v2, 0);
  v10 = make_apply1(v9, v4);
  v11 = make_Prelude_fromEnum(v2, 0);
  v12 = make_apply1(v11, v5);
  v13 = make_Prelude__USimpl_HT_MI_HTPrelude_DONum_HTPrelude_DOInt(v10, v8, 0);
  v14 = make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15(v8, v12, v6, v13, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v14, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum\n");
  debug_expr(LOW, root);
  return backup;
}

// default for enumFromThenTo in Enum
void Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_hnf(field root)
{
  debug(LOW, "HNF _def#enumFromThenTo#Prelude.Enum#P15:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v7 = child_at(root, 0);
  v6 = child_at(root, 1);
  v5 = child_at(root, 2);
  v4 = child_at(root, 3);
  v3 = child_at(root, 4);
  v2 = child_at(root, 5);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_(v2, v3, v4, v5, v6, v7, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_(v2, v3, v4, v5, v6, v7, 0));
          }
          field v8;
          v8 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0(v3, v4, v5, v6, v7, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0(v3, v4, v5, v6, v7, v8, 0));
                  }
                  field v9;
                  v9 = child_at(scrutinee, 0);
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
                            save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0(v3, v4, v6, v7, v8, v9, 0));
                          }
                          fail(root);
                          debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
                          debug_expr(LOW, root);
                          return;
                        }
                        case FUNCTION_TAG:
                        {
                          HNF(scrutinee);
                          break;
                        }
                        case CHOICE_TAG:
                        {
                          choose(scrutinee);
                          break;
                        }
                        case FORWARD_TAG:
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
                            save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0(v3, v4, v6, v7, v8, v9, 0));
                          }
                          field v10;
                          field v11;
                          v10 = child_at(scrutinee, 0);
                          v11 = make_Prelude_map_USmkc(v4, v6, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                          set_Prelude_enumFromThenTo_USbuild_HTworker(root, v11, v7, v8, v9, v10, 0);
                          Prelude_enumFromThenTo_USbuild_HTworker_hnf(root);
                          debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
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
    }
  }
}

// default for enumFromThenTo in Enum at []
void Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__hnf(field root)
{
  debug(LOW, "HNF _def#enumFromThenTo#Prelude.Enum#P15@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v7 = child_at(root, 0);
  v6 = child_at(root, 1);
  v5 = child_at(root, 2);
  v4 = child_at(root, 3);
  v3 = child_at(root, 4);
  v2 = child_at(root, 5);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_(v2, v3, v4, v5, v6, v7, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_(v2, v3, v4, v5, v6, v7, 0));
          }
          field v8;
          v8 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0(v3, v4, v5, v6, v7, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0(v3, v4, v5, v6, v7, v8, 0));
                  }
                  field v9;
                  v9 = child_at(scrutinee, 0);
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
                            save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0(v3, v4, v6, v7, v8, v9, 0));
                          }
                          fail(root);
                          debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
                          debug_expr(LOW, root);
                          return;
                        }
                        case FUNCTION_TAG:
                        {
                          HNF(scrutinee);
                          break;
                        }
                        case CHOICE_TAG:
                        {
                          choose(scrutinee);
                          break;
                        }
                        case FORWARD_TAG:
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
                            save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0(v3, v4, v6, v7, v8, v9, 0));
                          }
                          field v10;
                          field v11;
                          v10 = child_at(scrutinee, 0);
                          v11 = make_Prelude_map_USmkc(v4, v6, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                          set_Prelude_enumFromThenTo_USbuild_HTworker(root, v11, v7, v8, v9, v10, 0);
                          Prelude_enumFromThenTo_USbuild_HTworker_hnf(root);
                          debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
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
    }
  }
}

// default for enumFromThenTo in Enum at [0]
void Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_hnf(field root)
{
  debug(LOW, "HNF _def#enumFromThenTo#Prelude.Enum#P15@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  v8 = child_at(root, 0);
  v7 = child_at(root, 1);
  v6 = child_at(root, 2);
  v5 = child_at(root, 3);
  v4 = child_at(root, 4);
  v3 = child_at(root, 5);
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
            save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0(v3, v4, v5, v6, v7, v8, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0(v3, v4, v5, v6, v7, v8, 0));
          }
          field v9;
          v9 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0(v3, v4, v6, v7, v8, v9, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0(v3, v4, v6, v7, v8, v9, 0));
                  }
                  field v10;
                  field v11;
                  v10 = child_at(scrutinee, 0);
                  v11 = make_Prelude_map_USmkc(v4, v6, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromThenTo_USbuild_HTworker(root, v11, v7, v8, v9, v10, 0);
                  Prelude_enumFromThenTo_USbuild_HTworker_hnf(root);
                  debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
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

// default for enumFromThenTo in Enum at [0,0]
void Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0_hnf(field root)
{
  debug(LOW, "HNF _def#enumFromThenTo#Prelude.Enum#P15@[0,0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  field v6;
  field v7;
  field v8;
  field v9;
  v9 = child_at(root, 0);
  v8 = child_at(root, 1);
  v7 = child_at(root, 2);
  v6 = child_at(root, 3);
  v4 = child_at(root, 4);
  v3 = child_at(root, 5);
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
            save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0(v3, v4, v6, v7, v8, v9, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0(v3, v4, v6, v7, v8, v9, 0));
          }
          field v10;
          field v11;
          v10 = child_at(scrutinee, 0);
          v11 = make_Prelude_map_USmkc(v4, v6, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromThenTo_USbuild_HTworker(root, v11, v7, v8, v9, v10, 0);
          Prelude_enumFromThenTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for enumFromThenTo in Enum
Node* Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#enumFromThenTo#Prelude.Enum#P15:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v7 = child_at(root, 0);
  v6 = child_at(root, 1);
  v5 = child_at(root, 2);
  v4 = child_at(root, 3);
  v3 = child_at(root, 4);
  v2 = child_at(root, 5);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_(v2, v3, v4, v5, v6, v7, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
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
            backup = save_RET(backup, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15_(v2, v3, v4, v5, v6, v7, 0));
          }
          field v8;
          v8 = child_at(scrutinee, 0);
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
                    backup = save_RET(backup, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0(v3, v4, v5, v6, v7, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
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
                    backup = save_RET(backup, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0(v3, v4, v5, v6, v7, v8, 0));
                  }
                  field v9;
                  v9 = child_at(scrutinee, 0);
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
                            backup = save_RET(backup, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0(v3, v4, v6, v7, v8, v9, 0));
                          }
                          fail(root);
                          debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
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
                            backup = save_RET(backup, make_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_HTP15__0_0(v3, v4, v6, v7, v8, v9, 0));
                          }
                          field v10;
                          field v11;
                          v10 = child_at(scrutinee, 0);
                          v11 = make_Prelude_map_USmkc(v4, v6, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                          set_Prelude_enumFromThenTo_USbuild_HTworker(root, v11, v7, v8, v9, v10, 0);
                          backup = Prelude_enumFromThenTo_USbuild_HTworker_RET_hnf(backup);
                          debug(LOW, "leaving _def#enumFromThenTo#Prelude.Enum#P15\n");
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
    }
  }
}

// default for enumFromTo in Enum
void Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_hnf(field root)
{
  debug(LOW, "HNF _def#enumFromTo#Prelude.Enum:\n");
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
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_toEnum(v2, 0);
  v6 = make_Prelude_fromEnum(v2, 0);
  v7 = make_apply1(v6, v3);
  v8 = make_Prelude_fromEnum(v2, 0);
  v9 = make_apply1(v8, v4);
  v10 = make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16(v7, v9, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v10, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving _def#enumFromTo#Prelude.Enum\n");
  debug_expr(LOW, root);
  return;
}

// default for enumFromTo in Enum
Node* Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#enumFromTo#Prelude.Enum:\n");
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
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude_toEnum(v2, 0);
  v6 = make_Prelude_fromEnum(v2, 0);
  v7 = make_apply1(v6, v3);
  v8 = make_Prelude_fromEnum(v2, 0);
  v9 = make_apply1(v8, v4);
  v10 = make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16(v7, v9, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v10, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving _def#enumFromTo#Prelude.Enum\n");
  debug_expr(LOW, root);
  return backup;
}

// default for enumFromTo in Enum
void Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_hnf(field root)
{
  debug(LOW, "HNF _def#enumFromTo#Prelude.Enum#P16:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
  v2 = child_at(root, 4);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_(v2, v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#enumFromTo#Prelude.Enum#P16\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_(v2, v3, v4, v5, v6, 0));
          }
          field v7;
          v7 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__0(v3, v4, v5, v6, v7, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _def#enumFromTo#Prelude.Enum#P16\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__0(v3, v4, v5, v6, v7, 0));
                  }
                  field v8;
                  field v9;
                  v8 = child_at(scrutinee, 0);
                  v9 = make_Prelude_map_USmkc(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v9, v6, v7, v8, 0);
                  Prelude_enumFromTo_USbuild_HTworker_hnf(root);
                  debug(LOW, "leaving _def#enumFromTo#Prelude.Enum#P16\n");
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

// default for enumFromTo in Enum at []
void Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__hnf(field root)
{
  debug(LOW, "HNF _def#enumFromTo#Prelude.Enum#P16@[]\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
  v2 = child_at(root, 4);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_(v2, v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#enumFromTo#Prelude.Enum#P16\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_(v2, v3, v4, v5, v6, 0));
          }
          field v7;
          v7 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__0(v3, v4, v5, v6, v7, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _def#enumFromTo#Prelude.Enum#P16\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__0(v3, v4, v5, v6, v7, 0));
                  }
                  field v8;
                  field v9;
                  v8 = child_at(scrutinee, 0);
                  v9 = make_Prelude_map_USmkc(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v9, v6, v7, v8, 0);
                  Prelude_enumFromTo_USbuild_HTworker_hnf(root);
                  debug(LOW, "leaving _def#enumFromTo#Prelude.Enum#P16\n");
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

// default for enumFromTo in Enum at [0]
void Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__0_hnf(field root)
{
  debug(LOW, "HNF _def#enumFromTo#Prelude.Enum#P16@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v7 = child_at(root, 0);
  v6 = child_at(root, 1);
  v5 = child_at(root, 2);
  v4 = child_at(root, 3);
  v3 = child_at(root, 4);
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
            save(root, make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__0(v3, v4, v5, v6, v7, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#enumFromTo#Prelude.Enum#P16\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__0(v3, v4, v5, v6, v7, 0));
          }
          field v8;
          field v9;
          v8 = child_at(scrutinee, 0);
          v9 = make_Prelude_map_USmkc(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromTo_USbuild_HTworker(root, v9, v6, v7, v8, 0);
          Prelude_enumFromTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving _def#enumFromTo#Prelude.Enum#P16\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for enumFromTo in Enum
Node* Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#enumFromTo#Prelude.Enum#P16:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
  v2 = child_at(root, 4);
  {
    bool nondet = false;
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_(v2, v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#enumFromTo#Prelude.Enum#P16\n");
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
            backup = save_RET(backup, make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16_(v2, v3, v4, v5, v6, 0));
          }
          field v7;
          v7 = child_at(scrutinee, 0);
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
                    backup = save_RET(backup, make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__0(v3, v4, v5, v6, v7, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _def#enumFromTo#Prelude.Enum#P16\n");
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
                    backup = save_RET(backup, make_Prelude__USdef_HTenumFromTo_HTPrelude_DOEnum_HTP16__0(v3, v4, v5, v6, v7, 0));
                  }
                  field v8;
                  field v9;
                  v8 = child_at(scrutinee, 0);
                  v9 = make_Prelude_map_USmkc(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v9, v6, v7, v8, 0);
                  backup = Prelude_enumFromTo_USbuild_HTworker_RET_hnf(backup);
                  debug(LOW, "leaving _def#enumFromTo#Prelude.Enum#P16\n");
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

// instance of Enum for Char
void Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Enum#Prelude.Char:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  v2 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v6 = make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, 1);
  v9 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTEnum(root, v6, v7, v8, v9, v2, v3, v4, v5, 0);
  debug(LOW, "leaving _inst#Prelude.Enum#Prelude.Char\n");
  debug_expr(LOW, root);
  return;
}

// instance of Enum for Char
Node* Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Enum#Prelude.Char:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  v2 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v6 = make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, 1);
  v9 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTEnum(root, v6, v7, v8, v9, v2, v3, v4, v5, 0);
  debug(LOW, "leaving _inst#Prelude.Enum#Prelude.Char\n");
  debug_expr(LOW, root);
  return backup;
}

// instance of Enum for Ordering
void Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Enum#Prelude.Ordering:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  v2 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v6 = make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  v9 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTEnum(root, v6, v7, v8, v9, v2, v3, v4, v5, 0);
  debug(LOW, "leaving _inst#Prelude.Enum#Prelude.Ordering\n");
  debug_expr(LOW, root);
  return;
}

// instance of Enum for Ordering
Node* Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Enum#Prelude.Ordering:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  v2 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v6 = make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  v9 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTEnum(root, v6, v7, v8, v9, v2, v3, v4, v5, 0);
  debug(LOW, "leaving _inst#Prelude.Enum#Prelude.Ordering\n");
  debug_expr(LOW, root);
  return backup;
}

// instance of Enum for Bool
void Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root)
{
  debug(LOW, "HNF _inst#Prelude.Enum#Prelude.Bool:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  v2 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v6 = make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, 1);
  v9 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTEnum(root, v6, v7, v8, v9, v2, v3, v4, v5, 0);
  debug(LOW, "leaving _inst#Prelude.Enum#Prelude.Bool\n");
  debug_expr(LOW, root);
  return;
}

// instance of Enum for Bool
Node* Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _inst#Prelude.Enum#Prelude.Bool:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  field v8;
  field v9;
  v2 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, 1);
  v3 = make_Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v4 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, (field)(Node*)NULL, 2);
  v5 = make_Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, (field)(Node*)NULL, (field)(Node*)NULL, 3);
  v6 = make_Prelude__USimpl_HTsucc_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, 1);
  v7 = make_Prelude__USimpl_HTpred_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, 1);
  v8 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, 1);
  v9 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool((field)(Node*)NULL, 1);
  set_Prelude__USDict_HTEnum(root, v6, v7, v8, v9, v2, v3, v4, v5, 0);
  debug(LOW, "leaving _inst#Prelude.Enum#Prelude.Bool\n");
  debug_expr(LOW, root);
  return backup;
}

// default for pred in Enum
void Prelude__USdef_HTpred_HTPrelude_DOEnum_hnf(field root)
{
  debug(LOW, "HNF _def#pred#Prelude.Enum:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_toEnum(v2, 0);
  v5 = make_Prelude_fromEnum(v2, 0);
  v6 = make_apply1(v5, v3);
  v7 = make_Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1(v6, 0);
  set_apply1(root, v4, v7);
  apply_hnf(root);
  debug(LOW, "leaving _def#pred#Prelude.Enum\n");
  debug_expr(LOW, root);
  return;
}

// default for pred in Enum
Node* Prelude__USdef_HTpred_HTPrelude_DOEnum_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#pred#Prelude.Enum:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude_toEnum(v2, 0);
  v5 = make_Prelude_fromEnum(v2, 0);
  v6 = make_apply1(v5, v3);
  v7 = make_Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1(v6, 0);
  set_apply1(root, v4, v7);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _def#pred#Prelude.Enum\n");
  debug_expr(LOW, root);
  return backup;
}

// default for pred in Enum
void Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_hnf(field root)
{
  debug(LOW, "HNF _def#pred#Prelude.Enum#A1:\n");
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
            save(root, make_Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#pred#Prelude.Enum#A1\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.i - 1);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _def#pred#Prelude.Enum#A1\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for pred in Enum at []
void Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1__hnf(field root)
{
  debug(LOW, "HNF _def#pred#Prelude.Enum#A1@[]\n");
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
            save(root, make_Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#pred#Prelude.Enum#A1\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.i - 1);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _def#pred#Prelude.Enum#A1\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// default for pred in Enum
Node* Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _def#pred#Prelude.Enum#A1:\n");
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
            backup = save_RET(backup, make_Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _def#pred#Prelude.Enum#A1\n");
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
            backup = save_RET(backup, make_Prelude__USdef_HTpred_HTPrelude_DOEnum_HTA1_(v2, 0));
          }
          field v3;
          field v4;
          v3 = child_at(scrutinee, 0);
          v4 = (field)(long)(v3.i - 1);
          set__int(root, v4.i, 0);
          debug(LOW, "leaving _def#pred#Prelude.Enum#A1\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// enumFromThenTo_build#worker
void Prelude_enumFromThenTo_USbuild_HTworker_hnf(field root)
{
  debug(LOW, "HNF enumFromThenTo_build#worker:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
  v2 = child_at(root, 4);
  if(v5.i <= 0)
  {
    if(v6.i <= v4.i)
    {
      field v7;
      field v8;
      field v9;
      v7 = (field)(long)(v4.i + v5.i);
      v8 = make_Prelude_enumFromThenTo_USbuild_HTworker(v2, v3, v7, v5, v6, 0);
      v9 = make__int(v4.i, 0);
      set_apply2(root, v2, v9, v8);
      apply_hnf(root);
      debug(LOW, "leaving enumFromThenTo_build#worker\n");
      debug_expr(LOW, root);
      return;
    }
    else
    {
      set_forward(root, v3);
      debug(LOW, "leaving enumFromThenTo_build#worker\n");
      debug_expr(LOW, root);
      return;
    }
  }
  else
  {
    if(v4.i <= v6.i)
    {
      field v10;
      field v11;
      field v12;
      v10 = (field)(long)(v4.i + v5.i);
      v11 = make_Prelude_enumFromThenTo_USbuild_HTworker(v2, v3, v10, v5, v6, 0);
      v12 = make__int(v4.i, 0);
      set_apply2(root, v2, v12, v11);
      apply_hnf(root);
      debug(LOW, "leaving enumFromThenTo_build#worker\n");
      debug_expr(LOW, root);
      return;
    }
    else
    {
      set_forward(root, v3);
      debug(LOW, "leaving enumFromThenTo_build#worker\n");
      debug_expr(LOW, root);
      return;
    }
  }
}

// enumFromThenTo_build#worker at [0,1]
void Prelude_enumFromThenTo_USbuild_HTworker__0_1_hnf(field root)
{
  debug(LOW, "HNF enumFromThenTo_build#worker@[0,1]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving enumFromThenTo_build#worker\n");
  debug_expr(LOW, root);
  return;
}

// enumFromThenTo_build#worker at [1,1]
void Prelude_enumFromThenTo_USbuild_HTworker__1_1_hnf(field root)
{
  debug(LOW, "HNF enumFromThenTo_build#worker@[1,1]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving enumFromThenTo_build#worker\n");
  debug_expr(LOW, root);
  return;
}

// enumFromThenTo_build#worker
Node* Prelude_enumFromThenTo_USbuild_HTworker_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF enumFromThenTo_build#worker:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
  v2 = child_at(root, 4);
  if(v5.i <= 0)
  {
    if(v6.i <= v4.i)
    {
      field v7;
      field v8;
      field v9;
      v7 = (field)(long)(v4.i + v5.i);
      v8 = make_Prelude_enumFromThenTo_USbuild_HTworker(v2, v3, v7, v5, v6, 0);
      v9 = make__int(v4.i, 0);
      set_apply2(root, v2, v9, v8);
      backup = apply_RET_hnf(backup);
      debug(LOW, "leaving enumFromThenTo_build#worker\n");
      debug_expr(LOW, root);
      return backup;
    }
    else
    {
      set_forward(root, v3);
      debug(LOW, "leaving enumFromThenTo_build#worker\n");
      debug_expr(LOW, root);
      return backup;
    }
  }
  else
  {
    if(v4.i <= v6.i)
    {
      field v10;
      field v11;
      field v12;
      v10 = (field)(long)(v4.i + v5.i);
      v11 = make_Prelude_enumFromThenTo_USbuild_HTworker(v2, v3, v10, v5, v6, 0);
      v12 = make__int(v4.i, 0);
      set_apply2(root, v2, v12, v11);
      backup = apply_RET_hnf(backup);
      debug(LOW, "leaving enumFromThenTo_build#worker\n");
      debug_expr(LOW, root);
      return backup;
    }
    else
    {
      set_forward(root, v3);
      debug(LOW, "leaving enumFromThenTo_build#worker\n");
      debug_expr(LOW, root);
      return backup;
    }
  }
}

// enumFromTo_build#worker
void Prelude_enumFromTo_USbuild_HTworker_hnf(field root)
{
  debug(LOW, "HNF enumFromTo_build#worker:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  if(v4.i <= v5.i)
  {
    field v6;
    field v7;
    field v8;
    v6 = (field)(long)(v4.i + 1);
    v7 = make_Prelude_enumFromTo_USbuild_HTworker(v2, v3, v6, v5, 0);
    v8 = make__int(v4.i, 0);
    set_apply2(root, v2, v8, v7);
    apply_hnf(root);
    debug(LOW, "leaving enumFromTo_build#worker\n");
    debug_expr(LOW, root);
    return;
  }
  else
  {
    set_forward(root, v3);
    debug(LOW, "leaving enumFromTo_build#worker\n");
    debug_expr(LOW, root);
    return;
  }
}

// enumFromTo_build#worker at [1]
void Prelude_enumFromTo_USbuild_HTworker__1_hnf(field root)
{
  debug(LOW, "HNF enumFromTo_build#worker@[1]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving enumFromTo_build#worker\n");
  debug_expr(LOW, root);
  return;
}

// enumFromTo_build#worker
Node* Prelude_enumFromTo_USbuild_HTworker_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF enumFromTo_build#worker:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
  v2 = child_at(root, 3);
  if(v4.i <= v5.i)
  {
    field v6;
    field v7;
    field v8;
    v6 = (field)(long)(v4.i + 1);
    v7 = make_Prelude_enumFromTo_USbuild_HTworker(v2, v3, v6, v5, 0);
    v8 = make__int(v4.i, 0);
    set_apply2(root, v2, v8, v7);
    backup = apply_RET_hnf(backup);
    debug(LOW, "leaving enumFromTo_build#worker\n");
    debug_expr(LOW, root);
    return backup;
  }
  else
  {
    set_forward(root, v3);
    debug(LOW, "leaving enumFromTo_build#worker\n");
    debug_expr(LOW, root);
    return backup;
  }
}

// iterate_build
void Prelude_iterate_USbuild_hnf(field root)
{
  debug(LOW, "HNF iterate_build:\n");
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
  v6 = make_apply1(v2, v3);
  v7 = make_Prelude_iterate_USbuild(v2, v6, v4, v5, 0);
  set_apply2(root, v4, v3, v7);
  apply_hnf(root);
  debug(LOW, "leaving iterate_build\n");
  debug_expr(LOW, root);
  return;
}

// iterate_build
Node* Prelude_iterate_USbuild_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF iterate_build:\n");
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
  v6 = make_apply1(v2, v3);
  v7 = make_Prelude_iterate_USbuild(v2, v6, v4, v5, 0);
  set_apply2(root, v4, v3, v7);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving iterate_build\n");
  debug_expr(LOW, root);
  return backup;
}

// span
void Prelude_span_hnf(field root)
{
  debug(LOW, "HNF span:\n");
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
            save(root, make_Prelude_span_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving span\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_span_(v2, v3, 0));
          }
          field v4;
          field v5;
          v4 = make_Prelude__LB_RB(0);
          v5 = make_Prelude__LB_RB(0);
          set_Prelude__LP_CM_RP(root, v4, v5, 0);
          debug(LOW, "leaving span\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_span_(v2, v3, 0));
          }
          field v6;
          field v7;
          field v8;
          v7 = child_at(scrutinee, 0);
          v6 = child_at(scrutinee, 1);
          v8 = make_apply1(v2, v6);
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
                    save(root, make_Prelude_span__1(v2, v6, v7, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving span\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_span__1(v2, v6, v7, v8, 0));
                  }
                  field v9;
                  set_Prelude_span(RET, v2, v7, 0);
                  v9 = RET;
                  {
                    bool nondet = false;
                    field backup9 = (field)Prelude_span_RET_hnf(NULL);
                    field scrutinee = RET;
                    if(backup9.n != NULL)
                    {
                      nondet = true;
                      memcpy(backup9.n, RET.n, sizeof(Node));
                    }
                    else if(RET.n->symbol->tag == FORWARD_TAG)
                    {
                      backup9 = RET.n->children[0];
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
                            save(root, make_Prelude_span__1_0(v6, backup9, 0));
                          }
                          fail(root);
                          debug(LOW, "leaving span\n");
                          debug_expr(LOW, root);
                          return;
                        }
                        case FUNCTION_TAG:
                        {
                          HNF(scrutinee);
                          break;
                        }
                        case CHOICE_TAG:
                        {
                          choose(scrutinee);
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
                            backup9.n = make_restore(backup9.n);
                            push_frame(backup9, free_var());
                            set_Prelude__LP_CM_RP_free(scrutinee);
                            nondet = true;
                            break;
                          }
                          else
                          {
                            push_frame(scrutinee, free_var());
                            set_Prelude__LP_CM_RP_free(scrutinee);
                            nondet = true;
                            break;
                          }
                        }
                        case Prelude__LP_CM_RP_TAG:
                        {
                          if(nondet)
                          {
                            save(root, make_Prelude_span__1_0(v6, backup9, 0));
                          }
                          field v10;
                          field v11;
                          field v12;
                          v11 = child_at(scrutinee, 0);
                          v10 = child_at(scrutinee, 1);
                          v12 = make_Prelude__CO(v6, v10, 0);
                          set_Prelude__LP_CM_RP(root, v12, v11, 0);
                          debug(LOW, "leaving span\n");
                          debug_expr(LOW, root);
                          return;
                        }
                      }
                    }
                  }
                }
                case Prelude_False_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_span__1(v2, v6, v7, v8, 0));
                  }
                  field v13;
                  field v14;
                  v13 = make_Prelude__LB_RB(0);
                  v14 = make_Prelude__CO(v6, v7, 0);
                  set_Prelude__LP_CM_RP(root, v13, v14, 0);
                  debug(LOW, "leaving span\n");
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

// span at []
void Prelude_span__hnf(field root)
{
  debug(LOW, "HNF span@[]\n");
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
            save(root, make_Prelude_span_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving span\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_span_(v2, v3, 0));
          }
          field v4;
          field v5;
          v4 = make_Prelude__LB_RB(0);
          v5 = make_Prelude__LB_RB(0);
          set_Prelude__LP_CM_RP(root, v4, v5, 0);
          debug(LOW, "leaving span\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_span_(v2, v3, 0));
          }
          field v6;
          field v7;
          field v8;
          v7 = child_at(scrutinee, 0);
          v6 = child_at(scrutinee, 1);
          v8 = make_apply1(v2, v6);
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
                    save(root, make_Prelude_span__1(v2, v6, v7, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving span\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_span__1(v2, v6, v7, v8, 0));
                  }
                  field v9;
                  set_Prelude_span(RET, v2, v7, 0);
                  v9 = RET;
                  {
                    bool nondet = false;
                    field backup9 = (field)Prelude_span_RET_hnf(NULL);
                    field scrutinee = RET;
                    if(backup9.n != NULL)
                    {
                      nondet = true;
                      memcpy(backup9.n, RET.n, sizeof(Node));
                    }
                    else if(RET.n->symbol->tag == FORWARD_TAG)
                    {
                      backup9 = RET.n->children[0];
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
                            save(root, make_Prelude_span__1_0(v6, backup9, 0));
                          }
                          fail(root);
                          debug(LOW, "leaving span\n");
                          debug_expr(LOW, root);
                          return;
                        }
                        case FUNCTION_TAG:
                        {
                          HNF(scrutinee);
                          break;
                        }
                        case CHOICE_TAG:
                        {
                          choose(scrutinee);
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
                            backup9.n = make_restore(backup9.n);
                            push_frame(backup9, free_var());
                            set_Prelude__LP_CM_RP_free(scrutinee);
                            nondet = true;
                            break;
                          }
                          else
                          {
                            push_frame(scrutinee, free_var());
                            set_Prelude__LP_CM_RP_free(scrutinee);
                            nondet = true;
                            break;
                          }
                        }
                        case Prelude__LP_CM_RP_TAG:
                        {
                          if(nondet)
                          {
                            save(root, make_Prelude_span__1_0(v6, backup9, 0));
                          }
                          field v10;
                          field v11;
                          field v12;
                          v11 = child_at(scrutinee, 0);
                          v10 = child_at(scrutinee, 1);
                          v12 = make_Prelude__CO(v6, v10, 0);
                          set_Prelude__LP_CM_RP(root, v12, v11, 0);
                          debug(LOW, "leaving span\n");
                          debug_expr(LOW, root);
                          return;
                        }
                      }
                    }
                  }
                }
                case Prelude_False_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_span__1(v2, v6, v7, v8, 0));
                  }
                  field v13;
                  field v14;
                  v13 = make_Prelude__LB_RB(0);
                  v14 = make_Prelude__CO(v6, v7, 0);
                  set_Prelude__LP_CM_RP(root, v13, v14, 0);
                  debug(LOW, "leaving span\n");
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

// span at [1]
void Prelude_span__1_hnf(field root)
{
  debug(LOW, "HNF span@[1]\n");
  debug_expr(LOW, root);
  field v2;
  field v6;
  field v7;
  field v8;
  v8 = child_at(root, 0);
  v7 = child_at(root, 1);
  v6 = child_at(root, 2);
  v2 = child_at(root, 3);
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
            save(root, make_Prelude_span__1(v2, v6, v7, v8, 0));
          }
          fail(root);
          debug(LOW, "leaving span\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_span__1(v2, v6, v7, v8, 0));
          }
          field v9;
          set_Prelude_span(RET, v2, v7, 0);
          v9 = RET;
          {
            bool nondet = false;
            field backup9 = (field)Prelude_span_RET_hnf(NULL);
            field scrutinee = RET;
            if(backup9.n != NULL)
            {
              nondet = true;
              memcpy(backup9.n, RET.n, sizeof(Node));
            }
            else if(RET.n->symbol->tag == FORWARD_TAG)
            {
              backup9 = RET.n->children[0];
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
                    save(root, make_Prelude_span__1_0(v6, backup9, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving span\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    backup9.n = make_restore(backup9.n);
                    push_frame(backup9, free_var());
                    set_Prelude__LP_CM_RP_free(scrutinee);
                    nondet = true;
                    break;
                  }
                  else
                  {
                    push_frame(scrutinee, free_var());
                    set_Prelude__LP_CM_RP_free(scrutinee);
                    nondet = true;
                    break;
                  }
                }
                case Prelude__LP_CM_RP_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_span__1_0(v6, backup9, 0));
                  }
                  field v10;
                  field v11;
                  field v12;
                  v11 = child_at(scrutinee, 0);
                  v10 = child_at(scrutinee, 1);
                  v12 = make_Prelude__CO(v6, v10, 0);
                  set_Prelude__LP_CM_RP(root, v12, v11, 0);
                  debug(LOW, "leaving span\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_span__1(v2, v6, v7, v8, 0));
          }
          field v13;
          field v14;
          v13 = make_Prelude__LB_RB(0);
          v14 = make_Prelude__CO(v6, v7, 0);
          set_Prelude__LP_CM_RP(root, v13, v14, 0);
          debug(LOW, "leaving span\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// span at [1,0]
void Prelude_span__1_0_hnf(field root)
{
  debug(LOW, "HNF span@[1,0]\n");
  debug_expr(LOW, root);
  field v6;
  field v9;
  v9 = child_at(root, 0);
  v6 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v9;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_span__1_0(v6, v9, 0));
          }
          fail(root);
          debug(LOW, "leaving span\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_span__1_0(v6, v9, 0));
          }
          field v10;
          field v11;
          field v12;
          v11 = child_at(scrutinee, 0);
          v10 = child_at(scrutinee, 1);
          v12 = make_Prelude__CO(v6, v10, 0);
          set_Prelude__LP_CM_RP(root, v12, v11, 0);
          debug(LOW, "leaving span\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// span
Node* Prelude_span_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF span:\n");
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
            backup = save_RET(backup, make_Prelude_span_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving span\n");
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
            backup = save_RET(backup, make_Prelude_span_(v2, v3, 0));
          }
          field v4;
          field v5;
          v4 = make_Prelude__LB_RB(0);
          v5 = make_Prelude__LB_RB(0);
          set_Prelude__LP_CM_RP(root, v4, v5, 0);
          debug(LOW, "leaving span\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_span_(v2, v3, 0));
          }
          field v6;
          field v7;
          field v8;
          v7 = child_at(scrutinee, 0);
          v6 = child_at(scrutinee, 1);
          v8 = make_apply1(v2, v6);
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
                    backup = save_RET(backup, make_Prelude_span__1(v2, v6, v7, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving span\n");
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
                    backup = save_RET(backup, make_Prelude_span__1(v2, v6, v7, v8, 0));
                  }
                  field v9;
                  set_Prelude_span(RET, v2, v7, 0);
                  v9 = RET;
                  {
                    bool nondet = false;
                    field backup9 = (field)Prelude_span_RET_hnf(NULL);
                    field scrutinee = RET;
                    if(backup9.n != NULL)
                    {
                      nondet = true;
                      memcpy(backup9.n, RET.n, sizeof(Node));
                    }
                    else if(RET.n->symbol->tag == FORWARD_TAG)
                    {
                      backup9 = RET.n->children[0];
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
                            backup = save_RET(backup, make_Prelude_span__1_0(v6, backup9, 0));
                          }
                          fail(root);
                          debug(LOW, "leaving span\n");
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
                            backup9.n = make_restore(backup9.n);
                            push_frame(backup9, free_var());
                            set_Prelude__LP_CM_RP_free(scrutinee);
                            nondet = true;
                            break;
                          }
                          else
                          {
                            push_frame(scrutinee, free_var());
                            set_Prelude__LP_CM_RP_free(scrutinee);
                            nondet = true;
                            break;
                          }
                        }
                        case Prelude__LP_CM_RP_TAG:
                        {
                          if(nondet)
                          {
                            backup = save_RET(backup, make_Prelude_span__1_0(v6, backup9, 0));
                          }
                          field v10;
                          field v11;
                          field v12;
                          v11 = child_at(scrutinee, 0);
                          v10 = child_at(scrutinee, 1);
                          v12 = make_Prelude__CO(v6, v10, 0);
                          set_Prelude__LP_CM_RP(root, v12, v11, 0);
                          debug(LOW, "leaving span\n");
                          debug_expr(LOW, root);
                          return backup;
                        }
                      }
                    }
                  }
                }
                case Prelude_False_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_span__1(v2, v6, v7, v8, 0));
                  }
                  field v13;
                  field v14;
                  v13 = make_Prelude__LB_RB(0);
                  v14 = make_Prelude__CO(v6, v7, 0);
                  set_Prelude__LP_CM_RP(root, v13, v14, 0);
                  debug(LOW, "leaving span\n");
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

// splitAt#worker
void Prelude_splitAt_HTworker_hnf(field root)
{
  debug(LOW, "HNF splitAt#worker:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  if(v3.i <= 0)
  {
    field v4;
    v4 = make_Prelude__LB_RB(0);
    set_Prelude__LP_CM_RP(root, v4, v2, 0);
    debug(LOW, "leaving splitAt#worker\n");
    debug_expr(LOW, root);
    return;
  }
  else
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
              save(root, make_Prelude_splitAt_HTworker__1(v2, v3, 0));
            }
            fail(root);
            debug(LOW, "leaving splitAt#worker\n");
            debug_expr(LOW, root);
            return;
          }
          case FUNCTION_TAG:
          {
            HNF(scrutinee);
            break;
          }
          case CHOICE_TAG:
          {
            choose(scrutinee);
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
              save(root, make_Prelude_splitAt_HTworker__1(v2, v3, 0));
            }
            field v5;
            field v6;
            v5 = make_Prelude__LB_RB(0);
            v6 = make_Prelude__LB_RB(0);
            set_Prelude__LP_CM_RP(root, v5, v6, 0);
            debug(LOW, "leaving splitAt#worker\n");
            debug_expr(LOW, root);
            return;
          }
          case Prelude__CO_TAG:
          {
            if(nondet)
            {
              save(root, make_Prelude_splitAt_HTworker__1(v2, v3, 0));
            }
            field v7;
            field v8;
            field v9;
            field v10;
            v8 = child_at(scrutinee, 0);
            v7 = child_at(scrutinee, 1);
            v9 = (field)(long)(v3.i - 1);
            set_Prelude_splitAt_HTworker(RET, v8, v9, 0);
            v10 = RET;
            {
              bool nondet = false;
              field backup10 = (field)Prelude_splitAt_HTworker_RET_hnf(NULL);
              field scrutinee = RET;
              if(backup10.n != NULL)
              {
                nondet = true;
                memcpy(backup10.n, RET.n, sizeof(Node));
              }
              else if(RET.n->symbol->tag == FORWARD_TAG)
              {
                backup10 = RET.n->children[0];
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
                      save(root, make_Prelude_splitAt_HTworker__1_1(v7, backup10, 0));
                    }
                    fail(root);
                    debug(LOW, "leaving splitAt#worker\n");
                    debug_expr(LOW, root);
                    return;
                  }
                  case FUNCTION_TAG:
                  {
                    HNF(scrutinee);
                    break;
                  }
                  case CHOICE_TAG:
                  {
                    choose(scrutinee);
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
                      backup10.n = make_restore(backup10.n);
                      push_frame(backup10, free_var());
                      set_Prelude__LP_CM_RP_free(scrutinee);
                      nondet = true;
                      break;
                    }
                    else
                    {
                      push_frame(scrutinee, free_var());
                      set_Prelude__LP_CM_RP_free(scrutinee);
                      nondet = true;
                      break;
                    }
                  }
                  case Prelude__LP_CM_RP_TAG:
                  {
                    if(nondet)
                    {
                      save(root, make_Prelude_splitAt_HTworker__1_1(v7, backup10, 0));
                    }
                    field v11;
                    field v12;
                    field v13;
                    v12 = child_at(scrutinee, 0);
                    v11 = child_at(scrutinee, 1);
                    v13 = make_Prelude__CO(v7, v11, 0);
                    set_Prelude__LP_CM_RP(root, v13, v12, 0);
                    debug(LOW, "leaving splitAt#worker\n");
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

// splitAt#worker at [1]
void Prelude_splitAt_HTworker__1_hnf(field root)
{
  debug(LOW, "HNF splitAt#worker@[1]\n");
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
            save(root, make_Prelude_splitAt_HTworker__1(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving splitAt#worker\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_splitAt_HTworker__1(v2, v3, 0));
          }
          field v5;
          field v6;
          v5 = make_Prelude__LB_RB(0);
          v6 = make_Prelude__LB_RB(0);
          set_Prelude__LP_CM_RP(root, v5, v6, 0);
          debug(LOW, "leaving splitAt#worker\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_splitAt_HTworker__1(v2, v3, 0));
          }
          field v7;
          field v8;
          field v9;
          field v10;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
          v9 = (field)(long)(v3.i - 1);
          set_Prelude_splitAt_HTworker(RET, v8, v9, 0);
          v10 = RET;
          {
            bool nondet = false;
            field backup10 = (field)Prelude_splitAt_HTworker_RET_hnf(NULL);
            field scrutinee = RET;
            if(backup10.n != NULL)
            {
              nondet = true;
              memcpy(backup10.n, RET.n, sizeof(Node));
            }
            else if(RET.n->symbol->tag == FORWARD_TAG)
            {
              backup10 = RET.n->children[0];
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
                    save(root, make_Prelude_splitAt_HTworker__1_1(v7, backup10, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving splitAt#worker\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    backup10.n = make_restore(backup10.n);
                    push_frame(backup10, free_var());
                    set_Prelude__LP_CM_RP_free(scrutinee);
                    nondet = true;
                    break;
                  }
                  else
                  {
                    push_frame(scrutinee, free_var());
                    set_Prelude__LP_CM_RP_free(scrutinee);
                    nondet = true;
                    break;
                  }
                }
                case Prelude__LP_CM_RP_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_splitAt_HTworker__1_1(v7, backup10, 0));
                  }
                  field v11;
                  field v12;
                  field v13;
                  v12 = child_at(scrutinee, 0);
                  v11 = child_at(scrutinee, 1);
                  v13 = make_Prelude__CO(v7, v11, 0);
                  set_Prelude__LP_CM_RP(root, v13, v12, 0);
                  debug(LOW, "leaving splitAt#worker\n");
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

// splitAt#worker at [1,1]
void Prelude_splitAt_HTworker__1_1_hnf(field root)
{
  debug(LOW, "HNF splitAt#worker@[1,1]\n");
  debug_expr(LOW, root);
  field v7;
  field v10;
  v10 = child_at(root, 0);
  v7 = child_at(root, 1);
  {
    bool nondet = false;
    field scrutinee = v10;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_splitAt_HTworker__1_1(v7, v10, 0));
          }
          fail(root);
          debug(LOW, "leaving splitAt#worker\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_splitAt_HTworker__1_1(v7, v10, 0));
          }
          field v11;
          field v12;
          field v13;
          v12 = child_at(scrutinee, 0);
          v11 = child_at(scrutinee, 1);
          v13 = make_Prelude__CO(v7, v11, 0);
          set_Prelude__LP_CM_RP(root, v13, v12, 0);
          debug(LOW, "leaving splitAt#worker\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// splitAt#worker
Node* Prelude_splitAt_HTworker_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF splitAt#worker:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  if(v3.i <= 0)
  {
    field v4;
    v4 = make_Prelude__LB_RB(0);
    set_Prelude__LP_CM_RP(root, v4, v2, 0);
    debug(LOW, "leaving splitAt#worker\n");
    debug_expr(LOW, root);
    return backup;
  }
  else
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
              backup = save_RET(backup, make_Prelude_splitAt_HTworker__1(v2, v3, 0));
            }
            fail(root);
            debug(LOW, "leaving splitAt#worker\n");
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
              backup = save_RET(backup, make_Prelude_splitAt_HTworker__1(v2, v3, 0));
            }
            field v5;
            field v6;
            v5 = make_Prelude__LB_RB(0);
            v6 = make_Prelude__LB_RB(0);
            set_Prelude__LP_CM_RP(root, v5, v6, 0);
            debug(LOW, "leaving splitAt#worker\n");
            debug_expr(LOW, root);
            return backup;
          }
          case Prelude__CO_TAG:
          {
            if(nondet)
            {
              backup = save_RET(backup, make_Prelude_splitAt_HTworker__1(v2, v3, 0));
            }
            field v7;
            field v8;
            field v9;
            field v10;
            v8 = child_at(scrutinee, 0);
            v7 = child_at(scrutinee, 1);
            v9 = (field)(long)(v3.i - 1);
            set_Prelude_splitAt_HTworker(RET, v8, v9, 0);
            v10 = RET;
            {
              bool nondet = false;
              field backup10 = (field)Prelude_splitAt_HTworker_RET_hnf(NULL);
              field scrutinee = RET;
              if(backup10.n != NULL)
              {
                nondet = true;
                memcpy(backup10.n, RET.n, sizeof(Node));
              }
              else if(RET.n->symbol->tag == FORWARD_TAG)
              {
                backup10 = RET.n->children[0];
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
                      backup = save_RET(backup, make_Prelude_splitAt_HTworker__1_1(v7, backup10, 0));
                    }
                    fail(root);
                    debug(LOW, "leaving splitAt#worker\n");
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
                      backup10.n = make_restore(backup10.n);
                      push_frame(backup10, free_var());
                      set_Prelude__LP_CM_RP_free(scrutinee);
                      nondet = true;
                      break;
                    }
                    else
                    {
                      push_frame(scrutinee, free_var());
                      set_Prelude__LP_CM_RP_free(scrutinee);
                      nondet = true;
                      break;
                    }
                  }
                  case Prelude__LP_CM_RP_TAG:
                  {
                    if(nondet)
                    {
                      backup = save_RET(backup, make_Prelude_splitAt_HTworker__1_1(v7, backup10, 0));
                    }
                    field v11;
                    field v12;
                    field v13;
                    v12 = child_at(scrutinee, 0);
                    v11 = child_at(scrutinee, 1);
                    v13 = make_Prelude__CO(v7, v11, 0);
                    set_Prelude__LP_CM_RP(root, v13, v12, 0);
                    debug(LOW, "leaving splitAt#worker\n");
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

// take#worker
void Prelude_take_HTworker_hnf(field root)
{
  debug(LOW, "HNF take#worker:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  if(v3.i <= 0)
  {
    set_Prelude__LB_RB(root, 0);
    debug(LOW, "leaving take#worker\n");
    debug_expr(LOW, root);
    return;
  }
  else
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
              save(root, make_Prelude_take_HTworker__1(v2, v3, 0));
            }
            fail(root);
            debug(LOW, "leaving take#worker\n");
            debug_expr(LOW, root);
            return;
          }
          case FUNCTION_TAG:
          {
            HNF(scrutinee);
            break;
          }
          case CHOICE_TAG:
          {
            choose(scrutinee);
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
              save(root, make_Prelude_take_HTworker__1(v2, v3, 0));
            }
            set_Prelude__LB_RB(root, 0);
            debug(LOW, "leaving take#worker\n");
            debug_expr(LOW, root);
            return;
          }
          case Prelude__CO_TAG:
          {
            if(nondet)
            {
              save(root, make_Prelude_take_HTworker__1(v2, v3, 0));
            }
            field v4;
            field v5;
            field v6;
            field v7;
            v5 = child_at(scrutinee, 0);
            v4 = child_at(scrutinee, 1);
            v6 = (field)(long)(v3.i - 1);
            v7 = make_Prelude_take_HTworker(v5, v6, 0);
            set_Prelude__CO(root, v4, v7, 0);
            debug(LOW, "leaving take#worker\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// take#worker at [1]
void Prelude_take_HTworker__1_hnf(field root)
{
  debug(LOW, "HNF take#worker@[1]\n");
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
            save(root, make_Prelude_take_HTworker__1(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving take#worker\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_take_HTworker__1(v2, v3, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving take#worker\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_take_HTworker__1(v2, v3, 0));
          }
          field v4;
          field v5;
          field v6;
          field v7;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          v6 = (field)(long)(v3.i - 1);
          v7 = make_Prelude_take_HTworker(v5, v6, 0);
          set_Prelude__CO(root, v4, v7, 0);
          debug(LOW, "leaving take#worker\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// take#worker
Node* Prelude_take_HTworker_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF take#worker:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  if(v3.i <= 0)
  {
    set_Prelude__LB_RB(root, 0);
    debug(LOW, "leaving take#worker\n");
    debug_expr(LOW, root);
    return backup;
  }
  else
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
              backup = save_RET(backup, make_Prelude_take_HTworker__1(v2, v3, 0));
            }
            fail(root);
            debug(LOW, "leaving take#worker\n");
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
              backup = save_RET(backup, make_Prelude_take_HTworker__1(v2, v3, 0));
            }
            set_Prelude__LB_RB(root, 0);
            debug(LOW, "leaving take#worker\n");
            debug_expr(LOW, root);
            return backup;
          }
          case Prelude__CO_TAG:
          {
            if(nondet)
            {
              backup = save_RET(backup, make_Prelude_take_HTworker__1(v2, v3, 0));
            }
            field v4;
            field v5;
            field v6;
            field v7;
            v5 = child_at(scrutinee, 0);
            v4 = child_at(scrutinee, 1);
            v6 = (field)(long)(v3.i - 1);
            v7 = make_Prelude_take_HTworker(v5, v6, 0);
            set_Prelude__CO(root, v4, v7, 0);
            debug(LOW, "leaving take#worker\n");
            debug_expr(LOW, root);
            return backup;
          }
        }
      }
    }
  }
}

// implementation of compare in Ord for []
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _impl#compare#Prelude.Ord#[]:\n");
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
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_(v2, v3, v4, 0));
          }
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
                    save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0(v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0(v4, 0));
                  }
                  set_Prelude_EQ(root, 0);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude__CO_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0(v4, 0));
                  }
                  field v5;
                  field v6;
                  v6 = child_at(scrutinee, 0);
                  v5 = child_at(scrutinee, 1);
                  set_Prelude_LT(root, 0);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_(v2, v3, v4, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
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
                    save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  set_Prelude_GT(root, 0);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude__CO_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  field v9;
                  field v10;
                  field v11;
                  field v12;
                  field v13;
                  v10 = child_at(scrutinee, 0);
                  v9 = child_at(scrutinee, 1);
                  v11 = make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2(v2, 0);
                  v12 = make_Prelude__EQ_EQ(v11, 0);
                  v13 = make_apply2(v12, v7, v9);
                  {
                    bool nondet = false;
                    field scrutinee = v13;
                    while(true)
                    {
                      nondet |= scrutinee.n->nondet;
                      switch(scrutinee.n->symbol->tag)
                      {
                        case FAIL_TAG:
                        {
                          if(nondet)
                          {
                            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(v2, v7, v8, v9, v10, v13, 0));
                          }
                          fail(root);
                          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                          debug_expr(LOW, root);
                          return;
                        }
                        case FUNCTION_TAG:
                        {
                          HNF(scrutinee);
                          break;
                        }
                        case CHOICE_TAG:
                        {
                          choose(scrutinee);
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
                            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(v2, v7, v8, v9, v10, v13, 0));
                          }
                          set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(root, v2, v8, v10, 0);
                          Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_hnf(root);
                          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                          debug_expr(LOW, root);
                          return;
                        }
                        case Prelude_False_TAG:
                        {
                          if(nondet)
                          {
                            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(v2, v7, v8, v9, v10, v13, 0));
                          }
                          field v14;
                          v14 = make_Prelude_compare(v2, 0);
                          set_apply2(root, v14, v7, v9);
                          apply_hnf(root);
                          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
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
    }
  }
}

// implementation of compare in Ord for [] at []
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__hnf(field root)
{
  debug(LOW, "HNF _impl#compare#Prelude.Ord#[]@[]\n");
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
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_(v2, v3, v4, 0));
          }
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
                    save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0(v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0(v4, 0));
                  }
                  set_Prelude_EQ(root, 0);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude__CO_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0(v4, 0));
                  }
                  field v5;
                  field v6;
                  v6 = child_at(scrutinee, 0);
                  v5 = child_at(scrutinee, 1);
                  set_Prelude_LT(root, 0);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_(v2, v3, v4, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
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
                    save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  set_Prelude_GT(root, 0);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude__CO_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  field v9;
                  field v10;
                  field v11;
                  field v12;
                  field v13;
                  v10 = child_at(scrutinee, 0);
                  v9 = child_at(scrutinee, 1);
                  v11 = make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2(v2, 0);
                  v12 = make_Prelude__EQ_EQ(v11, 0);
                  v13 = make_apply2(v12, v7, v9);
                  {
                    bool nondet = false;
                    field scrutinee = v13;
                    while(true)
                    {
                      nondet |= scrutinee.n->nondet;
                      switch(scrutinee.n->symbol->tag)
                      {
                        case FAIL_TAG:
                        {
                          if(nondet)
                          {
                            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(v2, v7, v8, v9, v10, v13, 0));
                          }
                          fail(root);
                          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                          debug_expr(LOW, root);
                          return;
                        }
                        case FUNCTION_TAG:
                        {
                          HNF(scrutinee);
                          break;
                        }
                        case CHOICE_TAG:
                        {
                          choose(scrutinee);
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
                            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(v2, v7, v8, v9, v10, v13, 0));
                          }
                          set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(root, v2, v8, v10, 0);
                          Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_hnf(root);
                          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                          debug_expr(LOW, root);
                          return;
                        }
                        case Prelude_False_TAG:
                        {
                          if(nondet)
                          {
                            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(v2, v7, v8, v9, v10, v13, 0));
                          }
                          field v14;
                          v14 = make_Prelude_compare(v2, 0);
                          set_apply2(root, v14, v7, v9);
                          apply_hnf(root);
                          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
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
    }
  }
}

// implementation of compare in Ord for [] at [0]
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0_hnf(field root)
{
  debug(LOW, "HNF _impl#compare#Prelude.Ord#[]@[0]\n");
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
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0(v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0(v4, 0));
          }
          set_Prelude_EQ(root, 0);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0(v4, 0));
          }
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          set_Prelude_LT(root, 0);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of compare in Ord for [] at [1]
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_hnf(field root)
{
  debug(LOW, "HNF _impl#compare#Prelude.Ord#[]@[1]\n");
  debug_expr(LOW, root);
  field v2;
  field v4;
  field v7;
  field v8;
  v8 = child_at(root, 0);
  v7 = child_at(root, 1);
  v4 = child_at(root, 2);
  v2 = child_at(root, 3);
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
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1(v2, v4, v7, v8, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1(v2, v4, v7, v8, 0));
          }
          set_Prelude_GT(root, 0);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1(v2, v4, v7, v8, 0));
          }
          field v9;
          field v10;
          field v11;
          field v12;
          field v13;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v11 = make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2(v2, 0);
          v12 = make_Prelude__EQ_EQ(v11, 0);
          v13 = make_apply2(v12, v7, v9);
          {
            bool nondet = false;
            field scrutinee = v13;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(v2, v7, v8, v9, v10, v13, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(v2, v7, v8, v9, v10, v13, 0));
                  }
                  set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(root, v2, v8, v10, 0);
                  Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_hnf(root);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_False_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(v2, v7, v8, v9, v10, v13, 0));
                  }
                  field v14;
                  v14 = make_Prelude_compare(v2, 0);
                  set_apply2(root, v14, v7, v9);
                  apply_hnf(root);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
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

// implementation of compare in Ord for [] at [1,1]
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1_hnf(field root)
{
  debug(LOW, "HNF _impl#compare#Prelude.Ord#[]@[1,1]\n");
  debug_expr(LOW, root);
  field v2;
  field v7;
  field v8;
  field v9;
  field v10;
  field v13;
  v13 = child_at(root, 0);
  v10 = child_at(root, 1);
  v9 = child_at(root, 2);
  v8 = child_at(root, 3);
  v7 = child_at(root, 4);
  v2 = child_at(root, 5);
  {
    bool nondet = false;
    field scrutinee = v13;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(v2, v7, v8, v9, v10, v13, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(v2, v7, v8, v9, v10, v13, 0));
          }
          set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(root, v2, v8, v10, 0);
          Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_hnf(root);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(v2, v7, v8, v9, v10, v13, 0));
          }
          field v14;
          v14 = make_Prelude_compare(v2, 0);
          set_apply2(root, v14, v7, v9);
          apply_hnf(root);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of compare in Ord for []
Node* Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#compare#Prelude.Ord#[]:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_(v2, v3, v4, 0));
          }
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0(v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0(v4, 0));
                  }
                  set_Prelude_EQ(root, 0);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude__CO_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__0(v4, 0));
                  }
                  field v5;
                  field v6;
                  v6 = child_at(scrutinee, 0);
                  v5 = child_at(scrutinee, 1);
                  set_Prelude_LT(root, 0);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_(v2, v3, v4, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  set_Prelude_GT(root, 0);
                  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude__CO_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  field v9;
                  field v10;
                  field v11;
                  field v12;
                  field v13;
                  v10 = child_at(scrutinee, 0);
                  v9 = child_at(scrutinee, 1);
                  v11 = make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2(v2, 0);
                  v12 = make_Prelude__EQ_EQ(v11, 0);
                  v13 = make_apply2(v12, v7, v9);
                  {
                    bool nondet = false;
                    field scrutinee = v13;
                    while(true)
                    {
                      nondet |= scrutinee.n->nondet;
                      switch(scrutinee.n->symbol->tag)
                      {
                        case FAIL_TAG:
                        {
                          if(nondet)
                          {
                            backup = save_RET(backup, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(v2, v7, v8, v9, v10, v13, 0));
                          }
                          fail(root);
                          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
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
                            backup = save_RET(backup, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(v2, v7, v8, v9, v10, v13, 0));
                          }
                          set_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB(root, v2, v8, v10, 0);
                          backup = Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_RET_hnf(backup);
                          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
                          debug_expr(LOW, root);
                          return backup;
                        }
                        case Prelude_False_TAG:
                        {
                          if(nondet)
                          {
                            backup = save_RET(backup, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB__1_1(v2, v7, v8, v9, v10, v13, 0));
                          }
                          field v14;
                          v14 = make_Prelude_compare(v2, 0);
                          set_apply2(root, v14, v7, v9);
                          backup = apply_RET_hnf(backup);
                          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]\n");
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
    }
  }
}

// implementation of compare in Ord for []
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_hnf(field root)
{
  debug(LOW, "HNF _impl#compare#Prelude.Ord#[]#A2:\n");
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
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]#A2\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTOrd_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTOrd_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v3);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]#A2\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of compare in Ord for [] at []
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2__hnf(field root)
{
  debug(LOW, "HNF _impl#compare#Prelude.Ord#[]#A2@[]\n");
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
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]#A2\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
          set_Prelude__USDict_HTOrd_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTOrd_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v3);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]#A2\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of compare in Ord for [] at [0]
void Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2__0_hnf(field root)
{
  debug(LOW, "HNF _impl#compare#Prelude.Ord#[]#A2@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving _impl#compare#Prelude.Ord#[]#A2\n");
  debug_expr(LOW, root);
  return;
}

// implementation of compare in Ord for []
Node* Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#compare#Prelude.Ord#[]#A2:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_(v2, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]#A2\n");
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
          set_Prelude__USDict_HTOrd_free(scrutinee);
          nondet = true;
          break;
        }
        case Prelude__USDict_HTOrd_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTcompare_HTPrelude_DOOrd_HT_LB_RB_HTA2_(v2, 0));
          }
          field v3;
          field v4;
          field v5;
          field v6;
          field v7;
          field v8;
          field v9;
          field v10;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v8 = child_at(scrutinee, 2);
          v7 = child_at(scrutinee, 3);
          v6 = child_at(scrutinee, 4);
          v5 = child_at(scrutinee, 5);
          v4 = child_at(scrutinee, 6);
          v3 = child_at(scrutinee, 7);
          set_forward(root, v3);
          debug(LOW, "leaving _impl#compare#Prelude.Ord#[]#A2\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of == in Eq for []
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(field root)
{
  debug(LOW, "HNF _impl#==#Prelude.Eq#[]:\n");
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
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_(v2, v3, v4, 0));
          }
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0(v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0(v4, 0));
                  }
                  set_Prelude_True(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude__CO_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0(v4, 0));
                  }
                  field v5;
                  field v6;
                  v6 = child_at(scrutinee, 0);
                  v5 = child_at(scrutinee, 1);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_(v2, v3, v4, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude__CO_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  field v9;
                  field v10;
                  field v11;
                  field v12;
                  v10 = child_at(scrutinee, 0);
                  v9 = child_at(scrutinee, 1);
                  v11 = make_Prelude__EQ_EQ(v2, 0);
                  v12 = make_apply2(v11, v7, v9);
                  {
                    bool nondet = false;
                    field scrutinee = v12;
                    while(true)
                    {
                      nondet |= scrutinee.n->nondet;
                      switch(scrutinee.n->symbol->tag)
                      {
                        case FAIL_TAG:
                        {
                          if(nondet)
                          {
                            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(v2, v8, v10, v12, 0));
                          }
                          fail(root);
                          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                          debug_expr(LOW, root);
                          return;
                        }
                        case FUNCTION_TAG:
                        {
                          HNF(scrutinee);
                          break;
                        }
                        case CHOICE_TAG:
                        {
                          choose(scrutinee);
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
                            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(v2, v8, v10, v12, 0));
                          }
                          set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v2, v8, v10, 0);
                          Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
                          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                          debug_expr(LOW, root);
                          return;
                        }
                        case Prelude_False_TAG:
                        {
                          if(nondet)
                          {
                            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(v2, v8, v10, v12, 0));
                          }
                          set_Prelude_False(root, 0);
                          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
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
    }
  }
}

// implementation of == in Eq for [] at []
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__hnf(field root)
{
  debug(LOW, "HNF _impl#==#Prelude.Eq#[]@[]\n");
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
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_(v2, v3, v4, 0));
          }
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0(v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0(v4, 0));
                  }
                  set_Prelude_True(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude__CO_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0(v4, 0));
                  }
                  field v5;
                  field v6;
                  v6 = child_at(scrutinee, 0);
                  v5 = child_at(scrutinee, 1);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
              }
            }
          }
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_(v2, v3, v4, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude__CO_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  field v9;
                  field v10;
                  field v11;
                  field v12;
                  v10 = child_at(scrutinee, 0);
                  v9 = child_at(scrutinee, 1);
                  v11 = make_Prelude__EQ_EQ(v2, 0);
                  v12 = make_apply2(v11, v7, v9);
                  {
                    bool nondet = false;
                    field scrutinee = v12;
                    while(true)
                    {
                      nondet |= scrutinee.n->nondet;
                      switch(scrutinee.n->symbol->tag)
                      {
                        case FAIL_TAG:
                        {
                          if(nondet)
                          {
                            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(v2, v8, v10, v12, 0));
                          }
                          fail(root);
                          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                          debug_expr(LOW, root);
                          return;
                        }
                        case FUNCTION_TAG:
                        {
                          HNF(scrutinee);
                          break;
                        }
                        case CHOICE_TAG:
                        {
                          choose(scrutinee);
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
                            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(v2, v8, v10, v12, 0));
                          }
                          set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v2, v8, v10, 0);
                          Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
                          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                          debug_expr(LOW, root);
                          return;
                        }
                        case Prelude_False_TAG:
                        {
                          if(nondet)
                          {
                            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(v2, v8, v10, v12, 0));
                          }
                          set_Prelude_False(root, 0);
                          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
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
    }
  }
}

// implementation of == in Eq for [] at [0]
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0_hnf(field root)
{
  debug(LOW, "HNF _impl#==#Prelude.Eq#[]@[0]\n");
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
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0(v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0(v4, 0));
          }
          set_Prelude_True(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0(v4, 0));
          }
          field v5;
          field v6;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of == in Eq for [] at [1]
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_hnf(field root)
{
  debug(LOW, "HNF _impl#==#Prelude.Eq#[]@[1]\n");
  debug_expr(LOW, root);
  field v2;
  field v4;
  field v7;
  field v8;
  v8 = child_at(root, 0);
  v7 = child_at(root, 1);
  v4 = child_at(root, 2);
  v2 = child_at(root, 3);
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
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1(v2, v4, v7, v8, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1(v2, v4, v7, v8, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1(v2, v4, v7, v8, 0));
          }
          field v9;
          field v10;
          field v11;
          field v12;
          v10 = child_at(scrutinee, 0);
          v9 = child_at(scrutinee, 1);
          v11 = make_Prelude__EQ_EQ(v2, 0);
          v12 = make_apply2(v11, v7, v9);
          {
            bool nondet = false;
            field scrutinee = v12;
            while(true)
            {
              nondet |= scrutinee.n->nondet;
              switch(scrutinee.n->symbol->tag)
              {
                case FAIL_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(v2, v8, v10, v12, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(v2, v8, v10, v12, 0));
                  }
                  set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v2, v8, v10, 0);
                  Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_False_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(v2, v8, v10, v12, 0));
                  }
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
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

// implementation of == in Eq for [] at [1,1]
void Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1_hnf(field root)
{
  debug(LOW, "HNF _impl#==#Prelude.Eq#[]@[1,1]\n");
  debug_expr(LOW, root);
  field v2;
  field v8;
  field v10;
  field v12;
  v12 = child_at(root, 0);
  v10 = child_at(root, 1);
  v8 = child_at(root, 2);
  v2 = child_at(root, 3);
  {
    bool nondet = false;
    field scrutinee = v12;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(v2, v8, v10, v12, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(v2, v8, v10, v12, 0));
          }
          set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v2, v8, v10, 0);
          Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_hnf(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(v2, v8, v10, v12, 0));
          }
          set_Prelude_False(root, 0);
          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of == in Eq for []
Node* Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#==#Prelude.Eq#[]:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_(v2, v3, v4, 0));
          }
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
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0(v4, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
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
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0(v4, 0));
                  }
                  set_Prelude_True(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude__CO_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__0(v4, 0));
                  }
                  field v5;
                  field v6;
                  v6 = child_at(scrutinee, 0);
                  v5 = child_at(scrutinee, 1);
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                  debug_expr(LOW, root);
                  return backup;
                }
              }
            }
          }
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_(v2, v3, v4, 0));
          }
          field v7;
          field v8;
          v8 = child_at(scrutinee, 0);
          v7 = child_at(scrutinee, 1);
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
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
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
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  set_Prelude_False(root, 0);
                  debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude__CO_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1(v2, v4, v7, v8, 0));
                  }
                  field v9;
                  field v10;
                  field v11;
                  field v12;
                  v10 = child_at(scrutinee, 0);
                  v9 = child_at(scrutinee, 1);
                  v11 = make_Prelude__EQ_EQ(v2, 0);
                  v12 = make_apply2(v11, v7, v9);
                  {
                    bool nondet = false;
                    field scrutinee = v12;
                    while(true)
                    {
                      nondet |= scrutinee.n->nondet;
                      switch(scrutinee.n->symbol->tag)
                      {
                        case FAIL_TAG:
                        {
                          if(nondet)
                          {
                            backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(v2, v8, v10, v12, 0));
                          }
                          fail(root);
                          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
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
                            backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(v2, v8, v10, v12, 0));
                          }
                          set_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB(root, v2, v8, v10, 0);
                          backup = Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB_RET_hnf(backup);
                          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
                          debug_expr(LOW, root);
                          return backup;
                        }
                        case Prelude_False_TAG:
                        {
                          if(nondet)
                          {
                            backup = save_RET(backup, make_Prelude__USimpl_HT_EQ_EQ_HTPrelude_DOEq_HT_LB_RB__1_1(v2, v8, v10, v12, 0));
                          }
                          set_Prelude_False(root, 0);
                          debug(LOW, "leaving _impl#==#Prelude.Eq#[]\n");
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
    }
  }
}

// dropWhile
void Prelude_dropWhile_hnf(field root)
{
  debug(LOW, "HNF dropWhile:\n");
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
            save(root, make_Prelude_dropWhile_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving dropWhile\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_dropWhile_(v2, v3, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving dropWhile\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_dropWhile_(v2, v3, 0));
          }
          field v4;
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          v6 = make_apply1(v2, v4);
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
                    save(root, make_Prelude_dropWhile__1(v2, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving dropWhile\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_dropWhile__1(v2, v4, v5, v6, 0));
                  }
                  set_Prelude_dropWhile(root, v2, v5, 0);
                  Prelude_dropWhile_hnf(root);
                  debug(LOW, "leaving dropWhile\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_False_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_dropWhile__1(v2, v4, v5, v6, 0));
                  }
                  set_Prelude__CO(root, v4, v5, 0);
                  debug(LOW, "leaving dropWhile\n");
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

// dropWhile at []
void Prelude_dropWhile__hnf(field root)
{
  debug(LOW, "HNF dropWhile@[]\n");
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
            save(root, make_Prelude_dropWhile_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving dropWhile\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_dropWhile_(v2, v3, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving dropWhile\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_dropWhile_(v2, v3, 0));
          }
          field v4;
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          v6 = make_apply1(v2, v4);
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
                    save(root, make_Prelude_dropWhile__1(v2, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving dropWhile\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_dropWhile__1(v2, v4, v5, v6, 0));
                  }
                  set_Prelude_dropWhile(root, v2, v5, 0);
                  Prelude_dropWhile_hnf(root);
                  debug(LOW, "leaving dropWhile\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_False_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_dropWhile__1(v2, v4, v5, v6, 0));
                  }
                  set_Prelude__CO(root, v4, v5, 0);
                  debug(LOW, "leaving dropWhile\n");
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

// dropWhile at [1]
void Prelude_dropWhile__1_hnf(field root)
{
  debug(LOW, "HNF dropWhile@[1]\n");
  debug_expr(LOW, root);
  field v2;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v2 = child_at(root, 3);
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
            save(root, make_Prelude_dropWhile__1(v2, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving dropWhile\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_dropWhile__1(v2, v4, v5, v6, 0));
          }
          set_Prelude_dropWhile(root, v2, v5, 0);
          Prelude_dropWhile_hnf(root);
          debug(LOW, "leaving dropWhile\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_dropWhile__1(v2, v4, v5, v6, 0));
          }
          set_Prelude__CO(root, v4, v5, 0);
          debug(LOW, "leaving dropWhile\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// dropWhile
Node* Prelude_dropWhile_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF dropWhile:\n");
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
            backup = save_RET(backup, make_Prelude_dropWhile_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving dropWhile\n");
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
            backup = save_RET(backup, make_Prelude_dropWhile_(v2, v3, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving dropWhile\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_dropWhile_(v2, v3, 0));
          }
          field v4;
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          v6 = make_apply1(v2, v4);
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
                    backup = save_RET(backup, make_Prelude_dropWhile__1(v2, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving dropWhile\n");
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
                    backup = save_RET(backup, make_Prelude_dropWhile__1(v2, v4, v5, v6, 0));
                  }
                  set_Prelude_dropWhile(root, v2, v5, 0);
                  backup = Prelude_dropWhile_RET_hnf(backup);
                  debug(LOW, "leaving dropWhile\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude_False_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_dropWhile__1(v2, v4, v5, v6, 0));
                  }
                  set_Prelude__CO(root, v4, v5, 0);
                  debug(LOW, "leaving dropWhile\n");
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

// takeWhile
void Prelude_takeWhile_hnf(field root)
{
  debug(LOW, "HNF takeWhile:\n");
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
            save(root, make_Prelude_takeWhile_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving takeWhile\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_takeWhile_(v2, v3, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving takeWhile\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_takeWhile_(v2, v3, 0));
          }
          field v4;
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          v6 = make_apply1(v2, v4);
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
                    save(root, make_Prelude_takeWhile__1(v2, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving takeWhile\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_takeWhile__1(v2, v4, v5, v6, 0));
                  }
                  field v7;
                  v7 = make_Prelude_takeWhile(v2, v5, 0);
                  set_Prelude__CO(root, v4, v7, 0);
                  debug(LOW, "leaving takeWhile\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_False_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_takeWhile__1(v2, v4, v5, v6, 0));
                  }
                  set_Prelude__LB_RB(root, 0);
                  debug(LOW, "leaving takeWhile\n");
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

// takeWhile at []
void Prelude_takeWhile__hnf(field root)
{
  debug(LOW, "HNF takeWhile@[]\n");
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
            save(root, make_Prelude_takeWhile_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving takeWhile\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_takeWhile_(v2, v3, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving takeWhile\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_takeWhile_(v2, v3, 0));
          }
          field v4;
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          v6 = make_apply1(v2, v4);
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
                    save(root, make_Prelude_takeWhile__1(v2, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving takeWhile\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_takeWhile__1(v2, v4, v5, v6, 0));
                  }
                  field v7;
                  v7 = make_Prelude_takeWhile(v2, v5, 0);
                  set_Prelude__CO(root, v4, v7, 0);
                  debug(LOW, "leaving takeWhile\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude_False_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_takeWhile__1(v2, v4, v5, v6, 0));
                  }
                  set_Prelude__LB_RB(root, 0);
                  debug(LOW, "leaving takeWhile\n");
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

// takeWhile at [1]
void Prelude_takeWhile__1_hnf(field root)
{
  debug(LOW, "HNF takeWhile@[1]\n");
  debug_expr(LOW, root);
  field v2;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v2 = child_at(root, 3);
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
            save(root, make_Prelude_takeWhile__1(v2, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving takeWhile\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_takeWhile__1(v2, v4, v5, v6, 0));
          }
          field v7;
          v7 = make_Prelude_takeWhile(v2, v5, 0);
          set_Prelude__CO(root, v4, v7, 0);
          debug(LOW, "leaving takeWhile\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude_False_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_takeWhile__1(v2, v4, v5, v6, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving takeWhile\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// takeWhile
Node* Prelude_takeWhile_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF takeWhile:\n");
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
            backup = save_RET(backup, make_Prelude_takeWhile_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving takeWhile\n");
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
            backup = save_RET(backup, make_Prelude_takeWhile_(v2, v3, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving takeWhile\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_takeWhile_(v2, v3, 0));
          }
          field v4;
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          v6 = make_apply1(v2, v4);
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
                    backup = save_RET(backup, make_Prelude_takeWhile__1(v2, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving takeWhile\n");
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
                    backup = save_RET(backup, make_Prelude_takeWhile__1(v2, v4, v5, v6, 0));
                  }
                  field v7;
                  v7 = make_Prelude_takeWhile(v2, v5, 0);
                  set_Prelude__CO(root, v4, v7, 0);
                  debug(LOW, "leaving takeWhile\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude_False_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_takeWhile__1(v2, v4, v5, v6, 0));
                  }
                  set_Prelude__LB_RB(root, 0);
                  debug(LOW, "leaving takeWhile\n");
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

// drop#worker
void Prelude_drop_HTworker_hnf(field root)
{
  debug(LOW, "HNF drop#worker:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  if(v3.i <= 0)
  {
    set_forward(root, v2);
    debug(LOW, "leaving drop#worker\n");
    debug_expr(LOW, root);
    return;
  }
  else
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
              save(root, make_Prelude_drop_HTworker__1(v2, v3, 0));
            }
            fail(root);
            debug(LOW, "leaving drop#worker\n");
            debug_expr(LOW, root);
            return;
          }
          case FUNCTION_TAG:
          {
            HNF(scrutinee);
            break;
          }
          case CHOICE_TAG:
          {
            choose(scrutinee);
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
              save(root, make_Prelude_drop_HTworker__1(v2, v3, 0));
            }
            set_Prelude__LB_RB(root, 0);
            debug(LOW, "leaving drop#worker\n");
            debug_expr(LOW, root);
            return;
          }
          case Prelude__CO_TAG:
          {
            if(nondet)
            {
              save(root, make_Prelude_drop_HTworker__1(v2, v3, 0));
            }
            field v4;
            field v5;
            field v6;
            v5 = child_at(scrutinee, 0);
            v4 = child_at(scrutinee, 1);
            v6 = (field)(long)(v3.i - 1);
            set_Prelude_drop_HTworker(root, v5, v6, 0);
            Prelude_drop_HTworker_hnf(root);
            debug(LOW, "leaving drop#worker\n");
            debug_expr(LOW, root);
            return;
          }
        }
      }
    }
  }
}

// drop#worker at [0]
void Prelude_drop_HTworker__0_hnf(field root)
{
  debug(LOW, "HNF drop#worker@[0]\n");
  debug_expr(LOW, root);
  field v2;
  v2 = child_at(root, 0);
  set_forward(root, v2);
  debug(LOW, "leaving drop#worker\n");
  debug_expr(LOW, root);
  return;
}

// drop#worker at [1]
void Prelude_drop_HTworker__1_hnf(field root)
{
  debug(LOW, "HNF drop#worker@[1]\n");
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
            save(root, make_Prelude_drop_HTworker__1(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving drop#worker\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_drop_HTworker__1(v2, v3, 0));
          }
          set_Prelude__LB_RB(root, 0);
          debug(LOW, "leaving drop#worker\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_drop_HTworker__1(v2, v3, 0));
          }
          field v4;
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
          v6 = (field)(long)(v3.i - 1);
          set_Prelude_drop_HTworker(root, v5, v6, 0);
          Prelude_drop_HTworker_hnf(root);
          debug(LOW, "leaving drop#worker\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// drop#worker
Node* Prelude_drop_HTworker_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF drop#worker:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  if(v3.i <= 0)
  {
    set_forward(root, v2);
    debug(LOW, "leaving drop#worker\n");
    debug_expr(LOW, root);
    return backup;
  }
  else
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
              backup = save_RET(backup, make_Prelude_drop_HTworker__1(v2, v3, 0));
            }
            fail(root);
            debug(LOW, "leaving drop#worker\n");
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
              backup = save_RET(backup, make_Prelude_drop_HTworker__1(v2, v3, 0));
            }
            set_Prelude__LB_RB(root, 0);
            debug(LOW, "leaving drop#worker\n");
            debug_expr(LOW, root);
            return backup;
          }
          case Prelude__CO_TAG:
          {
            if(nondet)
            {
              backup = save_RET(backup, make_Prelude_drop_HTworker__1(v2, v3, 0));
            }
            field v4;
            field v5;
            field v6;
            v5 = child_at(scrutinee, 0);
            v4 = child_at(scrutinee, 1);
            v6 = (field)(long)(v3.i - 1);
            set_Prelude_drop_HTworker(root, v5, v6, 0);
            backup = Prelude_drop_HTworker_RET_hnf(backup);
            debug(LOW, "leaving drop#worker\n");
            debug_expr(LOW, root);
            return backup;
          }
        }
      }
    }
  }
}

// foldr1
void Prelude_foldr1_hnf(field root)
{
  debug(LOW, "HNF foldr1:\n");
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
            save(root, make_Prelude_foldr1_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving foldr1\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_foldr1_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving foldr1\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldr1_(v2, v3, 0));
          }
          field v4;
          field v5;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
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
                    save(root, make_Prelude_foldr1__1(v2, v4, v5, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving foldr1\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_foldr1__1(v2, v4, v5, 0));
                  }
                  set_forward(root, v4);
                  debug(LOW, "leaving foldr1\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude__CO_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_foldr1__1(v2, v4, v5, 0));
                  }
                  field v6;
                  field v7;
                  field v8;
                  field v9;
                  v7 = child_at(scrutinee, 0);
                  v6 = child_at(scrutinee, 1);
                  v8 = make_Prelude__CO(v6, v7, 0);
                  v9 = make_Prelude_foldr1(v2, v8, 0);
                  set_apply2(root, v2, v4, v9);
                  apply_hnf(root);
                  debug(LOW, "leaving foldr1\n");
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

// foldr1 at []
void Prelude_foldr1__hnf(field root)
{
  debug(LOW, "HNF foldr1@[]\n");
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
            save(root, make_Prelude_foldr1_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving foldr1\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_foldr1_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving foldr1\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldr1_(v2, v3, 0));
          }
          field v4;
          field v5;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
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
                    save(root, make_Prelude_foldr1__1(v2, v4, v5, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving foldr1\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
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
                    save(root, make_Prelude_foldr1__1(v2, v4, v5, 0));
                  }
                  set_forward(root, v4);
                  debug(LOW, "leaving foldr1\n");
                  debug_expr(LOW, root);
                  return;
                }
                case Prelude__CO_TAG:
                {
                  if(nondet)
                  {
                    save(root, make_Prelude_foldr1__1(v2, v4, v5, 0));
                  }
                  field v6;
                  field v7;
                  field v8;
                  field v9;
                  v7 = child_at(scrutinee, 0);
                  v6 = child_at(scrutinee, 1);
                  v8 = make_Prelude__CO(v6, v7, 0);
                  v9 = make_Prelude_foldr1(v2, v8, 0);
                  set_apply2(root, v2, v4, v9);
                  apply_hnf(root);
                  debug(LOW, "leaving foldr1\n");
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

// foldr1 at [1]
void Prelude_foldr1__1_hnf(field root)
{
  debug(LOW, "HNF foldr1@[1]\n");
  debug_expr(LOW, root);
  field v2;
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v2 = child_at(root, 2);
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
            save(root, make_Prelude_foldr1__1(v2, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving foldr1\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_foldr1__1(v2, v4, v5, 0));
          }
          set_forward(root, v4);
          debug(LOW, "leaving foldr1\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldr1__1(v2, v4, v5, 0));
          }
          field v6;
          field v7;
          field v8;
          field v9;
          v7 = child_at(scrutinee, 0);
          v6 = child_at(scrutinee, 1);
          v8 = make_Prelude__CO(v6, v7, 0);
          v9 = make_Prelude_foldr1(v2, v8, 0);
          set_apply2(root, v2, v4, v9);
          apply_hnf(root);
          debug(LOW, "leaving foldr1\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// foldr1 at [1,0]
void Prelude_foldr1__1_0_hnf(field root)
{
  debug(LOW, "HNF foldr1@[1,0]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving foldr1\n");
  debug_expr(LOW, root);
  return;
}

// foldr1
Node* Prelude_foldr1_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF foldr1:\n");
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
            backup = save_RET(backup, make_Prelude_foldr1_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving foldr1\n");
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
            backup = save_RET(backup, make_Prelude_foldr1_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving foldr1\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_foldr1_(v2, v3, 0));
          }
          field v4;
          field v5;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
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
                    backup = save_RET(backup, make_Prelude_foldr1__1(v2, v4, v5, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving foldr1\n");
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
                    backup = save_RET(backup, make_Prelude_foldr1__1(v2, v4, v5, 0));
                  }
                  set_forward(root, v4);
                  debug(LOW, "leaving foldr1\n");
                  debug_expr(LOW, root);
                  return backup;
                }
                case Prelude__CO_TAG:
                {
                  if(nondet)
                  {
                    backup = save_RET(backup, make_Prelude_foldr1__1(v2, v4, v5, 0));
                  }
                  field v6;
                  field v7;
                  field v8;
                  field v9;
                  v7 = child_at(scrutinee, 0);
                  v6 = child_at(scrutinee, 1);
                  v8 = make_Prelude__CO(v6, v7, 0);
                  v9 = make_Prelude_foldr1(v2, v8, 0);
                  set_apply2(root, v2, v4, v9);
                  backup = apply_RET_hnf(backup);
                  debug(LOW, "leaving foldr1\n");
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

// foldl
void Prelude_foldl_hnf(field root)
{
  debug(LOW, "HNF foldl:\n");
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
            save(root, make_Prelude_foldl_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving foldl\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_foldl_(v2, v3, v4, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving foldl\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldl_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          field v7;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v7 = make_apply2(v2, v3, v5);
          set_Prelude_foldl(root, v2, v7, v6, 0);
          Prelude_foldl_hnf(root);
          debug(LOW, "leaving foldl\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// foldl at []
void Prelude_foldl__hnf(field root)
{
  debug(LOW, "HNF foldl@[]\n");
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
            save(root, make_Prelude_foldl_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving foldl\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude_foldl_(v2, v3, v4, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving foldl\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude_foldl_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          field v7;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v7 = make_apply2(v2, v3, v5);
          set_Prelude_foldl(root, v2, v7, v6, 0);
          Prelude_foldl_hnf(root);
          debug(LOW, "leaving foldl\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// foldl at [0]
void Prelude_foldl__0_hnf(field root)
{
  debug(LOW, "HNF foldl@[0]\n");
  debug_expr(LOW, root);
  field v3;
  v3 = child_at(root, 0);
  set_forward(root, v3);
  debug(LOW, "leaving foldl\n");
  debug_expr(LOW, root);
  return;
}

// foldl
Node* Prelude_foldl_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF foldl:\n");
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
            backup = save_RET(backup, make_Prelude_foldl_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving foldl\n");
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
            backup = save_RET(backup, make_Prelude_foldl_(v2, v3, v4, 0));
          }
          set_forward(root, v3);
          debug(LOW, "leaving foldl\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude_foldl_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          field v7;
          v6 = child_at(scrutinee, 0);
          v5 = child_at(scrutinee, 1);
          v7 = make_apply2(v2, v3, v5);
          set_Prelude_foldl(root, v2, v7, v6, 0);
          backup = Prelude_foldl_RET_hnf(backup);
          debug(LOW, "leaving foldl\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// !!
void Prelude__EX_EX_hnf(field root)
{
  debug(LOW, "HNF !!:\n");
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
            save(root, make_Prelude__EX_EX_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving !!\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__EX_EX_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving !!\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__EX_EX_(v2, v3, 0));
          }
          field v4;
          field v5;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
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
                    save(root, make_Prelude__EX_EX__1(v3, v4, v5, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving !!\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude__EX_EX__1(v3, v4, v5, 0));
                  }
                  field v6;
                  v6 = child_at(scrutinee, 0);
                  if(v6.i == 0)
                  {
                    set_forward(root, v4);
                    debug(LOW, "leaving !!\n");
                    debug_expr(LOW, root);
                    return;
                  }
                  else
                  {
                    if(v6.i <= 0)
                    {
                      set_Prelude_failed(root, 0);
                      Prelude_failed_hnf(root);
                      debug(LOW, "leaving !!\n");
                      debug_expr(LOW, root);
                      return;
                    }
                    else
                    {
                      field v7;
                      field v8;
                      v7 = (field)(long)(v6.i - 1);
                      v8 = make__int(v7.i, 0);
                      set_Prelude__EX_EX(root, v5, v8, 0);
                      Prelude__EX_EX_hnf(root);
                      debug(LOW, "leaving !!\n");
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
}

// !! at []
void Prelude__EX_EX__hnf(field root)
{
  debug(LOW, "HNF !!@[]\n");
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
            save(root, make_Prelude__EX_EX_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving !!\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
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
            save(root, make_Prelude__EX_EX_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving !!\n");
          debug_expr(LOW, root);
          return;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__EX_EX_(v2, v3, 0));
          }
          field v4;
          field v5;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
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
                    save(root, make_Prelude__EX_EX__1(v3, v4, v5, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving !!\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude__EX_EX__1(v3, v4, v5, 0));
                  }
                  field v6;
                  v6 = child_at(scrutinee, 0);
                  if(v6.i == 0)
                  {
                    set_forward(root, v4);
                    debug(LOW, "leaving !!\n");
                    debug_expr(LOW, root);
                    return;
                  }
                  else
                  {
                    if(v6.i <= 0)
                    {
                      set_Prelude_failed(root, 0);
                      Prelude_failed_hnf(root);
                      debug(LOW, "leaving !!\n");
                      debug_expr(LOW, root);
                      return;
                    }
                    else
                    {
                      field v7;
                      field v8;
                      v7 = (field)(long)(v6.i - 1);
                      v8 = make__int(v7.i, 0);
                      set_Prelude__EX_EX(root, v5, v8, 0);
                      Prelude__EX_EX_hnf(root);
                      debug(LOW, "leaving !!\n");
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
}

// !! at [1]
void Prelude__EX_EX__1_hnf(field root)
{
  debug(LOW, "HNF !!@[1]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  field v5;
  v5 = child_at(root, 0);
  v4 = child_at(root, 1);
  v3 = child_at(root, 2);
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
            save(root, make_Prelude__EX_EX__1(v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving !!\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__EX_EX__1(v3, v4, v5, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
          if(v6.i == 0)
          {
            set_forward(root, v4);
            debug(LOW, "leaving !!\n");
            debug_expr(LOW, root);
            return;
          }
          else
          {
            if(v6.i <= 0)
            {
              set_Prelude_failed(root, 0);
              Prelude_failed_hnf(root);
              debug(LOW, "leaving !!\n");
              debug_expr(LOW, root);
              return;
            }
            else
            {
              field v7;
              field v8;
              v7 = (field)(long)(v6.i - 1);
              v8 = make__int(v7.i, 0);
              set_Prelude__EX_EX(root, v5, v8, 0);
              Prelude__EX_EX_hnf(root);
              debug(LOW, "leaving !!\n");
              debug_expr(LOW, root);
              return;
            }
          }
        }
      }
    }
  }
}

// !! at [1,0,0]
void Prelude__EX_EX__1_0_0_hnf(field root)
{
  debug(LOW, "HNF !!@[1,0,0]\n");
  debug_expr(LOW, root);
  field v4;
  v4 = child_at(root, 0);
  set_forward(root, v4);
  debug(LOW, "leaving !!\n");
  debug_expr(LOW, root);
  return;
}

// !!
Node* Prelude__EX_EX_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF !!:\n");
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
            backup = save_RET(backup, make_Prelude__EX_EX_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving !!\n");
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
            backup = save_RET(backup, make_Prelude__EX_EX_(v2, v3, 0));
          }
          fail(root);
          debug(LOW, "leaving !!\n");
          debug_expr(LOW, root);
          return backup;
        }
        case Prelude__CO_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__EX_EX_(v2, v3, 0));
          }
          field v4;
          field v5;
          v5 = child_at(scrutinee, 0);
          v4 = child_at(scrutinee, 1);
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
                    backup = save_RET(backup, make_Prelude__EX_EX__1(v3, v4, v5, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving !!\n");
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
                    backup = save_RET(backup, make_Prelude__EX_EX__1(v3, v4, v5, 0));
                  }
                  field v6;
                  v6 = child_at(scrutinee, 0);
                  if(v6.i == 0)
                  {
                    set_forward(root, v4);
                    debug(LOW, "leaving !!\n");
                    debug_expr(LOW, root);
                    return backup;
                  }
                  else
                  {
                    if(v6.i <= 0)
                    {
                      set_Prelude_failed(root, 0);
                      backup = Prelude_failed_RET_hnf(backup);
                      debug(LOW, "leaving !!\n");
                      debug_expr(LOW, root);
                      return backup;
                    }
                    else
                    {
                      field v7;
                      field v8;
                      v7 = (field)(long)(v6.i - 1);
                      v8 = make__int(v7.i, 0);
                      set_Prelude__EX_EX(root, v5, v8, 0);
                      backup = Prelude__EX_EX_RET_hnf(backup);
                      debug(LOW, "leaving !!\n");
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
}

// implementation of enumFromThenTo in Enum for Char
void Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromThenTo#Prelude.Enum#Prelude.Char:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar(0);
  set_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum(root, v5, v2, v3, v4, 0);
  Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_hnf(root);
  debug(LOW, "leaving _impl#enumFromThenTo#Prelude.Enum#Prelude.Char\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFromThenTo in Enum for Char
Node* Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromThenTo#Prelude.Enum#Prelude.Char:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar(0);
  set_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum(root, v5, v2, v3, v4, 0);
  backup = Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFromThenTo#Prelude.Enum#Prelude.Char\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFromTo in Enum for Char
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Char:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar(v2, 0);
  v5 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar(v3, 0);
  v6 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v6, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Char\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFromTo in Enum for Char
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Char:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar(v2, 0);
  v5 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar(v3, 0);
  v6 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v6, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Char\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFromTo in Enum for Char
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17:\n");
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
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__0(v3, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__0(v3, v4, v5, v6, 0));
                  }
                  field v7;
                  field v8;
                  v7 = child_at(scrutinee, 0);
                  v8 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_HTP18(v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v8, v5, v6, v7, 0);
                  Prelude_enumFromTo_USbuild_HTworker_hnf(root);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17\n");
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

// implementation of enumFromTo in Enum for Char at []
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17@[]\n");
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
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__0(v3, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__0(v3, v4, v5, v6, 0));
                  }
                  field v7;
                  field v8;
                  v7 = child_at(scrutinee, 0);
                  v8 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_HTP18(v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v8, v5, v6, v7, 0);
                  Prelude_enumFromTo_USbuild_HTworker_hnf(root);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17\n");
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

// implementation of enumFromTo in Enum for Char at [0]
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__0_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
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
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__0(v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__0(v3, v4, v5, v6, 0));
          }
          field v7;
          field v8;
          v7 = child_at(scrutinee, 0);
          v8 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_HTP18(v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromTo_USbuild_HTworker(root, v8, v5, v6, v7, 0);
          Prelude_enumFromTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of enumFromTo in Enum for Char
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17:\n");
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
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__0(v3, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17\n");
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17__0(v3, v4, v5, v6, 0));
                  }
                  field v7;
                  field v8;
                  v7 = child_at(scrutinee, 0);
                  v8 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_HTP18(v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v8, v5, v6, v7, 0);
                  backup = Prelude_enumFromTo_USbuild_HTworker_RET_hnf(backup);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17\n");
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

// implementation of enumFromTo in Enum for Char
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_HTP18_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17#P18:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar(v3, 0);
  set_apply2(root, v2, v5, v4);
  apply_hnf(root);
  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17#P18\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFromTo in Enum for Char
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOChar_HTP17_HTP18_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17#P18:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar(v3, 0);
  set_apply2(root, v2, v5, v4);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Char#P17#P18\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFromThen in Enum for Char
void Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromThen#Prelude.Enum#Prelude.Char:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar(0);
  v5 = make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar((field)(Node*)NULL, 1);
  v6 = make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar((field)(Node*)NULL, 1);
  v7 = make_Prelude__USDict_HTBounded(v5, v6, 0);
  set_Prelude_boundedEnumFromThen(root, v7, v4, v2, v3, 0);
  Prelude_boundedEnumFromThen_hnf(root);
  debug(LOW, "leaving _impl#enumFromThen#Prelude.Enum#Prelude.Char\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFromThen in Enum for Char
Node* Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromThen#Prelude.Enum#Prelude.Char:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOChar(0);
  v5 = make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOChar((field)(Node*)NULL, 1);
  v6 = make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOChar((field)(Node*)NULL, 1);
  v7 = make_Prelude__USDict_HTBounded(v5, v6, 0);
  set_Prelude_boundedEnumFromThen(root, v7, v4, v2, v3, 0);
  backup = Prelude_boundedEnumFromThen_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFromThen#Prelude.Enum#Prelude.Char\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFrom in Enum for Char
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Char:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar(v2, 0);
  v4 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v4, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Char\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFrom in Enum for Char
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Char:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOChar(v2, 0);
  v4 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v4, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Char\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFrom in Enum for Char
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Char#P19:\n");
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
            save(root, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Char#P19\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_HTP20(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromTo_USbuild_HTworker(root, v6, v4, v5, (field)(long)(1114111), 0);
          Prelude_enumFromTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Char#P19\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of enumFrom in Enum for Char at []
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19__hnf(field root)
{
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Char#P19@[]\n");
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
            save(root, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Char#P19\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_HTP20(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromTo_USbuild_HTworker(root, v6, v4, v5, (field)(long)(1114111), 0);
          Prelude_enumFromTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Char#P19\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of enumFrom in Enum for Char
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Char#P19:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Char#P19\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_HTP20(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromTo_USbuild_HTworker(root, v6, v4, v5, (field)(long)(1114111), 0);
          backup = Prelude_enumFromTo_USbuild_HTworker_RET_hnf(backup);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Char#P19\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of enumFrom in Enum for Char
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_HTP20_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Char#P19#P20:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar(v3, 0);
  set_apply2(root, v2, v5, v4);
  apply_hnf(root);
  debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Char#P19#P20\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFrom in Enum for Char
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOChar_HTP19_HTP20_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Char#P19#P20:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOChar(v3, 0);
  set_apply2(root, v2, v5, v4);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Char#P19#P20\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFromThenTo in Enum for Ordering
void Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromThenTo#Prelude.Enum#Prelude.Ordering:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering(0);
  set_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum(root, v5, v2, v3, v4, 0);
  Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_hnf(root);
  debug(LOW, "leaving _impl#enumFromThenTo#Prelude.Enum#Prelude.Ordering\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFromThenTo in Enum for Ordering
Node* Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromThenTo#Prelude.Enum#Prelude.Ordering:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering(0);
  set_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum(root, v5, v2, v3, v4, 0);
  backup = Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFromThenTo#Prelude.Enum#Prelude.Ordering\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFromTo in Enum for Ordering
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Ordering:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(v2, 0);
  v5 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(v3, 0);
  v6 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v6, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Ordering\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFromTo in Enum for Ordering
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Ordering:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(v2, 0);
  v5 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(v3, 0);
  v6 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v6, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Ordering\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFromTo in Enum for Ordering
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21:\n");
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
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__0(v3, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__0(v3, v4, v5, v6, 0));
                  }
                  field v7;
                  field v8;
                  v7 = child_at(scrutinee, 0);
                  v8 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_HTP22(v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v8, v5, v6, v7, 0);
                  Prelude_enumFromTo_USbuild_HTworker_hnf(root);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21\n");
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

// implementation of enumFromTo in Enum for Ordering at []
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21@[]\n");
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
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__0(v3, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__0(v3, v4, v5, v6, 0));
                  }
                  field v7;
                  field v8;
                  v7 = child_at(scrutinee, 0);
                  v8 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_HTP22(v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v8, v5, v6, v7, 0);
                  Prelude_enumFromTo_USbuild_HTworker_hnf(root);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21\n");
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

// implementation of enumFromTo in Enum for Ordering at [0]
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__0_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
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
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__0(v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__0(v3, v4, v5, v6, 0));
          }
          field v7;
          field v8;
          v7 = child_at(scrutinee, 0);
          v8 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_HTP22(v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromTo_USbuild_HTworker(root, v8, v5, v6, v7, 0);
          Prelude_enumFromTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of enumFromTo in Enum for Ordering
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21:\n");
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
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__0(v3, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21\n");
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21__0(v3, v4, v5, v6, 0));
                  }
                  field v7;
                  field v8;
                  v7 = child_at(scrutinee, 0);
                  v8 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_HTP22(v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v8, v5, v6, v7, 0);
                  backup = Prelude_enumFromTo_USbuild_HTworker_RET_hnf(backup);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21\n");
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

// implementation of enumFromTo in Enum for Ordering
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_HTP22_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21#P22:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(v3, 0);
  set_apply2(root, v2, v5, v4);
  apply_hnf(root);
  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21#P22\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFromTo in Enum for Ordering
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP21_HTP22_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21#P22:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(v3, 0);
  set_apply2(root, v2, v5, v4);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Ordering#P21#P22\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFromThen in Enum for Ordering
void Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromThen#Prelude.Enum#Prelude.Ordering:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering(0);
  v5 = make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  v6 = make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  v7 = make_Prelude__USDict_HTBounded(v5, v6, 0);
  set_Prelude_boundedEnumFromThen(root, v7, v4, v2, v3, 0);
  Prelude_boundedEnumFromThen_hnf(root);
  debug(LOW, "leaving _impl#enumFromThen#Prelude.Enum#Prelude.Ordering\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFromThen in Enum for Ordering
Node* Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromThen#Prelude.Enum#Prelude.Ordering:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOOrdering(0);
  v5 = make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  v6 = make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOOrdering((field)(Node*)NULL, 1);
  v7 = make_Prelude__USDict_HTBounded(v5, v6, 0);
  set_Prelude_boundedEnumFromThen(root, v7, v4, v2, v3, 0);
  backup = Prelude_boundedEnumFromThen_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFromThen#Prelude.Enum#Prelude.Ordering\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFrom in Enum for Ordering
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Ordering:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(v2, 0);
  v4 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v4, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Ordering\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFrom in Enum for Ordering
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Ordering:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(v2, 0);
  v4 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v4, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Ordering\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFrom in Enum for Ordering
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23:\n");
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
            save(root, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_HTP24(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromTo_USbuild_HTworker(root, v6, v4, v5, (field)(long)(2), 0);
          Prelude_enumFromTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of enumFrom in Enum for Ordering at []
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23__hnf(field root)
{
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23@[]\n");
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
            save(root, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_HTP24(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromTo_USbuild_HTworker(root, v6, v4, v5, (field)(long)(2), 0);
          Prelude_enumFromTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of enumFrom in Enum for Ordering
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_HTP24(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromTo_USbuild_HTworker(root, v6, v4, v5, (field)(long)(2), 0);
          backup = Prelude_enumFromTo_USbuild_HTworker_RET_hnf(backup);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of enumFrom in Enum for Ordering
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_HTP24_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23#P24:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(v3, 0);
  set_apply2(root, v2, v5, v4);
  apply_hnf(root);
  debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23#P24\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFrom in Enum for Ordering
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOOrdering_HTP23_HTP24_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23#P24:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOOrdering(v3, 0);
  set_apply2(root, v2, v5, v4);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Ordering#P23#P24\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFromThenTo in Enum for Bool
void Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromThenTo#Prelude.Enum#Prelude.Bool:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool(0);
  set_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum(root, v5, v2, v3, v4, 0);
  Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_hnf(root);
  debug(LOW, "leaving _impl#enumFromThenTo#Prelude.Enum#Prelude.Bool\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFromThenTo in Enum for Bool
Node* Prelude__USimpl_HTenumFromThenTo_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromThenTo#Prelude.Enum#Prelude.Bool:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool(0);
  set_Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum(root, v5, v2, v3, v4, 0);
  backup = Prelude__USdef_HTenumFromThenTo_HTPrelude_DOEnum_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFromThenTo#Prelude.Enum#Prelude.Bool\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFromTo in Enum for Bool
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Bool:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool(v2, 0);
  v5 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool(v3, 0);
  v6 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v6, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Bool\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFromTo in Enum for Bool
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Bool:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool(v2, 0);
  v5 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool(v3, 0);
  v6 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25(v4, v5, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v6, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Bool\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFromTo in Enum for Bool
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25:\n");
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
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__0(v3, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__0(v3, v4, v5, v6, 0));
                  }
                  field v7;
                  field v8;
                  v7 = child_at(scrutinee, 0);
                  v8 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_HTP26(v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v8, v5, v6, v7, 0);
                  Prelude_enumFromTo_USbuild_HTworker_hnf(root);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25\n");
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

// implementation of enumFromTo in Enum for Bool at []
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25@[]\n");
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
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
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
                    save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__0(v3, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25\n");
                  debug_expr(LOW, root);
                  return;
                }
                case FUNCTION_TAG:
                {
                  HNF(scrutinee);
                  break;
                }
                case CHOICE_TAG:
                {
                  choose(scrutinee);
                  break;
                }
                case FORWARD_TAG:
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
                    save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__0(v3, v4, v5, v6, 0));
                  }
                  field v7;
                  field v8;
                  v7 = child_at(scrutinee, 0);
                  v8 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_HTP26(v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v8, v5, v6, v7, 0);
                  Prelude_enumFromTo_USbuild_HTworker_hnf(root);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25\n");
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

// implementation of enumFromTo in Enum for Bool at [0]
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__0_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25@[0]\n");
  debug_expr(LOW, root);
  field v3;
  field v4;
  field v5;
  field v6;
  v6 = child_at(root, 0);
  v5 = child_at(root, 1);
  v4 = child_at(root, 2);
  v3 = child_at(root, 3);
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
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__0(v3, v4, v5, v6, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__0(v3, v4, v5, v6, 0));
          }
          field v7;
          field v8;
          v7 = child_at(scrutinee, 0);
          v8 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_HTP26(v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromTo_USbuild_HTworker(root, v8, v5, v6, v7, 0);
          Prelude_enumFromTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of enumFromTo in Enum for Bool
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25:\n");
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
    field scrutinee = v2;
    while(true)
    {
      nondet |= scrutinee.n->nondet;
      switch(scrutinee.n->symbol->tag)
      {
        case FAIL_TAG:
        {
          if(nondet)
          {
            backup = save_RET(backup, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_(v2, v3, v4, v5, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_(v2, v3, v4, v5, 0));
          }
          field v6;
          v6 = child_at(scrutinee, 0);
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__0(v3, v4, v5, v6, 0));
                  }
                  fail(root);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25\n");
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
                    backup = save_RET(backup, make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25__0(v3, v4, v5, v6, 0));
                  }
                  field v7;
                  field v8;
                  v7 = child_at(scrutinee, 0);
                  v8 = make_Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_HTP26(v4, (field)(Node*)NULL, (field)(Node*)NULL, 2);
                  set_Prelude_enumFromTo_USbuild_HTworker(root, v8, v5, v6, v7, 0);
                  backup = Prelude_enumFromTo_USbuild_HTworker_RET_hnf(backup);
                  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25\n");
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

// implementation of enumFromTo in Enum for Bool
void Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_HTP26_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25#P26:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool(v3, 0);
  set_apply2(root, v2, v5, v4);
  apply_hnf(root);
  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25#P26\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFromTo in Enum for Bool
Node* Prelude__USimpl_HTenumFromTo_HTPrelude_DOEnum_HTPrelude_DOBool_HTP25_HTP26_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25#P26:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool(v3, 0);
  set_apply2(root, v2, v5, v4);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFromTo#Prelude.Enum#Prelude.Bool#P25#P26\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFromThen in Enum for Bool
void Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFromThen#Prelude.Enum#Prelude.Bool:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool(0);
  v5 = make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool((field)(Node*)NULL, 1);
  v6 = make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool((field)(Node*)NULL, 1);
  v7 = make_Prelude__USDict_HTBounded(v5, v6, 0);
  set_Prelude_boundedEnumFromThen(root, v7, v4, v2, v3, 0);
  Prelude_boundedEnumFromThen_hnf(root);
  debug(LOW, "leaving _impl#enumFromThen#Prelude.Enum#Prelude.Bool\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFromThen in Enum for Bool
Node* Prelude__USimpl_HTenumFromThen_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFromThen#Prelude.Enum#Prelude.Bool:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  field v6;
  field v7;
  v3 = child_at(root, 0);
  v2 = child_at(root, 1);
  v4 = make_Prelude__USinst_HTPrelude_DOEnum_HTPrelude_DOBool(0);
  v5 = make_Prelude__USimpl_HTminBound_HTPrelude_DOBounded_HTPrelude_DOBool((field)(Node*)NULL, 1);
  v6 = make_Prelude__USimpl_HTmaxBound_HTPrelude_DOBounded_HTPrelude_DOBool((field)(Node*)NULL, 1);
  v7 = make_Prelude__USDict_HTBounded(v5, v6, 0);
  set_Prelude_boundedEnumFromThen(root, v7, v4, v2, v3, 0);
  backup = Prelude_boundedEnumFromThen_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFromThen#Prelude.Enum#Prelude.Bool\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFrom in Enum for Bool
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Bool:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool(v2, 0);
  v4 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v4, 0);
  Prelude_build_hnf(root);
  debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Bool\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFrom in Enum for Bool
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Bool:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  v2 = child_at(root, 0);
  v3 = make_Prelude__USimpl_HTfromEnum_HTPrelude_DOEnum_HTPrelude_DOBool(v2, 0);
  v4 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
  set_Prelude_build(root, v4, 0);
  backup = Prelude_build_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Bool\n");
  debug_expr(LOW, root);
  return backup;
}

// implementation of enumFrom in Enum for Bool
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Bool#P27:\n");
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
            save(root, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Bool#P27\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_HTP28(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromTo_USbuild_HTworker(root, v6, v4, v5, (field)(long)(1), 0);
          Prelude_enumFromTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Bool#P27\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of enumFrom in Enum for Bool at []
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27__hnf(field root)
{
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Bool#P27@[]\n");
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
            save(root, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Bool#P27\n");
          debug_expr(LOW, root);
          return;
        }
        case FUNCTION_TAG:
        {
          HNF(scrutinee);
          break;
        }
        case CHOICE_TAG:
        {
          choose(scrutinee);
          break;
        }
        case FORWARD_TAG:
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
            save(root, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_HTP28(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromTo_USbuild_HTworker(root, v6, v4, v5, (field)(long)(1), 0);
          Prelude_enumFromTo_USbuild_HTworker_hnf(root);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Bool#P27\n");
          debug_expr(LOW, root);
          return;
        }
      }
    }
  }
}

// implementation of enumFrom in Enum for Bool
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Bool#P27:\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_(v2, v3, v4, 0));
          }
          fail(root);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Bool#P27\n");
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
            backup = save_RET(backup, make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_(v2, v3, v4, 0));
          }
          field v5;
          field v6;
          v5 = child_at(scrutinee, 0);
          v6 = make_Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_HTP28(v3, (field)(Node*)NULL, (field)(Node*)NULL, 2);
          set_Prelude_enumFromTo_USbuild_HTworker(root, v6, v4, v5, (field)(long)(1), 0);
          backup = Prelude_enumFromTo_USbuild_HTworker_RET_hnf(backup);
          debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Bool#P27\n");
          debug_expr(LOW, root);
          return backup;
        }
      }
    }
  }
}

// implementation of enumFrom in Enum for Bool
void Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_HTP28_hnf(field root)
{
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Bool#P27#P28:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool(v3, 0);
  set_apply2(root, v2, v5, v4);
  apply_hnf(root);
  debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Bool#P27#P28\n");
  debug_expr(LOW, root);
  return;
}

// implementation of enumFrom in Enum for Bool
Node* Prelude__USimpl_HTenumFrom_HTPrelude_DOEnum_HTPrelude_DOBool_HTP27_HTP28_RET_hnf(Node* backup)
{
  field root = RET;
  debug(LOW, "HNF _impl#enumFrom#Prelude.Enum#Prelude.Bool#P27#P28:\n");
  debug_expr(LOW, root);
  field v2;
  field v3;
  field v4;
  field v5;
  v4 = child_at(root, 0);
  v3 = child_at(root, 1);
  v2 = child_at(root, 2);
  v5 = make_Prelude__USimpl_HTtoEnum_HTPrelude_DOEnum_HTPrelude_DOBool(v3, 0);
  set_apply2(root, v2, v5, v4);
  backup = apply_RET_hnf(backup);
  debug(LOW, "leaving _impl#enumFrom#Prelude.Enum#Prelude.Bool#P27#P28\n");
  debug_expr(LOW, root);
  return backup;
}

