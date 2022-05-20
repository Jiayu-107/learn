#define _CRT_SECURE_NO_WARNINGS 1


#include"contact.h"


void menu()
{
	printf("#################################\n");
	printf("###   1.ADD         2.DELETE  ###\n");
	printf("###   3.SERCH       4.MODIFY  ###\n");
	printf("###   4.SHOW        6. SORT   ###\n");
	printf("###   0.EXIT        By CJY    ###\n");
	printf("#################################\n");
}

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;// 设置通讯录最初有 0 个元素

}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满，无法增加!\n");
	}
	else
	{
		printf("请输入名字:>\n");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别:>\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:>\n");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n\n");
	}

}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空!\n");
	}
	else
	{
		int i = 0;
		printf("%-12s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-12s\t%-5d\t%-5s\t%-12s\t%-20s\n\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}

}