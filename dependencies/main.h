#ifndef _MAIN_H_
#define _MAIN_H_

#include "tlb.h"
#include "pgtbl.h"
#include "freeframeslist.h"
#include "measurementarray.h"

ffl_t * frameslist; 
hashtable_t *pgtable;
tlb_t *tlb; //-> pagetable -> freeframes list 

measurementarray_t * measurementarrarr;

int round_robin(int quantum, int pgsize_topass, const char* tracefiles[], int numberoftracefiles, measurementarray_t *measurementarrarr);

#endif
