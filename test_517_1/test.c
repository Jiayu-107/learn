#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<ctype.h>

int main()
{
	//将arr中的字符转换成小写全部
	char arr[] = "I aM a STUdent";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);

	return 0;
}