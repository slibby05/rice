#ifndef MEMORY_H
#define MEMORY_H

#include<stdlib.h>

#ifdef GC
#include<gc.h>
#define memory_init() GC_INIT()
#define alloc(size) GC_MALLOC(size)
#else
#define alloc(size) calloc(1,size); mem++
#define memory_init() mem = 0;
#endif

#endif
