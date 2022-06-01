#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//预处理
int main()
{
	/*printf("%s\n", __FILE__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	printf("%s\n", __FUNCTION__);*/

	//写日志文件

	int i = 0;
	int arr[10] = { 0 };

	FILE* pf = fopen("log.txt", "w");
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "file:%s line:%d date:%s time:%s i =%d",
			__FILE__, __LINE__, __DATE__, __TIME__, i);
	}

	fclose(pf);
	pf = NULL;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}