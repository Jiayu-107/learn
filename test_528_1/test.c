#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char buf[1024] = { 0 };

	FILE* pf = fopen("test.txt", "w");
	if (NULL == pf)
	{
		return 0;
	}
	//п╢нд╪Ч
	fputs("hello\n", pf);
	fputs("world\n", pf);


	fclose(pf);
	pf = NULL;

	return 0;
}