#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
int main(int argc, char* argv)
{
	//指针变量的指向类型 决定了+1跨度

	int num = 0x01020304;
	int* p1 = &num;
	cout << hex << *p1 << endl;
	short* p2 = (short*)&num;
	cout << hex << *p2 << endl;
	char* p3 = (char*)&num;
	cout << hex << (int)*p3;

	return 0;
}