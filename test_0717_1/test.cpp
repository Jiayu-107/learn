#include<iostream>
using namespace std;

//类 Data 是一个类型
class Data
{
//类中 默认为私有
private:
	int mA;//不要给类中成员初始化
protected://保护
	int mB;
public://公共
	int mC;
//在类的内部 不存在权限之分
	void ShowData(void)
	{
		cout << mA << " " << mB << " " << mC << endl;
	}
};

int main(int argc, char* argv[])
{
	//类实例化一个对象
	Data ob;
	//类外不能直接访问 类的保护和私有数据
	//cout<<ob.mA<<endl; //err
	//cout<<ob.mb<<endl; //err
	//cout<<ob.mC<<endl; //使用了未初始化的局部变量

	//类中的成员函数 需要对象调用
	ob.ShowData();
	return 0;
}