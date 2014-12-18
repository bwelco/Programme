#include "../../include/myhead.h"
int get_car_number(Link head)
{
    Link temp = head;

    int count = 0;
    while(temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
 