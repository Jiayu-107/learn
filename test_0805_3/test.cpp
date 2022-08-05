#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char* argv[])
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(60);
	v1.push_back(70);

	vector<int> v2;
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(60);
	v2.push_back(70);
	v2.push_back(80);

	vector<int> v3;
	v3.resize(min(v1.size(), v2.size()));
	//求交集
	vector<int>::iterator ret = v3.end();
	ret = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	copy(v3.begin(), ret, ostream_iterator<int>(cout, " "));
	cout << endl;
	//求并集
	vector<int> v4;
	v4.resize(v1.size() + v2.size());
	vector<int>::iterator it = v4.end();
	it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v4.begin());
	copy(v4.begin(), it, ostream_iterator<int>(cout, " "));


	return 0;
}