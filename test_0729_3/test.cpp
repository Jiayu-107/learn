#include<iostream>
#include<vector>

using namespace std;
int main(int argc, char* argv[])
{	
	vector<int> v1;
	v1.reserve(1000);
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	cout << "size = " << v1.size() << " " << "capacity = " << v1.capacity() << endl;//5 1000
	//resize ֻ���޸Ĵ�С �����޸�����
	v1.resize(4);
	cout << "size = " << v1.size() << " " << "capacity = " << v1.capacity() << endl;//4 1000
	//���� swap �����ڴ�ռ�
	//vector<int>()������������ v1�ɶ�����¶���ֵ ���ÿ�������
	//���������и��ص� ֻ���ʵ�ʴ�С��size����������
	//�ٵ���swap() �������� �� v1 ָ���λ�ý���
	//���������� �����������Զ�������
	vector<int>(v1).swap(v1);
	cout << "size = " << v1.size() << " " << "capacity = " << v1.capacity() << endl;//4 4
	return 0;
}