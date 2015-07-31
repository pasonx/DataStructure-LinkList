#include <stdio.h>
#include <stdlib.h>

#include "nohead.h"

int main()
{
    struct node_st * list = NULL;
    struct student_st node;
    for (int i = 0 ; i < 7 ; i ++) 
    {   
        node.id = i;
        snprintf(node.name,MAXSIZE,"studnet %d",i);
        node.math = rand() % 100;

        list(&list,&node);
    }    
}
