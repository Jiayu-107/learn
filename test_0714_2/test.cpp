#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

struct Date
{
	int year;
	int month;
	int day;
};

struct Student
{
	int num;
	char name[32];
	Date ob;
};

int main(int argc, char* argv[])
{
	Student lucy = {12, "kk",{1,2,3}};
	cout << lucy.name << " " << lucy.num << endl;
	cout << lucy.ob.year << " " << lucy.ob.month << " " << lucy.ob.day << endl;
	return 0;
}