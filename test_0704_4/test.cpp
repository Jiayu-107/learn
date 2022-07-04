#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	//设置随机数种子 time(NULL)获取当前时间
	srand(time(NULL));
	//产生随机数的函数 rand()


	//产生60到100的随机数
	int data1 = rand() % 41 + 60;
	cout << "data1 = " << data1 << endl;

	//产生'a'到'z'的随机字母
	rand() % 26 + 'a';
	return 0;
}