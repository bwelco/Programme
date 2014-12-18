#include "../../include/myhead.h"

float get_pay(int * tempc)
{
    static float mon;
    
    int temp = * tempc;
    if(temp < 10 * 60)
    {
        mon = temp * 0.1;
    }

    if((10*60 < temp) && (temp < 10*60*6))
    {
        mon = temp * 0.05;
    }

    if((10*60*6 < temp) && (temp < 10*60*6*24))
    {
        mon = temp * 0.01;
    }
   
    return mon;
}
