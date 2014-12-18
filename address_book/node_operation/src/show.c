/*************************************************
  Function:       add.c
  Description:    列出好友信息
  Calls:          
  Called By:      
  Input:          无
  Output:         无
  Return:         无
*************************************************/

#include "../../include/myhead.h"

void show(Link *head)
{
    system("clear");

    int i = 0;                                   //循环变量
    int j = 0;                                   //循环变量
    int count = 0;                               //好友个数
                  
    int page = 1;                                //好友页数
    int temp_page = 0;                           //最后一页个数
    int reality_page;                            //实际页数

    char flag;                                   //翻页检测
    char check[10];                              //无数据的时候是否添加的检测
    
    Link temp = (*head)->next;

    if((*head)->next == NULL)                    //空链表检测
    {
        printf("\n\n\n\n\n");

        printf("          暂无好友数据，是否添加好友信息？输入'YES'添加，否则返回主菜单。\n          ");
	    scanf("%s",check);

        if(my_strcmp(check,"YES") == EQUAL)
        {
            add();                               //添加好友信息
        }

        else
        {
            menu();                              //返回主菜单
        }

    }	
 
    while(temp->next != NULL)                    //好友个数检测
    {
        count++;                                 
        temp = temp->next;
    }
    count++;
    
    temp = *head;                               //重新指向头节点
 
    page = count / LINE_MAX;                    //页数
    temp_page = count % LINE_MAX;               //最后一页的个数

    temp = (*head)->next;

    if(temp_page == 0)                           //共一页
    {
        reality_page = page;
    }

    if(temp_page != 0)                           //多页
    {
        reality_page = page + 1;
    }
/***************************************信息按页输出****************************************************************/     
        for(j = 0;j < page;j++)
        {    
            system("clear");

            printf("\n\n\n\n\n");
            printf("          ***********************************************************\n");
            printf("          **      ID号     姓名     手机号码    家庭住址   公司电话**\n");
            
            for(i = 0;i < LINE_MAX; i++)
            {
                printf("          **%d%8s%8s%13s%11s%14s**\n",i+1,temp->ID,temp->name,temp->call,temp->address,temp->com_call);
                temp = temp->next;
            }
            printf("          *************************第%d页，共%d页***************************\n",j+1,reality_page);
            printf("          输入‘N’浏览下一页：\n");

            p:scanf("%c",&flag);                          //错误返回

            if(flag == 'N')                               //翻页检测
            {
                if(j == page)
                {
                    printf("          已经是最后一页！\n");
                }
            }
            else
            {
                printf("          输入错误，请重新输入 :");//错误检测
                goto p;
            }

        }
     /****************最后一页***********************/   
        if(temp_page != 0)
        {
            system("clear");
            printf("\n\n\n\n\n");
            printf("          ***********************************************************\n");
            printf("          **     ID号    姓名     手机号码    家庭住址     公司电话**\n");
                
            for(i = 0;i < temp_page; i++)
            {
                
                printf("          **%d%8s%8s%13s%11s%14s**\n",i+1,temp->ID,temp->name,temp->call,temp->address,temp->com_call);
                temp = temp->next;
            }
            printf("          ***********************第%d页，共%d页************************\n",j+1,reality_page);
        }


    printf("\n");
    
    back_check();
}
