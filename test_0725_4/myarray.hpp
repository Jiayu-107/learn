#ifndef MYARRAY_HPP
#define MYARRAY_HPP

#include<iostream>
#include<string.h>
using namespace std;

//���һ��������ģ�� ���Դ��������������
template<class T>
class MyArray
{
	friend MyArray& MyArray<T>::operator=(MyArray& ob);
private:
	T* arr;//����������Ԫ�ص�ַ
	int size;//��С
	int capacity;//����
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
	if (size == capacity)//��
	{
		capacity = (capacity == 0 ? 1 : 2 * capacity);//��չ����
		T* tmp = new T[capacity];
		if (NULL != arr)
		{
			//���ɵ����ݿ������¿ռ�
			memcpy(tmp, arr, sizeof(T) * capacity);
			//�ͷžɿռ�
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
		cout << "����Ϊ��" << endl;
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
inline MyArray<T>& MyArray<T>::operator=(MyArray& ob)//���� = �����
{
	//�ж�this->arr�Ƿ���ڿռ�
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

//���� << �����
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