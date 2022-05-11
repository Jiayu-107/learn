#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//题目名称：字符串逆序（循环方法实现）
//题目内容：编写一个函数 reverse_string(char * string) (递归实现)
//实现：将参数字符串中的字符反向排序
//要求：不能使用C函数库中的字符操作函数

int my_strlen(char* p)
{
	int count = 0;
	while (*p != '\0')
	{
		count++;
		* p++;
	}
	return count;
}


void reverse_string(char arr[])
{
	int left = 0;
	int right = my_strlen(arr) - 1;

	while (left < right)
	{
		char tmp = arr[right];
		arr[right] = arr[left];
		arr[left] = tmp;
		left++;
		right--;
	}

}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);

}