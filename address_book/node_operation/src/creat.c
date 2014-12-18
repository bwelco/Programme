/*************************************************
  Function:       creat
  Description:    创建节点
  Calls:          无
  Called By:      main();
  Input:          无
  Output:         无
  Return:         无
*************************************************/

#include "../../include/myhead.h"

void creat(Link *head)
{
    *head = (Link)malloc(sizeof(Fr));      //分配节点空间
    (*head)->next = NULL;                  //建立代表头的链表
}
