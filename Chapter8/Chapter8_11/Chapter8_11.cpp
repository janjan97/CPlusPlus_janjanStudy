// Chapter8_11.cpp : 정적 멤버 함수 (static member function)
#include <iostream>

using namespace std;

class Something
{
public:

	class _init
	{
	public:
		_init()
		{
			s_value = 9876;
		}
	};

private:
	static int s_value;
	int m_value = 1;

	static _init s_initializer;

public:

	Something() //C++은 static 생성자는 지원되지않는다고한다.
		: m_value(123)
	{}

	static int getValue()
	{
		return s_value;
	}
	 
	int temp()
	{
		return this->s_value + this->m_value;
	}

};

int Something::s_value;
Something::_init Something::s_initializer;

int main()
{
	cout << Something::getValue() << endl;

	Something s1, s2;
	cout << s1.getValue() << endl;

	/*int (Something:: * fptr1)() = &Something::temp;

	cout << (s2.*fptr1)() << endl;

	int (* fptr2)() = &Something::getValue;

	cout << fptr2() << endl;*/


	return 0;
}


