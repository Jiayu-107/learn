#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

int main()
{
	//���ڴ�����10�����͵Ŀռ�
	int* p = (int*)malloc(10 * sizeof(int));
	if (NULL == p)
	{
		//��ӡ ����ԭ���һ����ʽ
		printf("%s\n", strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
			//printf("%d ", *(p + i));
		}

		for (i = 0; i < 10; i++)
		{
			
			printf("%d ", *(p + i));
		}
	}
	//����̬����Ŀռ䲻��ʹ��ʱ
	//��Ӧ�û�������ϵͳ
	free(p);
	p = NULL;

	//��������һ������ Ҫ��дһ������һֱ�����ڴ治�����ǲ��ǾͿ���
	//���Ǻ������ر�������ڴ��ǿ�Ʒ���������ϵͳ
	//���ҿ���дһ�����ܹرյĳ�����
	return 0;
}