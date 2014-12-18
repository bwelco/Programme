/*************************************************
  Function:       my_strcmp
  Description:    比较两个字符串的大小
  Calls :         无
  Calls by:       add();             
  Input:          char *str：输入字符串
                  char *ptr: 输入字符串
  Output:         无
  Return:         MORE：str大于ptr
                  LESS: str小于ptr
                  EQUAL: str等于ptr
*************************************************/ 
                  
#include "../../include/myhead.h"

int my_strcmp(char *str,char *ptr)
{
    while(*str != '\0')               //遍历字符串
    {
        if(*str > *ptr)               //大于 
        {
            return MORE;
        }

        if(*str < *ptr)               //小于
        {
            return LESS;
        }

        str++;
        ptr++;
    }

    if(*ptr == '\0')                 //相等
    { 
        return EQUAL;              
    }
    else                             //"admin" < "administrator"
    {
        return MORE;
    }
}
