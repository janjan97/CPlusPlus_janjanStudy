// Chapter12_11.cpp : 유도 클래스에서 출력 연산자 사용하기
#include <iostream>
using namespace std;

class Base
{
private:
	int m_base;
public:
	Base(){}

	//friend는 멤버가, 아님 직접 오버라이딩 할 수 없다
	friend ostream& operator << (ostream& out, const Base& b)
	{
		return b.print(out);
	}

	virtual ostream& print(ostream& out) const
	{
		out << "Base";
		return out;
	}
};

class Derived : public Base
{
public:
	Derived() {}

	virtual ostream& print(ostream& out) const override
	{
		out << "Derived";
		return out;
	}
};
int main()
{
	Base b;
	std::cout << b << '\n';

	Derived d;
	std::cout << d << '\n';

	Base& bref = d;
	std::cout << bref << '\n';
}

