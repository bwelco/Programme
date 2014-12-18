/*************************************************
  Function:       back_check
  Description:    主菜单返回检测
  Calls:          node_insert(Link *head,Link *newnode)
                  get_rand();
  Called By:      menu();
  Input:          无
  Output:         无
  Return:         无
*************************************************/

#include "../../include/myhead.h"
  
void back_check()
{
    int i;                                   //循环变量
    int j;                                   //循环变量

    char check[10];

    printf("          Input 'YES' to back to menu ,'NO' to shutdown this system\n          ");
    scanf("%s",check);
    
    if(my_strcmp(check,"YES") == EQUAL | my_strcmp(check,"yes") == EQUAL)      //返回主菜单
    {
        menu();
    }

    else
    {
        printf("          thanks for using。\n");

        for(i = 0;i < 3; i++)
	    {
            printf("          this system will be shutdown in %d s!",2 - i);

    	    for(j = 0;j < 46;j ++)
    	    {
    	        printf("\b");                 //光标回退
    	    }

	        fflush(stdout);                   //清空缓冲区
	        sleep(1);                         //计时
        }

	      system("clear");
        exit(0);                              //退出程序
    }
}
