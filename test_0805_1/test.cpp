#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void PrintVectorInt(vector<int> v)
{
	vector<int>::iterator it = v.begin();
	for (; it != v.end(); it++)
	{
		cout << *it << endl;
	}
}
int main(int argc, char* argv[])
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(30);
	v1.push_back(50);

	vector<int> v2;
	v2.push_back(20);
	v2.push_back(40);
	v2.push_back(60);

	vector<int> v3;
	v3.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	PrintVectorInt(v3);

	return 0;
}