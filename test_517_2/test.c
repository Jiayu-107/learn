#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


int main()
{
	char arr[] = "cjy&&xx#zyi@1314";
	const char* p = "@#&";

	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}

	return 0;
}