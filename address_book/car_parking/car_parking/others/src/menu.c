
#include "../../include/myhead.h"
void menu()
{	
    system("clear");
    char choose[50];
    int option = 0;
    int i,j;
      printf("\n\n\n\n\n");
      printf("           -----------------------------------------------------   \n");
      printf("            _______                                                \n");
	    printf("           |       |  ______    ____   |___   -    ___    ____     \n");
      printf("           |_______| |      |  |____|  |___   |   |   |  |    |    \n");
      printf("           |         |_____ |  |    |  |      |   |   |  |____|    \n");
      printf("           |                                                  |    \n");
      printf("           |         L O T S    M A N A G E M E N T       ____|    \n");
      printf("           -----------------------------------------------------   \n");
      printf("                                 V 1.0                             \n");
      printf("           -----------------------------------------------------   \n");
      printf("            * 1/4 oz        Park your car                          \n");
      printf("            * 2/4 oz        Get your car                           \n");
      printf("            * 3/4 oz        Check parking situation                \n");
      printf("            * 4/4 oz        Exit                                   \n");
      printf("           -----------------------------------------------------   \n");
      printf("            *          PARK / GET / CHECK / EXIT                   \n");
      printf("           -----------------------------------------------------   \n");
      printf("            * Input you choice here :");
      
    again:scanf("%s",choose);                 //输入错误重新选择
/**************************************输入赋值***********************************************/
    if(my_strcmp(choose,"PARK") == EQUAL | my_strcmp(choose,"park") == EQUAL)
    {
        option = 1;
    }

    if(my_strcmp(choose,"GET") == EQUAL | my_strcmp(choose,"get") == EQUAL)
    {
        option = 2;
    }

    if(my_strcmp(choose,"CHECK") == EQUAL | my_strcmp(choose,"check") == EQUAL)
    {
        option = 3;
    }

    if(my_strcmp(choose,"EXIT") == EQUAL | my_strcmp(choose,"exit") == EQUAL)
    {
        option = 4;
    }
/******************************************选择相应的操作*********************************************/
	switch(option)
	{
		case 4 :
            {
                
                printf("                      Thanks for using.\n");

                for(i = 0;i < 3; i++)                                
 	            {
                    printf("                  Parking system will shut down in %d s !",3 - i);
	                for(j = 0;j < 56;j ++)
	                {
	                    printf("\b");
	                }
	                fflush(stdout);
	                sleep(1);
	            }
	           system("clear");
               exit(0);
            }
		case 1 :
            {
                park(&head);
                break;
            }
		case 2 :
            {
                get_car_back(&top);
                break;
            }
		case 3 :
            {
                show(&head);
                break;
            }
		default:
            {                
                printf("              Input error,please input again:");//重新输入         
                goto again;
            }
	}

}
