#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;//��'\0'����ȥ
}

int main()
{	
	//strcpy �ַ�������
	//ʵ��my_strcpy
	char arr1[] = "###############";
	char arr2[] = "hello world!";
	my_strcpy(arr1,arr2);//Ŀ�ĵ� �� Դͷ
	printf("%s",arr1);
	return 0;
}