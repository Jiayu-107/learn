#define _CRT_SECURE_NO_WARNINGS 1

using namespace std;

#include<iostream>

int main(int argc, char* argv[])
{
	//�ж������ϴ���
	int num1 = 0;
	int num2 = 0;
	cout << "����������������";
	cin >> num1 >> num2;
	if (num1 > num2)
	{
		cout << "�����ϴ���Ϊ " << num1 << endl;
	}
	else if (num1 < num2)
	{
		cout << "�����ϴ���Ϊ " << num2 << endl;
	}
	else
	{
		cout << "����һ����" << endl;
	}

	return 0;
}