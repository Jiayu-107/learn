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

//ͨѶ¼����
struct Contact
{
	struct People_Info data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е���Ϣ����

};


void menu();
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);  //const ���� *ps ��ʾָ����ָ������ݲ��ᱻ�޸�