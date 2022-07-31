#include<iostream>
#include<vector>
#include<algorithm>
#include <functional>
using namespace std;
//�ڶ��� �����̳�binary_function                ������ȡ
class PrintVectorInt:public binary_function<int, int, void>
{
public:
	//������ ����������const����
	void operator()(int value, int tmp)const
	{
		cout << "value = " << value << " " << "tmp = " << tmp << endl;
	}
};

int main()
{
	//��������������
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(20);
	v1.push_back(50);

	//for_each ��ȡ������ÿ��Ԫ��
	//��һ�� bind2nd ��bind1st
	for_each(v1.begin(), v1.end(), bind2nd(PrintVectorInt(), 100));
	return 0;
}