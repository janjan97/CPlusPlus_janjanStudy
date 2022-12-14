// Chapter9_7.cpp : 괄호 연산자 오버로딩, 함수 객체 ( parenthesis, Functor )
#include <iostream>
using namespace std;

class Accumulator
{
private:
	int m_counter = 0;

public:
	int operator()(int i) { return (m_counter += i); } //m_counter+i를 return
};

int main()
{
	Accumulator acc;
	cout << acc(10) << endl; //함수 객체
	cout << acc(20) << endl;

	return 0;
}