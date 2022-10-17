﻿// Chapter9_9.cpp : 복사 생성자, 복사 초기화, 반환값 최적화 
#include <iostream>
#include <cassert>
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator; // 나누는 수 

public:
	Fraction(int num = 0, int den = 1)
		: m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction& fraction) //copy constructor
		:m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{ 
		cout << "Copy constructor called" << endl; //호출 횟수
	}

	friend std::ostream& operator << (std::ostream& out, const Fraction& f)
	{
		out << f.m_numerator << " / " << f.m_denominator << endl;
		return out;
	}
};

Fraction doSomething()
{
	Fraction temp(1, 2);
	cout << &temp << endl;
	
	return temp;
}

int main()
{
	//Fraction frac(3, 5);
	//Fraction fr_copy(frac); // fr_copy = frac;
	//cout << frac << " " << fr_copy << endl;
	//Fraction fr_copy(Fraction(3, 10));
	Fraction result = doSomething();
	cout << &result << endl;
	cout << result << endl;

	return 0;
}