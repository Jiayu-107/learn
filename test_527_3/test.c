#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
	//���ļ�test.txt ��ֻ����ʽ
	// 
	//���·��
	//fopen("test.txt", "r");
	//..��ʾ��һ��·��
	//.��ʾ��ǰ·��
	//fopen("..\\test.txt", "r");

	//����·��
	//fopen("E:\\Project\\C\\test_527_3\\test.txt", "r");

	FILE* pf = fopen("test.txt", "r");
	if (NULL == pf)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���뵽�� ���Ǵ��ļ��ɹ�
	//���ļ�

	//������ǹر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}