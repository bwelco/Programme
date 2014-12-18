#include "../../include/myhead.h"

void park(Link head_temp)
{
    system("clear");
    char check[10];
    Link newnode;
    int full_flag = 1;
    newnode = (Link)malloc(sizeof(Car));

    int number = get_car_number(head);
    if(number >= 10)
    {
        printf("\n\n\n\n\n\n          Parking is full,are you willing to park your car in waiting place?\n");
        printf("          ");
        scanf("%s",check);
        if((my_strcmp(check,"YES") == EQUAL) | (my_strcmp(check,"yes") == EQUAL))
        {
            full_flag = 0;           
        }
        else
        {
            back_check();
        }
    }
    
    if(full_flag == 0)
    {
        printf("\n          Please input your car ID :");
        scanf("%s",newnode->id);
        push_car(&wait_head,&newnode);
        menu();
    }
    if(full_flag == 1)
    {
        printf("\n\n\n\n\n\n          Please input your car ID :");
        scanf("%s",newnode->id);
        push_car(&head,&newnode);
        menu();
    }
    
}
