// Chapter8_4.cpp : 생성자 멤버 초기화 리스트 (Member Initializer List)
#include <iostream>
using namespace std;

class B
{
private:
	int m_b;

public:
	B(const int& m_b_in)
		: m_b(m_b_in)
	{}
};

class Something
{
private: // 캡슐화
	int		m_i;
	double	m_d;
	char	m_c;
	int		m_arr[5];
	B		m_b;

public:
	Something()
		: m_i(1), m_d(3.14), m_c('a'), 
		m_arr{ 1,2,3,4,5 }, m_b(m_i -1) // { }가능 but 형변환을 안해줌 
	{
		/*m_i = 1;
		m_d = 3.14;
		m_c = 'a';*/
	}

	void print()
	{
		cout << m_i << " " << m_d << " " << m_c << endl;
		for (auto& e : m_arr)
			cout << e << " "; 
		cout << endl;
	}
};
int main()
{
	Something som;
	som.print();


	return 0;
}