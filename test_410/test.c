//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr1[10] = {1,2,3};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0��
//	char arr2[5] = { 'a',98 };//����0��
//	char arr3[5] = "ab";//ok�ã�'a','b','\0'������0 �����ǵ�һ��0��һ����
//	char arr4[] = "abcdef";
//
//	printf("%zd\n", sizeof(arr4));
//	//sizeof ���� arr4��ռ�ռ�Ĵ�С
//	//�߸�Ԫ��- char 7*1 = 7
//
//	printf("%zd", strlen(arr4));//7 6 
//	//strlen ���ַ����ĳ��� - '\0'֮ǰ���ַ�������
//	//[a b c d e f \0]
//	// 6
//
//
//	//1.strlen �� sizeof û��ʲô����
//	//2.strlen �����ַ������ȵ� - ֻ������ַ������� - �⺯�� - ʹ�õ�����ͷ�ļ�
//	//3.sizeof ������������飬���͵Ĵ�С - ��λ���ֽ� - ������
//
//	return 0;
//}





//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%zd\n", sizeof(arr1));
//	printf("%zd\n", sizeof(arr2));
//	printf("%zd\n", strlen(arr1));
//	printf("%zd\n", strlen(arr2));//���ֵ
//
//	return 0;
//}


#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char arr1[] = { "abcdef" };
	//printf("%c\n", arr1[3]);//��ӡd��d�ǵ���λ�������±�Ϊ3��
	//��ӡ����arr1���е�Ԫ�أ�
	
	int len = strlen(arr1);
	for(i = 0; 1 < len; i++)
	//for (i = 0;i < (int)strlen(arr1); i++)//strlen ����һ���޷�������,(int)ǿ������ת����
	{
		printf("%c ", arr1[i]);//   \0 ���ᱻ��ӡ
	}
	return 0;
}