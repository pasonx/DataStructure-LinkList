#ifndef NO_HEAD__
#define NO_HEAD__

#include <stdio.h>
#include <stdlib.h>
#include <linux.h>

#define MAXSIZE 32

struct student_st{
    int id;
    char name[MAXSIZE];
    int math;

};

struct node_st{
    struct student_st data;
    struct node_st * next;

};

int insert_node(struct node_st ** list,struct student_st * me);

int delete_node(struct node_st ** list,struct student_st * me);

#endif
