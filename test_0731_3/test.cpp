#include<iostream>
#include<vector>
#include<algorithm>
#include <functional>
using namespace std;
//第二步 公共继承binary_function                参数萃取
class PrintVectorInt:public binary_function<int, int, void>
{
public:
	//第三步 整个函数用const修饰
	void operator()(int value, int tmp)const
	{
		cout << "value = " << value << " " << "tmp = " << tmp << endl;
	}
};

int main()
{
	//函数对象适配器
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(20);
	v1.push_back(50);

	//for_each 提取容器的每个元素
	//第一步 bind2nd 或bind1st
	for_each(v1.begin(), v1.end(), bind2nd(PrintVectorInt(), 100));
	return 0;
}