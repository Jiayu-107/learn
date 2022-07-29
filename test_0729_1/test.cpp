#include<iostream>
#include<vector>
using namespace std;

void test01()
{
	//类模板 指明类型
	vector<int> v1;

	v1.push_back(10);
	v1.push_back(30);
	v1.push_back(20);
	v1.push_back(40);
	v1.push_back(50);

	//遍历该容器
	//定义一个迭代器，保存起始迭代器
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
	//未雨绸缪机制
	vector<int> v2;
	//事先预留足够的空间
	v2.reserve(1000);
	cout << "size = " << v2.size() << " capacity = " << v2.capacity() << endl;
	vector<int>::iterator it;
	int count = 0;
	
	for (int i = 0; i < 1000; i++)
	{
		v2.push_back(i);
		//有问题
		if (it != v2.begin())
		{
			count++;
			cout << "第" << count << "开辟空间，容量为:" << v2.capacity() << endl;
			it = v2.begin();
		}
	}
}


int main(int argc, char* argv[])
{
	
	return 0;
}