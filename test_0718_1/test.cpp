#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
class Data
{
public:
	int mA;
public:
	//�޲ι��캯��
	Data()
	{
		mA = 0;
		cout << "�޲ι��캯��" << endl;
	}
	//�вι��캯��
	Data(int a)
	{
		mA = a;
		cout << "�вι��캯�� mA=" << mA << endl;
	}
};
int main()
{
	//��ʽ�����޲ι��캯�����Ƽ���
	Data ob1;
	//��ʾ�����޲ι��캯��
	Data ob2 = Data();
	//��ʽ�����вι��캯�����Ƽ���
	Data ob3(10);
	//��ʾ�����вι��캯��
	Data ob4 = Data(10);
	//��������(�޲�) ��ǰ��似�� �����ͷ�
	Data();
	Data(20);
	//���캯����ʽת��������ֻ��һ�����ݳ�Ա��
	Data ob5 = 100;
}