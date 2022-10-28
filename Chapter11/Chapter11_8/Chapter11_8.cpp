// Chapter11_8.cpp : 상속받은 함수를 감추기 
#include <iostream>
using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		: m_i(value)
	{}

	void print()
	{
		cout << "I'm base " << endl;
	}
};

class Derived : public Base
{
private:
	double m_d;

public:
	Derived(int value)
		: Base(value)
	{}

	using Base::m_i; //public이된다

private:
	using Base::print; // do not add()
	void print() = delete;
};

int main()
{
	Base base(5);
	base.print();

	Derived derived(7);

	derived.m_i;
	//derived.print();

	return 0;
}

