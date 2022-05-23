#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<assert.h>

int main()
{
	int*  p1 = (int*)malloc(5 * sizeof(int));
	if (NULL == p1)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p1 + i) = i;
			printf("%d ", *(p1 + i));
		}
	}
	//���ǿռ䲻���� ��ô����
	//�� realloc ����


	//������ʹ�� malloc ���ٵ�20���ֽڿռ�
	//�������20���ֽڲ�����������ʹ����
	//ϣ�������ܹ���40���ֽڵĿռ�
	//������ô�Ϳ���ʹ�� relloc ��������̬���ٵ��ڴ�
	//
	//realloc ʹ�õ�ע�����
	//1.���p1ָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p1
	//2.���p1ָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
	//  ����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
	//  ��󷵻��¿��ٵ��ڴ��ַ
	//3.����һ���µı���������realloc�����ķ���ֵ
	int* p2 = (int*)realloc(p1, 10 * sizeof(int));
	if (NULL != p2)
	{
		p1 = p2;
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			*(p1 + i) = i+1;
			printf("%d ", *(p1 + i));
		}
	}

	//��ȻҪ�ͷ��ڴ� ����֮��
	free(p1);
	p1 = NULL;

	return 0;
}