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
	ps->size = 0;// ����ͨѶ¼����� 0 ��Ԫ��

}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷�����!\n");
	}
	else
	{
		printf("����������:>\n");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:>\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:>\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:>\n");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�\n\n");
	}

}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��!\n");
	}
	else
	{
		int i = 0;
		printf("%-12s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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