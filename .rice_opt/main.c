#include <stdio.h>
#include "node.h"
#include "stack.h"
#include "runtime.h"
#include "memory.h"
#include "fibPeano.h"
Stack* bt_stack;
field RET;
unsigned long mem;

field Num[256];
field Prelude__LP_RP;
field Prelude_False;
field Prelude_True;
field Prelude_Nothing;
field Prelude_LT;
field Prelude_EQ;
field Prelude_GT;
field Prelude__LB_RB;
field fibPeano_Z;

void makeCrap()
{
  Prelude__LP_RP.n = (Node*)alloc(sizeof(Node));
  Prelude__LP_RP.n->symbol = &Prelude__LP_RP_symbol;
  Prelude__LP_RP.n->missing = 0;
  
  Prelude_False.n = (Node*)alloc(sizeof(Node));
  Prelude_False.n->symbol = &Prelude_False_symbol;
  Prelude_False.n->missing = 0;
  
  Prelude_True.n = (Node*)alloc(sizeof(Node));
  Prelude_True.n->symbol = &Prelude_True_symbol;
  Prelude_True.n->missing = 0;
  
  Prelude_Nothing.n = (Node*)alloc(sizeof(Node));
  Prelude_Nothing.n->symbol = &Prelude_Nothing_symbol;
  Prelude_Nothing.n->missing = 0;
  
  Prelude_LT.n = (Node*)alloc(sizeof(Node));
  Prelude_LT.n->symbol = &Prelude_LT_symbol;
  Prelude_LT.n->missing = 0;
  
  Prelude_EQ.n = (Node*)alloc(sizeof(Node));
  Prelude_EQ.n->symbol = &Prelude_EQ_symbol;
  Prelude_EQ.n->missing = 0;
  
  Prelude_GT.n = (Node*)alloc(sizeof(Node));
  Prelude_GT.n->symbol = &Prelude_GT_symbol;
  Prelude_GT.n->missing = 0;
  
  Prelude__LB_RB.n = (Node*)alloc(sizeof(Node));
  Prelude__LB_RB.n->symbol = &Prelude__LB_RB_symbol;
  Prelude__LB_RB.n->missing = 0;
  
  fibPeano_Z.n = (Node*)alloc(sizeof(Node));
  fibPeano_Z.n->symbol = &fibPeano_Z_symbol;
  fibPeano_Z.n->missing = 0;
  
  for(int i = -127; i < 128; i++)
  {
      Num[i+127].n = (Node*)alloc(sizeof(Node));
      Num[i+127].n->symbol = &int_symbol;
      Num[i+127].n->missing = 0;
      child_at_i(Num[i+127],0) = i;
      child_at_i(Num[i+127],1) = INT_CTR;
  }
}

int main()
{
  bt_stack = new_stack();
  RET.n = (Node*)alloc(sizeof(Node));
  
  makeCrap();
  field root = make_fibPeano_main(0);
  nf_all(root);
  return 0;
}
