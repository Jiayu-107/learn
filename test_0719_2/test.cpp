#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Data
{
private:
	static int mA;
public:
	//��̬��Ա���� ֻ�ܲ�����̬��Ա����
	static int GetA(void)
	{
		return mA;
	}
};
int Data::mA = 100;
int main(int argc, char* argv[])
{
	cout << Data::GetA() << endl;
	return 0;
}