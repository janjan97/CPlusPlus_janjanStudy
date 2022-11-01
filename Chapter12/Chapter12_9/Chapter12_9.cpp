// Chapter12_9.cpp : 객체 잘림과 reference wrapper
#include <iostream>
#include <vector>
#include <functional> // reference_wrapper

using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived : public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void doSomething(Base& b) // &를 빼면 다형성이 사라진다
{
	b.print();
}

int main()
{
	/*
	Derived d;
	//Base& b = d; // &를 빼면 복사가되어 대입된다.(다형성이 사라짐)
	//b.print();

	doSomething(d);
	*/
	Base b;
	Derived d;

	std::vector<std::reference_wrapper<Base>> my_vec; // vector는 &를 받지 못 한다.
	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto& ele : my_vec)
		ele.get().print(); //레퍼런스로 부터 인스턴스를 받아와야함.

	return 0;
}