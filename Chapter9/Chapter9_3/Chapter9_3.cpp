// Chapter9_3.cpp : 단항 연산자 오버로딩 하기

#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCetns() { return m_cents; }

	Cents operator - () const // friend 함수가 아니므로 getCents 필요 
	{
		return Cents(-m_cents);
	}

	bool operator ! () const
	{
		return (m_cents == 0) ? true : false;
	}

	friend std::ostream& operator << (std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	Cents cents1(6);
	Cents cents2(0);

	auto temp = cents1;
	auto temp = !cents1;

	cout << !cents1 << " " << cents2 << endl; 
	cout << cents1 << endl;
	cout << -cents1 << endl;
	cout << -Cents(-10) << endl;

	return 0;
}