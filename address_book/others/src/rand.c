/*************************************************
  Function:       get_rand
  Description:    主菜单
  Calls :         无
  Calls by:       add();             
  Input:          无
  Output:         temp :随机获取到的ID以字符串形式返回
  Return:         无
*************************************************/ 

#include "../../include/myhead.h"

char *get_rand()
{    
    int i = 0;                              //循环变量
    int k = 0;                              //循环变量

    char temp[10];                          //获取到的ID
    char *p = temp;

    srand((int)time(0));                    //设置随机数种子
    i = rand()%(99999 - 10000) + 10000;     //设置五位数随机ID
 
    while(i != 0)                           //ID数组赋值
    {
        temp[k] = i % 10 + '0';
	    k++;
	    i = i/10;
    }
    temp[k] = '\0';

    reserve(p,p+k-1);                        //ID还原

    return temp;
}

