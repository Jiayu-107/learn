#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<bitset>

using namespace std;

int main(int argc, char* argv[])
{
	int  num = 100;
	cout << "numΪ 100" << '\n';
	cout << "num�Ķ����ƣ�" << bitset<8>(num) << endl;
	cout << "num�İ˽��ƣ�" << oct << num << endl;
	cout << "num��ʮ���ƣ�" << dec << num << endl;
	cout << "num��ʮ�����ƣ�" << hex << num << endl;

	return 0;
}