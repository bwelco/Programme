

#include "../../include/myhead.h"

int push_car(Link *head_temp,Link *newnode)
{
    Link temp = *head_temp;
    
    int number = get_car_number(head); 

    if(temp->next == NULL)
    {
        time(&((*newnode)->park_time));
        temp->next = *newnode;
        (*newnode)->next = NULL;

        (*newnode)->prior = *head_temp;
        if(number != 10)
        {
            top = *newnode; 
        }
        return 0;
    }

    else
    {
        time(&((*newnode)->park_time));

        (*newnode)->next = temp->next;
        temp->next->prior = *newnode;

        (*newnode)->prior = temp;
        temp->next = *newnode;       
    }  
   
    return 1;
}

