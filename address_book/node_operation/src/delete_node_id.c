/********************************************************************
  Function:       delete_node_id
  Description:    按照好友ID删除好友数据
  Calls:          back_check();
  Called By:      delete_friend(Link *head)
  Input:          Link *head :头节点
                  char *id ：好友ID
  Output:         无
  Return:         无
*********************************************************************/

#include "../../include/myhead.h"

void delete_node_id(Link *head,char *id)
{
    Link temp = *head;                           //头节点
    Link temp2;                                  //临时节点
    
/*************************头节点删除*********************************/ 

    if(my_strcmp(temp->next->ID,id) == EQUAL)    //如果是第一个节点，删除并退出
    {
        temp = (*head)->next;
        (*head)->next = temp->next;

        free(temp);                               //释放
        temp = NULL;

        printf("          \033[31m删除成功 !\033[0m\n");

        back_check();
        return;                                  //退出程序
    }

/*************************尾节点删除*********************************/

    while(temp->next->next != NULL)              //找到尾节点
    {
        temp = temp->next;
    }

    if(my_strcmp(temp->next->ID,id) == EQUAL)    //如果要删除的好友在尾节点，删除并退出程序
    {              
        temp2 = temp->next;
        temp->next = NULL;

        free(temp2);
        temp2 = NULL;

        printf("          \033[31m删除成功 !\033[0m\n");

        back_check();
        return;
    }

    temp = (*head)->next;                       //把temp重新指向头结点

/*************************中间节点删除*********************************/  

    while(my_strcmp(temp->next->ID,id) != EQUAL)
    {
        temp = temp->next;
    }

    temp2 = temp->next;
    temp->next = temp2->next;

    free(temp2);
    temp2 = NULL;

    printf("          \033[31m删除成功 !\033[0m\n");

    back_check();
    return;
}
