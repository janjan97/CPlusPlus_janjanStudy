// Chapter9_2.cpp : 입출력 연산자 오버로딩 하기

#include <iostream>
#include <fstream>
using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{}

	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }

	/*void print()
	{
		cout << m_x << " " << m_y << " " << m_z;
	}*/

	friend std::ostream& operator << (std::ostream& out, const Point& point)
	{
		out << "( " << point.m_x << " " << point.m_y << " " << point.m_z << " )";
		return out; // main에서 p1,p2를 출력할때 chaning 하기위함 (p1, p2)
	}
	friend std::istream& operator >> (std::istream& in, Point& point)//입력 const 제거
	{
		in >> point.m_x >> point.m_y >> point.m_z ;
		return in; 
	}

};

int main()
{
	ofstream of("out.txt");
	//Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);
	Point p1, p2;

	cin >> p1 >> p2;
	/*p1.print();
	cout << " ";
	p2.print();
	cout << endl;*/

	cout << p1 << " " << p2 << endl; //콘솔 출력으로도 체크
	of << p1 << " " << p2 << endl;

	of.close();

	return 0;
}
