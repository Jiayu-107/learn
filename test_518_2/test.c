#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct S1
{
	char c1;//1
	//3
	int i;//4
	char c2;//1
	//12
};

struct S2
{
	char c1;//1
	char c2;//2
	int i;//4
	//8
};

struct S3
{
	double d;//8
	char c;//9
	int i;//12
	//16
};

struct S4
{
	char c1;//1
	struct S3 s3;//8
	double b;//24
};

int main()
{
	//��μ���ṹ��Ĵ�С��
	//�������
	//1. ��һ����Ա����ṹ��ƫ����Ϊ0�ĵ�ַ��
	//2. ������Ա����Ҫ���뵽 ������ ���������ĵ�ַ��
	//   ������ = ������Ĭ�ϵ�һ����������ó�Ա��С�� ��Сֵ
	//   VS ��Ĭ�ϵ�ֵΪ8��GCC��û��Ĭ�ϵĶ��������Ǿ��Գ�Ա�����Ĵ�СΪ������
	//3. �ṹ���ܴ�СΪ����������ÿ����Ա��������һ������������������
	//4. ���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С������������
	//   ����Ƕ�׽ṹ��ĵĶ���������������
	printf("%d\n", sizeof(struct S1)); //12
	printf("%d\n", sizeof(struct S2)); //8
	printf("%d\n", sizeof(struct S3)); //16
	printf("%d\n", sizeof(struct S4)); //32
	return 0;
}