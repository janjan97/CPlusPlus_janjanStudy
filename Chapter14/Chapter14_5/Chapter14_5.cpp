// Chapter14_5.cpp : 함수 try
#include <iostream>
#include <exception>

class A
{
private:
	int m_x;
public:
	A(int x) : m_x(x) // A의 생성자에서 예외 던지기
	{
		if (x <= 0)
			throw 1; 
	}
};

class B : public A
{
public:
	/*
	B(int x)
		: A(x) //initialize
	{
	}
	*/
	B(int x) try: A(x)
	{
		// do initialization
	}
	catch (...)
	{
		std::cout << "Catch in B constructor" << std::endl;
		//throw; 가있는 것처럼 작동함
	}
};

int main()
{
	try
	{
		B b(0);
	}
	catch (...)
	{
		std::cout << "Catch in main()" << std::endl;
	}

	return 0;
}