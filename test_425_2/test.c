#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)// '\0'��ASCLL��ֵΪ0
//		{
//			;
//		}
//	}
//	
//}

char* my_strcpy(char* dest, const char* src)//const ��ɳ����Բ��ɸı�
{
	char* ret = dest;
	assert(dest != NULL);//����:���ʽΪ��ʲô�¶����ᷢ�������ʽΪ�پͻᱨ��
	assert(src != NULL);
	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	//strcpy �ַ�������
	//ʵ��my_strcpy
	char arr1[] = "###############";
	char arr2[] = "hello world!";
	printf("%s", my_strcpy(arr1, arr2));//Ŀ�ĵ� �� Դͷ
	return 0;
}