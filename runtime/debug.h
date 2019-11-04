#ifndef DEBUG_H
#define DEBUG_H

#define LOW  1
#define MED  2
#define HIGH 3


#if DEBUG > 0
#define debug(level,args...) \
    if(DEBUG >= level) do { printf(args); } while(0);
#define debug_expr(level, node) \
    if(DEBUG >= level) do { \
       print_expr(node); \
       printf("\n"); \
    } while(0);
#define debug_stack(level) \
    if(DEBUG >= level) do { print_stack(bt_stack); } while(0);
#define debug_frame(level, e1, e2) \
    if(DEBUG >= level) do { \
        printf("<"); \
        print_expr(e1); \
        printf(","); \
        print_expr(e2); \
        printf(">\n"); \
    } while(0);
#else
#define debug(level,args...)
#define debug_expr(level, node)
#define debug_stack(level)
#define debug_frame(level, e1, e2)
#endif

#endif // DEBUG_H
