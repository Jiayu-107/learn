#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

int my_strlen(const char* src)
{
	int count = 0;
	assert(src != '\0');
	while (*src != '\0')
	{
		count++;
		src++;
	}
	return count;
}

int main()
{
	char arr[] = "hello world!";
	int ret = my_strlen(arr);
	printf("%d\n",ret);
	return 0;
}