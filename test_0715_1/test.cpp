#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

void Swap1(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void Swap2(int &x, int &y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

int main(int argc, char* argv[])
{
	//������Ϊ�����Ĳ��� �����ڲ�����ͨ�� ���� �����ⲿ����

	int a = 10;
	int b = 20;
	cout << "a = " << a << " ""b = " << b << endl;

	//Swap1(&a, &b);
	Swap2(a, b);
	cout << "a = " << a << " ""b = " << b << endl;

	/*
	���õ��﷨���������
	1) ��������ʱ���ݵ�ʵ�β��ؼӡ�&����
	2) �ڱ��������в����ڲ���ǰ�ӡ�*���� ������Ϊ���������ı��������ڣ������һЩ���Ͽ��Դ���ָ�롣
	3) C++���������ô���ȡ����ַ���ݵķ�ʽ����Ϊ�����﷨�����Ҳ��׳���
	*/


	return 0;
}