#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<errno.h>


int main()
{
	//������   ������Ϣ
	//0 -     No error
	//1 -	  Operation not permitted
	//2 -     No such file or directory
	//...
	//errno ��һ��ȫ�ִ�����ı���
	//��C���Ե� �⺯�� ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ�� errno ��
	
	//char* str = strerror(errno);
	//printf("%s\n", str);


	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("open file success\n");
	}
	return 0;
}