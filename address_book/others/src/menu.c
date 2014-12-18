/*************************************************
  Function:       menu
  Description:    主菜单
  Calls :         my_strcmp(char *str,char *ptr) :字符串检测
                  add(); ：添加好友信息
                  show(&head); ：显示好友信息
                  delete_friend(&head); ：删除好友信息
  Calls by:       main();             
  Input:          无
  Output:         无
  Return:         无
*************************************************/


#include "../../include/myhead.h"
void menu()
{	
    system("clear");
   
    int option = 5;                           //选项初始化
    int i;                                    //循环变量
    int j;                                    //循环变量

    char choose[20];                          //选择
   
      printf("\n\n\n\n\n\n");
	  printf("          ***********************************************\n");
	  printf("          *\033[31m                  电子通讯录V1.0             \033[0m*\n");
	  printf("          ***********************************************\n");
	  printf("          *                 1.添加好友信息              *\n");
	  printf("          *                 2.列表好友信息              *\n");
	  printf("          *                 3.搜索好友                  *\n");
	  printf("          *                 4.删除好友                  *\n");
	  printf("          *                 0.退出                      *\n");
	  printf("          ***********************************************\n");
	  printf("          *******INSERT/DISPLAY/SEARCH/DELETE/EXIT*******\n");
	  printf("                        选择 :");                             

    again:scanf("%s",choose);                 //输入错误重新选择
/**************************************输入赋值************************************************/
    if(my_strcmp(choose,"INSERT") == EQUAL)
    {
        option = 1;
    }

    if(my_strcmp(choose,"DISPLAY") == EQUAL)
    {
        option = 2;
    }

    if(my_strcmp(choose,"SEARCH") == EQUAL)
    {
        option = 3;
    }

    if(my_strcmp(choose,"DELETE") == EQUAL)
    {
        option = 4;
    }

    if(my_strcmp(choose,"EXIT") == EQUAL)
    {
        option = 0;
    }
/******************************************选择相应的操作***********************************************/     
	switch(option)
	{
		case 0 :
            {
                
                printf("                     谢谢使用。\n");

                for(i = 0;i < 3; i++)                                
 	            {
                    printf("                  本系统将在%d秒内关闭!",3 - i -1);
	                for(j = 0;j < 39;j ++)
	                {
	                    printf("\b");
	                }
	                fflush(stdout);
	                sleep(1);
	            }
	           system("clear");
               exit(0);
            }
		case 1 :
            {
                add();                                   //添加好友
                break;
            }
		case 2 :
            {
                show(&head);                             //输出好友信息
                break;
            }
		case 3 :
            {
                search(&head);                           //搜所好友信息
                break;
            }
		case 4 :
            {
                delete_friend(&head);                    //删除好友
                break;
            }
		default:
            {                
                printf("          输入错误，请重新输入:");//重新输入         
                goto again;
            }
	}
}
