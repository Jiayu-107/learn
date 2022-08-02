#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

void MyPrintInt(int value, int tmp)
{
	cout << "value = " << value << " " << "tmp = " << tmp << endl;
}
int main(int argc, char* argv[])
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(20);
	v1.push_back(50);
	for_each(v1.begin(), v1.end(), bind2nd(ptr_fun(MyPrintInt), 100));
	return 0;
}