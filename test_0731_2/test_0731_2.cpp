#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool greaterThan30(int value)
{
	return value > 30;
}
class GreaterThan30
{
public:
	bool operator()(int value)
	{
		return value > 30;
	}
};
int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(30);
	v1.push_back(50);
	v1.push_back(70);
	v1.push_back(90);
	//find_if条件查找
	vector<int>::iterator ret;
	//普通函数提供策略 函数名
	//ret = find_if(v1.begin(), v1.end(), greaterThan30);
	//仿函数提供策略 类名称+（）
	ret = find_if(v1.begin(), v1.end(), GreaterThan30());
	if (ret != v1.end())
	{
		cout << "寻找的结果:" << *ret << endl;
	}
}
