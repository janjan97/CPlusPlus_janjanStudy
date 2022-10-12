// Chapter8_7.cpp : this 포인터와 연쇄호출 (this, Chaining Member Functions)
#include <iostream>

using namespace std;

/*
// #1 자기 자신의 주소 this 포인터
class Simple
{
private:
	int m_id;

public: 
	Simple(int id)
	{
		setID(id); //this->setID(id);
		cout << this << endl; //자신의 주소 (this)
	}
	void setID(int id) { m_id = id; }
	int getID() { return m_id; }
}; 

int main()
{
	Simple s1(1), s2(2);
	s1.setID(2);
	s2.setID(4);

	cout << &s1 << " " << &s2 << endl;

	return 0;
}
*/

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value) 
		: m_value(init_value)
	{}

	Calc& add(int value)
	{
		m_value += value;
		return *this;
	}
	Calc& sub(int value)
	{
		m_value -= value;
		return *this;
	}
	Calc& mult(int value)
	{
		m_value *= value;
		return *this;
	}
	Calc& print()
	{
		cout << m_value << endl;
	}
};

int main()
{
	Calc cal(10);

	/*
	Calc& temp1 = cal.add(10);
	Calc& temp2 = temp1.sub(1);
	Calc& temp3 = temp2.mult(2);
	temp3.print();
	*/
	//아래 방식은 위 방식처럼 작동함. (연쇄 호출)
	cal.add(10).sub(1).mult(2).print();

	/*
	cal.add(10);
	cal.sub(3);
	cal.mult(4);
	cal.print();
	*/

	return 0;
}