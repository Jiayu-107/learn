#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)// '\0'的ASCLL码值为0
//		{
//			;
//		}
//	}
//	
//}

char* my_strcpy(char* dest, const char* src)//const 变成常属性不可改变
{
	char* ret = dest;
	assert(dest != NULL);//断言:表达式为真什么事都不会发生，表达式为假就会报错。
	assert(src != NULL);
	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	//strcpy 字符串拷贝
	//实现my_strcpy
	char arr1[] = "###############";
	char arr2[] = "hello world!";
	printf("%s", my_strcpy(arr1, arr2));//目的地 ， 源头
	return 0;
}