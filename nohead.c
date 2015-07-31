//+ main.c  Makefile  nohead  nohead.c  nohead.h                                                                 X
#include <stdio.h>
#include "nohaead.h"

int insert_list(struct node_st ** list , struct student * me) 
{
    struct node_st * ptr;
    ptr = (struct node_st *)malloc(sizeof(*ptr));
    
    ptr->next = *list;
    *list = ptr;
    (*list)->data = *me;
    
}

int delete_list(struct node_st ** list)
{
    struct node_st * tail; //record the next step's ptr
    
    tail = *list;
    *list = (*list)->next;
    
    free(tail);
    return 0;

}
struct node_st * find_list(struct node_st ** list,int _id)
{
    struct node_st * tail;
    tail = *list;

    while (tail->id != _id && tail){
        tail = tail->next
    }   
    return tail;

}
