#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
class Data
{
public:
	int mA;
public:
	Data()
	{
		cout << "�޲ι���" << endl;
	}
	Data(int a)
	{
		mA = a;
		cout << "�вι��� mA=" << mA << endl;
	}
#if 1
	//��������Ķ�����ʽ:ob���Ǿɶ��������
	Data(const Data& ob)
	{
		//һ��ʵ���� �������캯�� ������ɸ�ֵ����
		mA = ob.mA;
		cout << "�������캯��" << endl;
	}
#endif
	~Data()
	{
		cout << "��������mA=" << mA << endl;
	}
};
int main(int argc, char* argv[])
{
	Data ob1(10);
	//�ɶ�����¶����ʼ�� �ͻ���ÿ������캯��
	Data ob2 = ob1;
	cout << "ob2.mA =" << ob2.mA << endl;
	return 0;
}
