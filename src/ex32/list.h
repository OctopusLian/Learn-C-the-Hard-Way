#ifndef lvthw_list_h
#define lvthw_list_h

#include <stdlib.h>

struct ListNode;

typedef struct ListNode
{
    /* data */
    struct ListNode *next;
    struct ListNode *prev;
    void *value;
}ListNode;


