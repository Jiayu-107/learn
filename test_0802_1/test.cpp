#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

class Data
{
public:
	int data;
public:
	Data() {}
	Data(int d) {
		data = d;
	}
	void printInt(int tmp)
	{
		cout << "value=" << data + tmp << endl;
	}
};
int main()
{
	vector<Data> v1;
	v1.push_back(Data(10));
	v1.push_back(Data(30));
	v1.push_back(Data(50));
	v1.push_back(Data(70));
	v1.push_back(Data(90));
	//for_each 提取容器的每个元素
	for_each(v1.begin(), v1.end(), bind2nd(mem_fun_ref(&Data::printInt), 100));
	cout << endl;
	return 0;
}
