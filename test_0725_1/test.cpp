#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
//Tֻ�ܶԵ�ǰ������Ч typename���Ի���class
template<typename T>
void swapAll(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
	cout << "����ģ��" << endl;
}

void swapAll(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "��ͨ����" << endl;
}

int main(int argc, char* argv[])
{	
	//����ģ�����ͨ������ʶ�� Ĭ��ʹ����ͨ���� ����ǿ��ʹ�ú���ģ��
	int a = 10;
	int b = 20;
	swapAll(a, b);//������ͨ����
	cout << "a = " << a << " " << "b = " << b << endl;
	//ǿ��ʹ�ú���ģ��
	swapAll<>(a, b);//���ú���ģ��
	//����ģ�� �Զ������Ƶ�ʱ ���ܶԺ����Ĳ��� ���� �Զ�����ת��

	cout <<" ------------------ "<<endl;
	swapAll(10, 20);//��ͨ����
	swapAll('a', 'b');//��ͨ����
	swapAll<>('a', 'b');//����ģ��
	swapAll(10, 'b');//��ͨ����
	//swapAll<int>(10, "b");

	return 0;
}