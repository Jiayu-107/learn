#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĸߵ�ַ�У������ݵĸ�λ�������ڴ�ĵ͵�ַ�У�
//С�ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ش�ĵ͵�ַ�У������ݵĸ�λ�������ڴ�ĸߵ�ַ�У�

int check_sys()
{
	int a = 0x00000001;
	char* p = &a;
	if (*p = 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
	//����1��С��
	//����0�����
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	
	return 0;
}