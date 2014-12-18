
#include "../../include/myhead.h"

int main(void)
{
    head = (Link)malloc(sizeof(Car));
    wait_head = (Link)malloc(sizeof(Car));
    init(&head);
    init(&wait_head);
    menu();    
    return 0;
}
