#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//calloc 
	//��һ������ ��ָԪ�ظ���
	//�ڶ���������ָÿ��Ԫ�صĴ�С
	//��malloc��ͬ calloc�Ὣÿ��Ԫ�س�ʼ����0

	int* p = (int*)calloc(10, sizeof(int));
	if (NULL != p)
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);
	p = NULL;

	return 0;
}