#include "../../include/myhead.h"

void init(Link *head)
{    
    *head = (Link)malloc(sizeof(Car));
    (*head)->next = NULL;
    (*head)->prior = NULL;
    top = *head;       
}
