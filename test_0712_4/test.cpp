#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main(int argc, char* argv)
{	
	//ึธี๋สýื้
	const char* arr[4] = { "hehehhe", "xixixixi","hahahaha","enenenen" };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		cout << arr[i] << endl;
		cout << *(arr[i] + 1) << endl;
	}

	return 0;
}