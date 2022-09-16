#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char str[100];
	gets(str);
	for (i = 0; str[i]; i++)
	{
		;
	}
	for (i--; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	
	return 0;
}