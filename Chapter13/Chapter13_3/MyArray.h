#pragma once
#include <assert.h> // assert
#include <iostream>

template<typename T, unsigned int T_SIZE> //m_length 대체
class MyArray
{
private:
	//int m_length;
	T* m_data;  // T m_data[T_SIZE]

public:
	MyArray()
	{
		m_data = new T [T_SIZE];
	}

	~MyArray()
	{
		delete[] m_data;
	}

	T& operator[](int index) 	
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	int getLength()
	{
		return T_SIZE;
	}

	void print();
	{
		for (int i = 0; i < T_SIZE; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}
};

