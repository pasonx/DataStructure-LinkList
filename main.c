#include <stdio.h>
#include <stdlib.h>

#include "nohead.h"

int main()
{
    struct node_st * list = NULL;
    struct node_st * cur;
    struct student_st node;
    for (int i = 0 ; i < 7 ; i ++) 
    {   
        node.id = i;
        snprintf(node.name,MAXSIZE,"studnet %d",i);
        node.math = rand() % 100;

        insert_list(&list,&node);
    }

    //遍历
    cur = list;
    while (cur != NULL)
    {

	printf("%d %s %d\n",cur->data.id,cur->data.name,cur->data.math);
	cur = cur->next;	
    }
 
	
    printf("\t\n\n");
    //删除节点
    delete_list(&list);
    cur = list;
    while (cur != NULL)
    {
	printf("%d %s %d\n",cur->data.id,cur->data.name,cur->data.math);
	cur = cur->next;	
    }

    printf("\t\n\n");
	  
    cur = find_list(&list,3);
    printf("%d %s %d\n",cur->data.id,cur->data.name,cur->data.math);
    return 0;
	
}
