#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a = 1000;
	FILE* pf = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
	fclose(pf);
	pf = NULL;
	return 0;
}