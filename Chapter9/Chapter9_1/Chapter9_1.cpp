// Chapter9_1.cpp : 산술 연산자 오버로딩 하기 
#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; } //생성자
	int getcents() const { return m_cents; }
	int& getcents() { return m_cents; }

	// =, [], (), -> 멤버함수로만 오버로딩가능
	Cents operator + (const Cents& c2)
	{
		return Cents(this->m_cents + c2.m_cents);
	}
};

//Cents operator + ( const Cents& c1, const Cents& c2)
//{
//	return Cents(c1.getcents() + c2.getcents());
//}

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	/*Cents sum;
	add(cents1, cents2, sum);*/
	//cout << add(cents1, cents2).getcents()  << endl;

	cout << (cents1 + cents2 + Cents(6)+ Cents(10)).getcents() << endl;

	return 0;
}
