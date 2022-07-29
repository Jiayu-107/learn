#include<iostream>
#include<vector>
using namespace std;

void PrintVectorInt(vector<int>& v)
{
	vector<int>::iterator it = v.begin();
	for (; it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{	
	//vector 构造函数
	vector<int> v1(5, 100);
	cout << "v1:";
	PrintVectorInt(v1);

	vector<int> v2(v1.begin(), v1.end());
	cout << "v2:";
	PrintVectorInt(v2);

	//vector常用赋值操作
	vector<int> v3;
	//v3 = v2;
	//v3.assign(v2.begin(), v2.end());
	v3.assign(10, 10);
	v3.swap(v2);
	cout << "v2:";
	PrintVectorInt(v2);
	cout << "v3:";
	PrintVectorInt(v3);
	cout << v3.size() << endl;

	vector<int> v4;
	if (v4.empty())
	{
		cout << "empty" << endl;
	}
	else
	{
		cout << "not empty" << endl;
	}
}

void test02()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	cout << "头部元素 " << v1.front() << ", 尾部元素 " << v1.back() << endl;
	cout << v1[0] << " " << v1.at(4) << endl;
	//at 越界会抛出异常 [] 越界不会抛出异常
	v1[0] = 100;
	v1.at(1) = 200;
	PrintVectorInt(v1);//100 200 30 40 50

	//尾部删除
	v1.pop_back();//100 200 30 40 
	PrintVectorInt(v1);
	v1.insert(v1.begin() + 2, 3, 300);
	PrintVectorInt(v1);//100 200 300 300 300 30 40 
	v1.erase(v1.begin() + 2, v1.begin() + 5);//100 200 30 40
	PrintVectorInt(v1);
	v1.erase(v1.begin() + 3);
	v1.erase(v1.begin()+2);//100 200
	PrintVectorInt(v1);
	v1.clear();
	cout << "size = " << v1.size() << " " << "capacity = " << v1.capacity() << endl;
}

int main(int argc, char* argv[])
{
	test02();
	return 0;
}