#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

/*typedef ���õĲ���
  1������ ���е����� ����һ����ͨ����
  2���� ���� �滻 ������
  3�� ���������ʽ��ǰ�� ��typedef
*/

/*ע�����
	���ܴ���������
*/

int main(int argc, char* argv[])
{	
	//INT32 ���� int �ı��� 
	typedef int INT32;

	int data1 = 10;//���е�������Ȼ��Ч
	INT32 data2 = 20;

	//����
	//int arr[5];
	//int MYARRAY[5];
	typedef int MYARRAY[5];

	MYARRAY arr = { 0 };

	INT32 i = 0;
	for (; i < 5; i++)
	{
		arr[i] = i;
		cout << arr[i] << " ";
	}
	printf("\n");

	cout << "##" << '\n' << "##" << endl;
	cout << "##" << '\t' << "##" << endl;
	cout << "##" << '\r' << "##" << endl;
	
	cout << '\a' << endl;
	return 0;
}