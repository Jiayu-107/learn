#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	char str[30] = " ";
	cout << "�������ַ���:" << endl;
	cin.getline(str, sizeof(str)); //��ȡ�ַ����ĳ���

	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	cout << "�ַ�������Ϊ��" << i << endl;
	return 0;
}