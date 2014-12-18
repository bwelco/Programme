/*************************************************
  Function:       search
  Description:    搜所好友信息
  Calls:          无
  Called By:      menu();
  Input:          Link *haed :头节点
  Output:         无
  Return:         无
*************************************************/

#include "../../include/myhead.h"

void search(Link *head)
{
    system("clear");

    int num = 0;                     //找到好友的个数
    char str[10];                    //好友姓名

    printf("\n\n\n\n\n");

    printf("          请输入你要查找的好友的姓名 :");
    scanf("%s",str);

    Link temp = (*head)->next;       //指向头结点

    while(temp != NULL)
    {
        if(my_strcmp(temp->name,str) == EQUAL)
        {
            printf("          ID号     :%s\n",temp->ID);
            printf("          姓名     :%s\n",temp->name);
            printf("          手机号码 :%s\n",temp->call);
            printf("          家庭住址 :%s\n",temp->address);
            printf("          公司电话 :%s\n",temp->com_call);
            printf("\n");
            num++;
        }

        temp = temp->next;            //找到并输出信息
    }

    printf("          Totaly : %d\n",num);
    
    back_check();
}
