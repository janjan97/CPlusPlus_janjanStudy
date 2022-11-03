#pragma once
#include <assert.h> // assert
#include <iostream>

template<typename T>
class MyArray
{
private:
	int m_length; 
	T* m_data; //데이터를 담기때문에

public:
	MyArray()
	{
		m_length = 0;
		m_data = nullptr;
	}

	MyArray(int length)
	{
		m_data = new T[length];  //동적할당 데이터
		m_length = length;
	}

	~MyArray()
	{
		reset();
	}

	void reset()
	{
		delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}

	T& operator[](int index) 	// 반환타입도 여러개
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	int getLength()
	{
		return m_length;
	}

	void print();
};

