#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	//����һ���ػ�����
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣡��ļ��������һ���Ӻ�ػ���������룺������ɵ�á� ��ȡ���ػ���\n�����룺");
		scanf("%s", input);
		if (strcmp(input, "����ɵ��") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}