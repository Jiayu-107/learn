#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main(int argc, char*argv[])
{
	//�����д��ĸ��Сд��ĸ Сд��ĸ���д��ĸ

	char ch = '\0';
	cout << "������һ����ĸ " << endl;
	cin >> ch;
	if ('a' <= ch && ch <= 'z')
	{
		ch = ch - ('a' - 'A');//������Ȼӷ�� ���ǿɶ���ǿ
		cout << "��д��ĸΪ " << ch << endl;
	}
	else if ('A' <= ch && ch <= 'Z')
	{
		ch = ch + 32;
		cout << "Сд��ĸΪ " << ch << endl;
	}

	return 0;
}