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
	//resize 只能修改大小 不能修改容量
	v1.resize(4);
	cout << "size = " << v1.size() << " " << "capacity = " << v1.capacity() << endl;//4 1000
	//巧用 swap 收缩内存空间
	//vector<int>()建立匿名对象 v1旧对象给新对象赋值 调用拷贝构造
	//拷贝构造有个特点 只会把实际大小（size）拷贝过来
	//再调用swap() 匿名对象 和 v1 指向的位置交换
	//而匿名对象 当语句结束后自动销毁了
	vector<int>(v1).swap(v1);
	cout << "size = " << v1.size() << " " << "capacity = " << v1.capacity() << endl;//4 4
	return 0;
}