#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * prev;
    struct node * next;
} node_t;

typedef struct tlb {
    struct node * head; 
    struct node * end; 
    int length;
    int capacity; 
} tlb_t;

tlb_t * make_tlb(int cap, int headvalue);
void print_tlb_info(tlb_t * tlb);
void print_node_info(node_t * node);
void print_list(tlb_t * t);
void tlb_flush(tlb_t * t);
node_t * tlb_match(tlb_t * t, int val);
int tlb_insert(tlb_t * t, int val);
