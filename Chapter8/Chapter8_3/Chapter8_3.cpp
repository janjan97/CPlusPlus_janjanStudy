// Chapter8_3.cpp :  생성자 ( Constructors )
#include <iostream>
using namespace std;

/*
class Fraction
{
private: // 캡슐화
	int m_numerator; // 분자 
	int m_denominator; // 분모 

public:
	Fraction()
	{
		m_denominator = 1;
		m_numerator = 0;
	}

	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};
int main()
{
	Fraction frac; //frac()..? 생성자에 파라미터가 없을때는 괄호를 빼야함.

	frac.print();

	return 0;
}
*/

class Second
{
public:
	Second()
	{
		cout << "class second constructor()" << endl;
	}
};

class First
{
	Second sec; // First class 안에 Second class

public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{
	First fir;

	return 0;
}