#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#pragma pack(8) //����Ĭ�϶�����Ϊ 8
struct S1
{
	char c1;//1
	//3
	int i;//4
	char c2;//1
};
#pragma pack()  //ȡ�����õ�Ĭ�ϵĶ�����
				// visual stdio Ĭ�ϵĶ�����Ϊ8

#pragma pack(1)
struct S2
{
	char c1;//1
	int i;//4
	char c2;//1
};
#pragma pack()

int main()
{
	printf("%zd\n", sizeof(struct S1)); // 12
	printf("%zd\n", sizeof(struct S2)); // 6

	return 0;
}