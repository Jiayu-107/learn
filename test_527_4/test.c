#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
	//FILE* pfWrite = fopen("test.txt", "w");
	//
	////写文件
	//fputc('h', pfWrite);
	//fputc('e', pfWrite);
	//fputc('l', pfWrite);
	//fputc('l', pfWrite);
	//fputc('o', pfWrite);

	////关闭文件
	//fclose(pfWrite);
	//pfWrite = NULL;


//	FILE* pfRead = fopen("test.txt", "r");
//	if (NULL == pfRead)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	
//	//读文件
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}



//从键盘输入
//输出到屏幕
//键盘&屏幕都是外部设备

//键盘 - 标准输入设备 - stdin
//屏幕 - 标准输出设备 = stdout
//是一个程序默认打开的两个流设备

//stdin FILE*
//stdout FILE*
//stderr FILE*



int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);

	return 0;
}