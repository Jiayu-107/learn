#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
//���������
class Data
{
	friend ostream& operator<<(ostream& out, Data& ob);
private:
	int data;
public:
	Data(){}
	Data(int data)
	{
		this->data = data;
	}
};

template<typename T>
void MyPrintAll(T a)
{
	cout << a << endl;
	cout << "����ģ��" << endl;
}

ostream& operator<<(ostream& out, Data& ob)
{
	out << ob.data;
	return out;
}
int main(int argc, char* argv[])
{
	//����ģ��ľ�����
	//������ģ���Ƶ��� TΪ������������Զ�������ʱ ���ܵĵ����������ʶ��

	MyPrintAll(10);
	MyPrintAll('a');

	Data ob(100);
	MyPrintAll(ob);

	return 0;
}