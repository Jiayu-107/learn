#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��Ŀ���ƣ��ַ�������ѭ������ʵ�֣�
//��Ŀ���ݣ���дһ������ reverse_string(char * string) (�ݹ�ʵ��)
//ʵ�֣��������ַ����е��ַ���������
//Ҫ�󣺲���ʹ��C�������е��ַ���������

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