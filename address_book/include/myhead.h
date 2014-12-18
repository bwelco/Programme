
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

#define LINE_MAX 5           //定义show.c中的每页的显示个数
enum temp
{
    EQUAL,                   //my_strcmp函数中，相等的返回值
    MORE,                    //my_strcmp函数中，大于的返回值
    LESS,                    //my_strcmp函数中，小于的返回值
    YES,                     //是否返回主菜单检测，YES为确认返回
    NO                       //是否返回主菜单检测，NO为确认不返回
};

struct Friend
{
    char ID[15];              //好友ID
    char name[10];            //好友姓名
    char call[20];            //好友电话
    char address[40];         //好友住址
    char com_call[20];        //好友公司电话

    struct Friend *next;
};


typedef struct Friend Fr;
typedef Fr * Link;

Link head;
/***************函数声明******************/
int  my_strcmp(char *str,char *ptr);
void creat(Link *head);
void my_strcpy(char *str,char *ptr);
void node_insert(Link *head,Link *newnode);
void show(Link *head);
void menu();
void add();
void back_check();
void search(Link *head);
void delete_friend(Link *head);
void delete_node_id(Link *head,char *id);
char *get_rand();
void reserve(char *head,char *tail);
