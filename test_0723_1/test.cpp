#define _CRT_SECURE_NO_WARNINGS 1

#include <string>
using namespace std;
class Person
{
	friend ostream& operator<<(ostream& out, Person& ob);
private:
	int num;
	string name;
	float score;
public:
	Person() {}
	Person(int num, string name, float score) :num(num), name(name), score(score) {}
};
/ 全局函数重载operator <<
ostream & operator<<(ostream & out, Person & ob)
{
	out << ob.num << " " << ob.name << " " << ob.score << endl;
	return out;
}
int main(int argc, char* argv[])
{
	Person lucy(100, "lucy", 99.8f);
	Person bob(101, "bob", 99.8f);
	cout << lucy << bob << endl;//operator<<(cout, lucy);
	return 0;
}
