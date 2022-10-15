// Chapter9_5.cpp : 증감 연산자 오버로딩 (++, --)
#include <iostream>
using namespace std;

class Digit
{
private:
	int m_digit;
public:
	Digit(int digit = 0) : m_digit(digit) {}

	friend ostream& operator << (ostream& out, const Digit& d)
	{
		out << d.m_digit;
		return out;
	}

	//prefix 전위형
	Digit& operator ++ ()
	{
		++m_digit;
		return *this; //자기 자신의 메모리 주소를 반환
	}

	//postfix 후위형 return을 하고 값을 바꿔야함
	Digit operator ++ (int) //(int)로 후위형 구분
	{
		Digit temp(m_digit); //현재값을 저장 
		++(*this); //++m_digit과 같음
		return temp; // 값 증가 이전의 것을 반환
	}
};

int main()
{
	Digit d(5);

	cout << ++d << endl;
	cout << d << endl;

	cout << d++ << endl;
	cout << d << endl;

	return 0;
}