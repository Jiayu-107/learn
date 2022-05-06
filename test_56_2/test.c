#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//void qsort(void* base,
//	size_t num,
//	size_t width,
//	int (*cmp)(const void* e1, const void* e2)
//
//);

struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1, const void* e2)
{
	//�Ƚ���������ֵ�ĺ���
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void* e1, const void* e2)
{
	//�Ƚ�����������ֵ�ĺ���
	//return *(float*)e1 - *(float*)e2;//�Ӹ����͵����ͻᶪʧ���ݣ����Ի�һ�ַ���
	//return ((int)*(float*)e1 - *(float*)e2) //������

	if (*(float*)e1 > *(float*)e2)
	{
		return 1;
	}
	else if (*(float*)e1 < *(float*)e2)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	//�ȽϽṹ���С ������ֱ�ӱȽϽṹ��Ĵ�С
	//���ǱȽϽṹ����Ԫ�����͵Ĵ�С
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ���ֱ���� <>= ���Ƚϣ�Ӧ����strcmp����
	//strcmp���� �ַ�����ASCLL�����Ƚ� ���ڷ�������
	//��cmp������������һ��
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test1()
{
	//��qsort���������������鲢��ӡ

	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, sz, sizeof(arr[0]), cmp_int);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test2()
{
	float f[] = { 9.0, 8.0 ,7.0, 6.0, 5.0, 4.0 };
	int sz = sizeof(f) / sizeof(f[0]);

	qsort(f, sz, sizeof(f[0]), cmp_float);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}

}

void test3()
{
	//��qsort�����ȽϽṹ���С
	struct Stu s[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);

}

void test4()
{
	//��qsort�����ȽϽṹ���С
	struct Stu s[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);

}

int main()
{
	
	test3();

	

	
	return 0;
}