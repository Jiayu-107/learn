#define _CRT_SECURE_NO_WARNINGS 1

//ǿ������ת��
//(����˵����)(���ʽ)
//���ܣ�
//	  �ѱ��ʽ��������ǿ��ת��������˵��������ʾ��������

//(int)p + 1; ��pǿת��int���� Ȼ����+1
//(int)(p+1); ��p+1ǿת��int����

#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	float f = 3.14f;
	int x = 0;
	x = (int)f;
	cout << "x = " << x << endl;
	cout << "f = " << f << endl;

	//�����Զ�ת�����ͻ���ǿ��ת������ ������ʱ��
	return 0;
}
