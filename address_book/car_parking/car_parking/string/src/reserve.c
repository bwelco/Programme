/*************************************************
  Function:       reserve
  Description:    逆序字符串
  Calls :         无
  Calls by:       get_rand();            
  Input:          char *head：头指针
                  char *tail: 尾指针
  Output:         无
  Return:         无
*************************************************/ 
#include "../../include/myhead.h"

void reserve(char *head,char *tail)
{
    char temp;               //临时变量
   
    while(head < tail)       //头小于尾
    {
        temp = *tail;
	    *tail = *head;
	    *head = temp;

	    head++;              //头增
	    tail--;              //尾减
    }

}
