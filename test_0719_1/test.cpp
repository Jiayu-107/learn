#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Data
{
public:
	int a;//��ͨ��Ա����
	//���ж���
	static int b;//��̬��Ա����
};
//�����ʼ��
int Data::b = 100;//���ü�static
int main(int argc, char* argv[])
{
	//��̬��Ա���� ͨ��������ֱ�ӷ��ʣ������ࣩ
	cout << Data::b << endl;
	//��̬��Ա���� ͨ���������(����)
	Data ob1;
	cout << ob1.b << endl;//100
	ob1.b = 200;
	Data ob2;
	ob2.b = 300;
	cout << Data::b << endl;//300
	return 0;
}
