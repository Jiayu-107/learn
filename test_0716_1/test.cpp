#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int My_Add(int x, int y);
int main(int argc, char*argv[])
{
	//�������� �����ڶ����ʱ�� ʹ�ùؼ��� inline���� ������������ʱ��ʹ��inline
	int num1 = 1;
	int num2 = 2;
	int res = My_Add(num1, num2);
	cout << "res = " << res << endl;

	return 0;
}
//�����������ڱ���׶� �����������еĺ����� �滻�������ô������⺯������ʱ�Ŀ�����
inline int My_Add(int x, int y)
{
	return x + y;
}