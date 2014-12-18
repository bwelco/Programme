/*************************************************
  Function:       my_strcpy
  Description:    复制字符串
  Calls :         无
  Calls by:       add();             
  Input:          char *str：输入字符串
                  char *ptr: 输入字符串
  Output:         无
  Return:         无
*************************************************/ 
                  
#include "../../include/myhead.h"

void my_strcpy(char *str,char *ptr)
{
    while(*ptr != '\0')    //遍历字符串
    {
        *str = *ptr;
        ptr++;
        str++;
    }

    *str = '\0';          //尾部加入'\0'
}
