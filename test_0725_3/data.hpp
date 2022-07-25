#ifndef _DATA_H_
#define _DATA_H_
#include<iostream>
using namespace std;
template<class T1, class T2>
class Data
{
private:
	T1 a;
	T2 b;
public:
	Data();
	Data(T1 a, T2 b);
	void ShowData(void);
};

#endif

template<class T1, class T2>
inline Data<T1, T2>::Data()
{
	cout << "无参构造" << endl;
}

template<class T1, class T2>
inline Data<T1, T2>::Data(T1 a, T2 b)
{
	this->a = a;
	this->b = b;
}

template<class T1, class T2>
inline void Data<T1, T2>::ShowData(void)
{
	cout << a << " " << b << endl;
}
