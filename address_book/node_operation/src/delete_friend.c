/*************************************************
  Function:       delete_friend
  Description:    删除好友
  Calls:          back_check();
                  delete_dode_id(Link *head,char *id);
  Called By:      menu();
  Input:          Link *head :传入头结点
  Output:         无
  Return:         无
*************************************************/

#include "../../include/myhead.h"

void delete_friend(Link *head)
{
    system("clear");
    
    int num = 0;                                        //好友个数
 
    char str[100];                                      //好友姓名
    char check[10];                                     //删除检测
    char id[15];                                        //好友ID

    Link temp = *head;                                  //头节点
    Link temp2;                                         //临时节点

    printf("\n\n\n\n\n          请输入你要删除的好友姓名\n          ");
    scanf("%s",str);
    
    printf("          以下是你要删除的好友的信息\n");
    
    if(temp->next == NULL)
    {
        printf("          现在似乎没有任何数据");      //找不到好友数据
        back_check();
    }
/*********************************按照名字找好友信息************************************************/
    while(temp != NULL)
    {
        if(my_strcmp(temp->name,str) == EQUAL)          //找到好友数据并输出详细信息
        {
            printf("          ID号     :%s\n",temp->ID);
            printf("          姓名     :%s\n",temp->name);
            printf("          手机号码 :%s\n",temp->call);
            printf("          家庭住址 :%s\n",temp->address);
            printf("          公司电话 :%s\n",temp->com_call);
            printf("\n");

            temp2 = temp;                              //临时节点，以便下面检测
            num++;
        }

        temp = temp->next;
    }

    if(num == 0)                                       //找不到好友数据
    {
        printf("          \033[31m抱歉，尚无此好友信息。\033[0m\n");
        back_check();
    }

    if(num == 1)                                       //只找到一个并确认是否删除
    {
        printf("          确定删除？YES删除。");
        scanf("%s",check);

        if(my_strcmp(check,"YES") == EQUAL)
        {
            delete_node_id(head,temp2->ID);
        }

        else
        {
            back_check();
        }
    }

    if(num > 1)                                       //找到两个及两个以上的好友，按照ID号删除
    {
        printf("          请输入要删除的ID:");
        scanf("%s",id);

        delete_node_id(head,id);                      //调用delete_node_id函数，按照好友ID删除

        back_check();
    }

    
}
