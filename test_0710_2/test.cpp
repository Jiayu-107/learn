#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	char str[5][30] = { "hello","world","I","love","you" };
	int row = sizeof(str) / sizeof(str[5]);

	int i = 0;
	for (i = 0; i < row; i++)
	{
		cout << str[i] << endl;
	}
	cout<<endl;

	cout << str[2][0] << endl;
	return 0;
}