#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
	////1.��NULLָ������ò���
	//int* p = malloc(40);//malloc ���ٿռ�ʧ�ܷ��ؿ�ָ��
	////��p������ص��ж�
	//*p = 10;//��NULLָ�������

	////2.�Զ�̬���ٿռ��Խ�����
	//int* p = malloc(40);// 10��int
	//if (NULL == p)
	//{
	//	return 0;
	//}
	//int i = 0;
	////Խ��
	//for (i = 0; i <= 10; i++)
	//{
	//	*(p + i) = i;
	//}

	//free(p);
	//p = NULL;

	////3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
	//int a = 10;
	//int* p = &a;
	////....
	//free(p);
	//p = NULL;

	////4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
	//int* p = (int*)malloc(40);
	//if (NULL == p)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*p++ = i;//����++ �Ƚ�����ʹ�� ��++
	//}
	////���տռ�
	////ʹ��free�ͷŶ�̬�����ڴ��һ����
	////p����ָ�򿪱ٶ�̬�ڴ�λ�õ���ʼ����
	//free(p);
	//p = NULL;


	////5.��ͬһ�鶯̬�ڴ����ͷ�
	//int* p = (int*)malloc(40);
	//if (NULL == p)
	//{
	//	return 0;
	//}
	////ʹ��
	////������
	////�ͷŶ�̬���ٵ��ڴ�
	//free(p);
	//p = NULL;
	////...
	//free(p); // ����ͷ� ���е�
	////˭����˭�ͷ�
	////P�ͷ���֮�� p��Ϊ��ָ��



	//6.��̬�����ڴ������ͷţ��ڴ�й©��
	while (1)
	{
		malloc(1);
		sleep(1000);
	}
	return 0;
}