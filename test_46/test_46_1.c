#define _CRT_SECURE_NO_WARNINGS 1

#include<string.h>
#include<stdio.h>
int main()
{
	char password[20] = {0};
    int i;
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password,"123456") == 0 )//�ַ����Ƚϴ�СӦ���� strcmp����
		{
			printf("��¼�ɹ���\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (3 == i)
	{
		printf("��������������˳�����\n");
	}
	return 0;
}