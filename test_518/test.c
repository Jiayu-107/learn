#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stddef.h>

struct S
{
	char c;
	int i;
	double d;
};

int main()
{

	// size_t offsetof(structName, memberName);
	//����ṹ���ַ�ƫ����

	printf("%zu\n", offsetof(struct S, c));
	printf("%zu\n", offsetof(struct S, i));
	printf("%zu\n", offsetof(struct S, d));
	return 0;
}