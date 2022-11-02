// Chapter12_10.cpp : 동적 형변환 (Dynamic Casting)
#include <iostream>
#include <string>
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

class Derived1 : public Base
{
public:
	int m_j = 1024;

	virtual void print() override
	{
		cout << "I'm derived1" << endl;
	}
};

class Derived2 : public Base
{
public:
	string m_name = "Dr. Two";

	virtual void print() override
	{
		cout << "I'm derived2" << endl;
	}
};

int main()
{
	Derived1 d1;
	Base* base = &d1;

	auto* base_to_d1 = dynamic_cast<Derived2*>(base);
	//cout << base_to_d1->m_name << endl;
	//base_to_d1->m_name = 256;

	if (base_to_d1 != nullptr)
		cout << base_to_d1->m_name << endl;
	else
		cout << "Failed" << endl;

	return 0;
}