#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<ctype.h>

int main()
{
	//��arr�е��ַ�ת����Сдȫ��
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