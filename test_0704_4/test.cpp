#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	//������������� time(NULL)��ȡ��ǰʱ��
	srand(time(NULL));
	//����������ĺ��� rand()


	//����60��100�������
	int data1 = rand() % 41 + 60;
	cout << "data1 = " << data1 << endl;

	//����'a'��'z'�������ĸ
	rand() % 26 + 'a';
	return 0;
}