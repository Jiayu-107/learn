#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

class Brithday
{
private:
    int year;
    int moon;
    int day;
public:
    Brithday(int year, int moon, int day)
    {
        this->year = year;
        this->moon = moon;
        this->day = day;
    }
    ~Brithday()
    {
        cout << "Brithday �����������" << endl;
    }
    int getYear()
    {
        return year;
    }
    int getMoon()
    {
        return moon;
    }
    int getDay()
    {
        return day;
    }
};
class People
{
private:
    string number;
    string sex;
    Brithday brithday;
    string id;
public:
    People(string number, string sex, int year, int moon, int day, string id)
        :brithday(year, moon, day)
    {
        this->number = number;
        this->sex = sex;
        this->id = id;
    }
    People(People& p1)
        :brithday(p1.brithday.getYear(), p1.brithday.getMoon(), p1.brithday.getDay())
    {
        this->number = p1.number;
        this->sex = p1.sex;
        this->id = p1.id;
    }
    ~People()
    {
        cout << "People ��Ա�����������" << endl;
    }
    void display();
};
inline void People::display()
{
    cout << "Peolpe ��Ա���������" << endl;
    cout << number << " " << sex << " " << brithday.getYear() << " ��" << brithday.getMoon() << "��" << brithday.getDay() << "�� " << id << endl;
}

int main()
{
    People p1("159074277", "��", 1997, 2, 4, "452316735216753251");
    p1.display();
    People p2(p1);
    p2.display();
    system("pause");
    return 0;
}