#define CRE_SECURE_NO_WARNINGS 1
#define CRE_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);

	char* ret = dest;
	//拷贝src指向的字符串到dest指向的空间， 包含'\0'
	while (*dest++ = *src++)
	{
		;
	}
	//返回目的空间的起始地址
	return ret;
}

int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";

	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}




//strcpy注意：

//源字符串必须以'\0'结束
//会将源字符串中的'\0'拷贝到目标空间
//目标空间必须足够大，以确保能存放源字符串
//目标空间必须可变