#define CRE_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//����ģ��ʵ��strlen�ķ���
//1.������ 2.�ݹ� 3.ָ��-ָ��

size_t my_strlen1(const char* arr)//��ֹ�ַ��������ģ�ʹ�ó���ָ�����
{
    //��ֹ�����ָ�룬�˴�ʹ�ö���
    assert(arr != NULL);
    int count = 0;
    //���û������'\0'��һֱѭ��
    while (*arr != '\0')
    {
        //ָ�����
        arr++;
        //����������
        count++;
    }
    return count;
}


size_t my_strlen2(const char* arr)//��ֹ�ַ��������ģ�ʹ�ó���ָ�����
{
    //��ֹ�����ָ�룬�˴�ʹ�ö���
    assert(arr != NULL);
    //�����ǰ����'\0'���򳤶�+1��Ȼ��ݹ��ж���һ��λ���Ƿ�Ϊ'\0'��ֱ������'\0'�����ݹ飻
    if (*arr != '\0')
    {
        return 1 + my_strlen2(arr + 1);
    }
    else
    {
        return 0;
    }
}

size_t my_strlen3(const char* arr)//��ֹ�ַ��������ģ�ʹ�ó���ָ�����
{
    //��ֹ�����ָ�룬�˴�ʹ�ö���
    assert(arr != NULL);
    //���Ƚ���ʼ��ַ����
    const char* start = arr;
    //���û������'\0'��һֱѭ��
    while (*arr != '\0')
    {
        //ָ�����
        arr++;
    }
    //������ַ��ȥ��ʼ��ַ����Ԫ�ظ���
    return arr - start;
}


int main()
{
	int len0 = strlen("abcdef");
	int len1 = my_strlen1("abcdef");
	int len2 = my_strlen2("abcdef");
	int len3 = my_strlen3("abcdef");

	printf("%d\n", len0);
    printf("%d\n", len1);
    printf("%d\n", len2);
    printf("%d\n", len3);

	return 0;
}