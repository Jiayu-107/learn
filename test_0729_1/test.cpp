#include<iostream>
#include<vector>
using namespace std;

void test01()
{
	//��ģ�� ָ������
	vector<int> v1;

	v1.push_back(10);
	v1.push_back(30);
	v1.push_back(20);
	v1.push_back(40);
	v1.push_back(50);

	//����������
	//����һ����������������ʼ������
	vector<int>::iterator it = v1.begin();
	for (; it != v1.end(); it++)
	{
		// *it == int
		cout << *it << " ";
	}
	cout << endl;
}

void test02()
{
	//δ����ѻ���
	vector<int> v2;
	//����Ԥ���㹻�Ŀռ�
	v2.reserve(1000);
	cout << "size = " << v2.size() << " capacity = " << v2.capacity() << endl;
	vector<int>::iterator it;
	int count = 0;
	
	for (int i = 0; i < 1000; i++)
	{
		v2.push_back(i);
		//������
		if (it != v2.begin())
		{
			count++;
			cout << "��" << count << "���ٿռ䣬����Ϊ:" << v2.capacity() << endl;
			it = v2.begin();
		}
	}
}


int main(int argc, char* argv[])
{
	
	return 0;
}