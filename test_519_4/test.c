#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int check_sys()
{
	union
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
	
}

int main()
{
	//�жϴ�С���ֽ���洢ģʽ

	int ret = check_sys();
	if (1 == ret)
	{
		printf("С��");
	}
	else
	{
		printf("���");
	}

	return 0;
}