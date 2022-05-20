#pragma once

#include<stdio.h>
#include<string.h>

#define MAX 100
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

struct People_Info
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];

};

//通讯录类型
struct Contact
{
	struct People_Info data[MAX];//存放一个信息
	int size;//记录当前已经有的信息个数

};


void menu();
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);  //const 修饰 *ps 表示指针所指向的内容不会被修改