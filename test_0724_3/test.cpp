#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
//�� ���麯������ Ϊ������
class Animal
{
public:
	//���麯��
	virtual void speak(void) = 0;
};
class Dog :public Animal
{
public:
	//����һ��Ҫ��д ��������д��麯��
	void speak(void)
	{
		cout << "��������" << endl;
	}
};
int main(int argc, char* argv[])
{
	//Animal ob;//err �����಻��ʵ��������
	Animal* p = new Dog;
	p->speak();//"��������"
	return 0;

	/*
	һ�������д��麯������ô����� ���ǳ����ࡣ
     ������ ����ʵ���� ���󡣣�Animal ob������
     ������ ���뱻�̳� ͬʱ ���� ������д ��������д��麯�������� ����Ҳ�ǳ����ࡣ
    */
	//��������Ҫ��Ŀ�� ����� ��Ľӿڣ�

}