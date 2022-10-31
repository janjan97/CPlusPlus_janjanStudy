// Chapter12_6.cpp : 가상 함수 표 (Virtual Tables)
#include <iostream>
using namespace std;

class Base
{
public:
	void fun1() {};
	void fun2() {};
};

class Derived : public Base
{
public:
	void fun1() {};
	void fun3() {};
};

int main()
{
	cout << sizeof(Base) << endl;
	cout << sizeof(Derived) << endl;

	return 0;
}

