#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Data 
{
private:
	int mA;
public:
	//��������
	void SetA(int a);
	int GetA(void);
};

//����ʵ��
void Data::SetA(int a)
{
	mA = a;
}
int Data::GetA(void)
{
	return mA;
}


int main(int argc, char* argv[])
{
	//��Ա����������ʵ��
	Data ob;
	ob.SetA(10);
	cout << ob.GetA() << endl;
	return 0;;
}