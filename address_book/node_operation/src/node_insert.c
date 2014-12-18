/*************************************************
  Function:       node_insert
  Description:    好友节点添加
  Calls:          无
  Called By:      add();
  Input:          Link *head :头节点
                  Link *newnode : 新节点
  Output:         无
  Return:         无
*************************************************/

#include "../../include/myhead.h"

void node_insert(Link *head,Link *newnode)
{
    system("clear");

    Link temp = *head;
    
    if(temp->next == NULL)                           //空链表判断
    {
        (*newnode)->next = NULL;
        temp->next = *newnode;
        return;
    }
/***********************尾节点插入******************************************/

    while(temp->next != NULL)             
    {
        temp = temp->next;                          //找节点
    }

    if(my_strcmp(temp->name,(*newnode)->name) == LESS)
    {
        (*newnode)->next = NULL;
        temp->next = *newnode;
        return;
    }

    temp = *head;                                   //重新指向头

/***********************中间节点插入******************************************/
    while(my_strcmp(temp->next->name,(*newnode)->name) == LESS)
    {
        temp = temp->next;                          //找节点
    }

    (*newnode)->next = temp->next;
    temp->next = *newnode;

}
