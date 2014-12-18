
#include "../../include/myhead.h"

int show(Link head_temp)
{
    
    system("clear");
    
    time_t time_now;
    time(&time_now);
    Link temp = head_temp->next;
    char check[20];

    Link temp_top = top;
    int number = 0;

    while(temp_top->prior != NULL)
    {
         printf("          *****************************************************\n");
         printf("          car %d:***** ID :%s ****** park_time : %d s ***** \n",number+1,temp_top->id,time_now-temp_top->park_time);
         number++;
         temp_top = temp_top->prior;
    }
    printf("          *****************************************************\n");
    printf("\n");
    printf("                  All  : 10 \n");
    printf("          Parking lot  : %d \n",get_car_number(head));
    printf("          Waiting area : %d \n\n",get_car_number(wait_head));
    
    if(get_car_number(head) == 0)
    {
        printf("          There are no car in parking lot,Would you like to go to the park to park your car?\n");
        printf("          Iput 'YES' to park,'NO' to back to menu. :");
        scanf("%s",check);
        if(my_strcmp(check,"YES") == 0 | my_strcmp(check,"yes") == 0)
        {
             park(&head);
        }
        else if(my_strcmp(check,"NO") == 0 | my_strcmp(check,"no") == 0)
        {
             menu();
        }
    }
    back_check();

}
