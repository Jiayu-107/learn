#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	//�޷��ź��з��� �������� �з��Ż�ת�����޷���
	int data1 = -10;
	unsigned int data2 = 6;


	if (data1 + data2 > 0)
	
	//-4 ԭ�룺10000000 00000000 00000000 00000100
	//	 ���룺11111111 11111111 11111111 11111011
	//   ���룺11111111 11111111 11111111 11111100

	{
		cout << ">0" << endl;
	}
	else
	{
		cout << "<=0" << endl;
	}
	cout<<endl;

	//int �� double �������� �Ὣintת��double ����
	int data3 = 0;
	double data4 = 0.0;
	cout << sizeof(data3 + data4) << endl;
	cout << endl;

	//char��short���� ֻҪ�������� ���Ὣ�Լ�ת����int����

	char ch = 'a';
	short sh = 0;
	cout << sizeof(ch + sh) << endl;//4
	cout << sizeof(ch + ch) << endl;//4
	cout << sizeof(sh + sh) << endl;//4
	return 0;
}