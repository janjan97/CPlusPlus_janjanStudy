// Chapter9_10.cpp : 변환 생성자 (Converting constructor, explicit, delete)
#include <iostream>
#include <cassert>
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator; //분모 

public:
	//Fraction(char) = delete; //생성자 delete

	explicit Fraction(int num = 0, int den = 1) // 파라미터가 하나만 들어와도 생성됨
		: m_numerator(num), m_denominator(den)
	{
		assert(den != 0);  // 0은 안됨
	}

	Fraction(const Fraction& fraction) //copy constructor
		:m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor called" << endl; //호출횟수
	}

	friend std::ostream& operator << (std::ostream& out, const Fraction& f)
	{
		out << f.m_numerator << " / " << f.m_denominator << endl;
		return out;
	}
};

void doSomething(Fraction frac)
{
	cout << frac << endl;

}

int main()
{
	//Fraction frac2('c'); //delete
	Fraction frac(7);
	doSomething(frac);//(frac),(Fraction(7))
	
	
	return 0;
}