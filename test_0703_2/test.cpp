#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	//������� ����Ƶ��ʹ�� ���Զ��������洢�ڼĴ����� Ŀ�ģ���߷���Ч��
	register int data = 0;//data������Ĵ���

	//������Ҫ�ԼĴ�������ȡ��ַ(c���Ծ��Բ��� c++���ϸ����)
	&data;
	cout << &data << endl;
	//register ���εı��� ֻ�Ǿ�������Ĵ����� ��Ϊ�Ĵ��������������޵�

	return 0;
}