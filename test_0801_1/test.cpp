#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MyTransform(int value)
{
	return value;
}
int main(int argc, char* argv[])
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(20);
	v1.push_back(50);

	vector<int> v2;
	v2.resize(v1.size());

	transform(v1.begin(), v1.end(), v2.begin(), MyTransform);
	for_each(v2.begin(), v2.end(), [=](int val) {
		cout << val << " ";
		});
	cout << endl;
	return 0;
}