#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	char ch1 = 'x';
	cout << ch1 << endl;
	cout << (int)ch1 << endl;

	ch1 = 120;//��������ƥ��
	cout << ch1 << endl;
	cout << (int)ch1 << endl;

	char ch2 = '\0';//�ַ������ĳ�ʼ��
	cout << ch2 << endl;

	// '\0' '0' ��ֵ0 ������
	// '\0' �ַ�������char��ASCII��ֵΪ 0
	// '0' �ַ�������char��ASCII��ֵΪ48
	// ��ֵ0 ���ͳ��� ���ڴ��д洢ֵΪ0


	return 0;
}