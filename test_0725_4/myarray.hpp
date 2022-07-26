#ifndef MYARRAY_HPP
#define MYARRAY_HPP

#include<iostream>
#include<string.h>
using namespace std;

//设计一个数组类模板 可以存放任意数据类型
template<class T>
class MyArray
{
	friend MyArray& MyArray<T>::operator=(MyArray& ob);
private:
	T* arr;//保存数组首元素地址
	int size;//大小
	int capacity;//容量
public:
	MyArray();
	MyArray(int capacity);
	MyArray(const MyArray& ob);
	~MyArray();

	void PushBack(T elem);
	void SortArray();

	MyArray& operator=(MyArray& ob);
};

#endif

template<class T>
inline MyArray<T>::MyArray()
{
	size = 0;
	capacity = 0;
	arr = NULL;
}

template<class T>
inline MyArray<T>::MyArray(int capacity)
{
	this->capacity = capacity;
	size = 0;
	arr = new T * [this->capacity];
	memset(arr, 0, sizeof(T) * capacity);
}

template<class T>
inline MyArray<T>::MyArray(const MyArray& ob)
{
	if (NULL == ob.arr)
	{
		arr = NULL;
		capacity = 0;
		size = 0;
	}
	else
	{
		capacity = ob.capacity;
		size = ob.size;
		arr = new T[capacity];
		memcpy(arr, ob.arr, sizeof(T) * capacity);
	}
	
}

template<class T>
inline MyArray<T>::~MyArray()
{
	if (NULL != arr)
	{
		delete[] arr;
		arr = NULL;
	}
}

template<class T>
inline void MyArray<T>::PushBack(T elem)
{
	if (size == capacity)//满
	{
		capacity = (capacity == 0 ? 1 : 2 * capacity);//扩展容量
		T* tmp = new T[capacity];
		if (NULL != arr)
		{
			//将旧的内容拷贝到新空间
			memcpy(tmp, arr, sizeof(T) * capacity);
			//释放旧空间
			delete[] arr;
		}
		arr = tmp;
	}
	else
	{
		arr[size] = elem;
		size++;
	}
}

template<class T>
inline void MyArray<T>::SortArray()
{
	if (NULL == arr)
	{
		cout << "容器为空" << endl;
	}
	else
	{
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - i - j; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					T tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
	}
}

template<class T>
inline MyArray<T>& MyArray<T>::operator=(MyArray& ob)//重载 = 运算符
{
	//判断this->arr是否存在空间
	if (NULL != arr)
	{
		delete[] arr;
		arr = NULL;
	}
	else
	{
		capacity = ob.capacity;
		size = ob.size;
		arr = new T[capacity];
		memset(arr, 0, sizeof(T) * capacity);
		memcpy(arr, ob.arr, sizeof(T) * capacity);
		return *this;
	}
}

//重载 << 运算符
template<typename T>
inline ostream& operator<<(ostream& out, MyArray<T>& ob)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		out << ob.arr[i] << " ";
	}
	return out;

}