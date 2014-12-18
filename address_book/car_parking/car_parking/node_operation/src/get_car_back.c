#include "../../include/myhead.h"
void get_car_back(Link *top)
{
    system("clear");
    char id[100];
    char check[100];
    Link temp = *top;

    time_t time_now;
    time(&time_now);
    float money = 0;
    int temp_time;

    printf("\n\n\n\n\n\n          Please input you car ID :");
    scanf("%s",id);



    if(temp->prior == head)
    {
        if(my_strcmp(temp->id,id) == EQUAL)
        {
            printf("          '%s' has been found,are you sure to get it back?\n",id);
            printf("          ");
            scanf("%s",check);
            if((my_strcmp(check,"YES")  == EQUAL) | (my_strcmp(check,"yes")  == EQUAL))
            {
                system("clear");
                temp_time = time_now-temp->park_time;
                printf("\n          Car id :%s. Your car have been here for %d s\n",temp->id,temp_time);
                money = get_pay(&temp_time);
                
                printf("          We had to charge you of %f $\n\n",money);
                head->next = NULL;                
                *top = head;                
                back_check();                
            }
        }
    }

    if(my_strcmp(temp->id,id)  == EQUAL)
    {
        printf("          %s has been found,are you sure to delete it?\n",id);
            printf("          ");
            scanf("%s",check);
            if((my_strcmp(check,"YES")  == EQUAL) | (my_strcmp(check,"yes")  == EQUAL))
            {
                system("clear");
                temp_time = time_now-temp->park_time;
                printf("\n          car id :%s. Your car have been here for %d s\n",temp->id,temp_time);
                money = get_pay(&temp_time);
                printf("          We had to charge you of  %f $\n",money);                
                temp->prior->next = NULL;
                free(temp);
                if(get_car_number(head) == 9)
                {
                    wait2quee();
                }             
                back_check();
            }
    }

    while(temp->prior != NULL)
    {
        if(my_strcmp(temp->id,id)  == EQUAL)
        {
            printf("          %s has been found,are you sure to delete it?\n",id);
            printf("          ");
            scanf("%s",check);
            if(my_strcmp(check,"YES")  == EQUAL | my_strcmp(check,"yes")  == EQUAL)
            {
                system("clear");
                temp_time = time_now-temp->park_time;
                printf("\n          car id :%s. Your car have been here for %d s\n",temp->id,temp_time);
                money = get_pay(&temp_time);
                printf("          We had to charge you of  %f $\n",money);
                temp->next->prior = temp->prior;
                temp->prior->next = temp->next;
                free(temp);
                if(get_car_number(head) == 9)
                {
                    wait2quee();
                }             
                back_check();
            }
        }
        temp = temp->prior;
    }
    printf("          Sorry,Not found!\n");
    back_check();
}
