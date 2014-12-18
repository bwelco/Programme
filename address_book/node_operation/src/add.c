/*************************************************
  Function:       add
  Description:    添加新好友
  Calls:          node_insert(Link *head,Link *newnode)
                  get_rand();
  Called By:      menu();
  Input:          无
  Output:         无
  Return:         无
*************************************************/

#include "../../include/myhead.h"
void add()
{

    system("clear");                          //清屏

    Link newnode;
    newnode = (Link)malloc(sizeof(Fr));

    printf("\n\n\n\n\n");    
  
    my_strcpy(newnode->ID,get_rand());       //随机获取新ID

    printf("          你已获得随机生成的ID ：\033[31m%s\033[0m\n",newnode->ID);
    
    printf("          新姓名:");
    scanf("%s",newnode->name);

    printf("          新电话:");
    scanf("%s",newnode->call);

    printf("          新地址:");
    scanf("%s",newnode->address);

    printf("          新公司电话:");
    scanf("%s",newnode->com_call);

    node_insert(&head,&newnode);             //调用node_insert进行新节点的插入

    menu();                                  //返回主菜单
    

}
