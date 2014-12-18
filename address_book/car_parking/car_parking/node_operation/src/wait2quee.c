#include "../../include/myhead.h"
void wait2quee()
{
     Link wait_temp_2 = wait_head;
     Link wait_temp = wait_temp_2->next;

     while(wait_temp->next != NULL)
     {
         wait_temp_2 = wait_temp_2->next;
         wait_temp = wait_temp->next;
     }
    
     wait_temp_2->next = NULL;
     push_car(&head,&wait_temp);
}
