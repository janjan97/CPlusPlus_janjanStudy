// Chapter13_8.cpp :멤버 함수를 한번 더 템플릿화 하기
#include <iostream>
using namespace std;

template<class T>
class A
{
private:
	T m_value;

public:
	A(const T& input)
		: m_value(input)
	{

	}

	template<typename TT> // doSomthing()내부에서만되는 템플릿 매개변수
	void doSomething()
	{
		cout << typeid(T).name() << " " << typeid(TT).name() << endl;
	}
	void print()
	{
		cout << m_value << endl;
	}
};

int main()
{
	A<int> a_int(123);
	a_int.print();
	a_int.doSomething<float>(); //TT가 어떤 타입인지 다시 명확히 해준다.

	return 0;
}