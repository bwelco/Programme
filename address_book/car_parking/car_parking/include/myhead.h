
/*************************************************
  Copyright (C)  , FG , Ltd.
  File name:      myhead.h
  Author:  FG    Version:  V1.0      Date: 25/11/2014
  Description:    本程序的头文件，定义了相关的数据类型和结构体。
 
  Function List:  无
*************************************************/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

enum temp
{
    EQUAL,                   //my_strcmp函数中，相等的返回值
    MORE,                    //my_strcmp函数中，大于的返回值
    LESS,                    //my_strcmp函数中，小于的返回值
    YES,                     //是否返回主菜单检测，YES为确认返回
    NO                       //是否返回主菜单检测，NO为确认不返回
};

struct car
{
    char id[20];
    time_t park_time;

    struct car *next;
    struct car *prior;
};


typedef struct car Car;
typedef Car * Link;
Link head;
Link wait_head;
Link *top;
/***************函数声明******************/
int  my_strcmp(char *str,char *ptr);
void my_strcpy(char *str,char *ptr);
void creat(Link *head);
void menu();
float get_pay(int * tempc);
void reserve(char *head,char *tail);
void get_car_back(Link *top);
int get_car_number(Link head);
void park(Link head_temp);
char * print_time();
int time_patch(Link *p);
void init(Link *head);
int push_car(Link *head_temp,Link *newnode);
int show(Link head_temp);
void wait2quee();
void back_check();
