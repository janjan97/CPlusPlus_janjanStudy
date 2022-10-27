// Chapter11_3.cpp : 유도된 클래스들의 생성 순서
#include <iostream>
using namespace std;

class Mother
{
public:
	int m_i;

	Mother(const int & i_in = 0)
		: m_i(i_in)
	{
		cout << "Mother construction " << endl;
	}
};

class Child : public Mother
{
public:
	double m_d;

public:
	Child()
		: Mother(1204), m_d(1.0)
	{
		//m_i = 1024;
		cout << "Child construction " << endl;
	}
};

int main()
{
	Child c1;

	return 0;
}