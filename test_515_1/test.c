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
	//����srcָ����ַ�����destָ��Ŀռ䣬 ����'\0'
	while (*dest++ = *src++)
	{
		;
	}
	//����Ŀ�Ŀռ����ʼ��ַ
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




//strcpyע�⣺

//Դ�ַ���������'\0'����
//�ὫԴ�ַ����е�'\0'������Ŀ��ռ�
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
//Ŀ��ռ����ɱ�