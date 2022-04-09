#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int strlen(const char* str)
{
	if (*str == 0)
		return 0;
	else
		return 1 + strlen(str + 1);
}
int main()
{
	//求字符串的长度
	char* p = "warnings";
	int len = strlen(p);
	printf("%d", len);
	return 0;
}