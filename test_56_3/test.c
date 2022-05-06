#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void swap(char* e1, char* e2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}


//ģ��qsort����
//ʵ�� bubble_sort ���� �ĳ���Ա�����Ƿ�֪��δ��������������� - ��֪��
//�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
void bubble_sort(void* base, int sz, int width,int(*cmp)(void*e1, void*e2))
{
	int i = 0;
	//ȷ������
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for(j = 0; j < sz - 1 -i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base + j * width,(char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}

	}
}

int cmp_int(void* e1, void* e2)
{
	return (int*)e1-(int*)e2;
}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ�� bubble_sort ���� �ĳ���Աһ��֪���Լ��������ʲô����
	//��Ӧ��֪����αȽ����������е�Ԫ��

	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	return 0;
}