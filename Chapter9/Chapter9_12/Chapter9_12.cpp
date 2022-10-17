// Chapter9_12.cpp : 이니셜라이져 리스트 (initializer_list) 
#include <iostream>
#include <cassert>
#include <initializer_list> //include
using namespace std;

class IntArray
{
private:
	unsigned m_length = 0;
	int* m_data = nullptr; //메모리 동적할당

public:
	IntArray(unsigned length) // 길이를 알려주면 생성자로 동적할당함
		: m_length(length)
	{
		m_data = new int[length]; // 메모리를 잡아줌
	}

	IntArray(const std::initializer_list<int>& list)
		:IntArray(list.size()) // 메모리는 바로 위의 생성자를 통해 생성하고
	{
		int count = 0;
		for (auto& element : list)
		{
			m_data[count] = element;
			++count;
		}
	}

	~IntArray() // 소멸자
	{
		delete[] this->m_data;
	}

	friend ostream& operator << (ostream& out, IntArray& arr)
	{
		for (unsigned i = 0; i < arr.m_length; ++i)
			out << arr.m_data[i] << " ";
		out << endl;
		return out;
	}
};

int main()
{
	int my_arr1[5] = { 1,2,3,4,5 };
	int* my_arr2 = new int[5] { 1, 2, 3, 4, 5 };

	auto il = { 10,20,30 }; //사용자 정의 자료형

	IntArray int_array{ 1,2,3,4,5 };
	cout << int_array << endl;

	return 0;
}