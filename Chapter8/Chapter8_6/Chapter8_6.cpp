// Chapter8_6.cpp : 소멸자 (Destructor)
#include <iostream>
#include <vector>
using namespace std;

/*
// #1
class Simple 
{
private:
	int m_id;

public:
	Simple(const int& id_in)
		: m_id(id_in)
	{
		cout << "constructor" << m_id << endl;
	}

	~Simple() //파라미터 x
	{
		cout << "Destructor" << m_id << endl;
	}
};

int main()
{
	//Simple s1(0);
	Simple *s1 = new Simple(0);
	Simple s2(1);

	delete s1;

	return 0;
}*/

class IntArray
{
private:
	int* m_arr = nullptr;
	int m_length = 0;

public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];

		cout << "Constructor " << "\n";
	}

	~IntArray()
	{
		if(m_arr != nullptr)
			delete[] m_arr;
	}

	int getLength() { return m_length; }

};

int main()
{	
	while (true)
	{
		IntArray my_int_arr(10000);
	}

	return 0;
}