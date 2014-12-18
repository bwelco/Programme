#include "../../include/myhead.h"
char * print_time()
{
    time_t temp;
    time(&temp);
    char *str;
    str = ctime(&temp);

    return str;
}
