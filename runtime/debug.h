#ifndef DEBUG_H
#define DEBUG_H

#include <stdio.h>
#define LOW  1
#define MED  2
#define HIGH 3

#if DEBUG > 0
#define debug(level,args...) \
    if(DEBUG >= level) do {  \
       printf(args); \
       fflush(stdout); \
    } while(0);
#define debug_expr(level, node) \
    if(DEBUG >= level) do { \
       print_expr(node); \
       printf("\n"); \
       fflush(stdout); \
    } while(0);
#define debug_stack(level) \
    if(DEBUG >= level) do { print_stack(bt_stack); } while(0);
#define debug_frame(level, frame) \
    if(DEBUG >= level) do { print_frame(frame); } while(0);
#else
#define debug(level,args...)
#define debug_expr(level, node)
#define debug_stack(level)
#define debug_frame(level, frame)
#endif

#endif // DEBUG_H
