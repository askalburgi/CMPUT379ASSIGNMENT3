#ifndef _PGTBL_H_
#define _PGTBL_H_

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include "page.h"

typedef struct entry_s {
	char *key;
	struct page *value;
	struct entry_s *next;
} entry_t;

typedef struct hashtable_s {
	int size;
	struct entry_s **table;
    struct ffl_t * frameslist; 
} hashtable_t;


hashtable_t *ht_create( int size, ffl_t * f ); 
int ht_hash( hashtable_t *hashtable, char *key ); 
entry_t *ht_newpair( char *key, page_t *value ); 
void ht_set( hashtable_t *hashtable, char *key, page_t *value ); 
page_t *ht_get( hashtable_t *hashtable, char *key );

#endif
