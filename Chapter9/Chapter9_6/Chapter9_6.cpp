// Chapter9_6.cpp : 첨자 연산자 오버로딩 하기 ( [] subscript operator)
#include <iostream>
#include <cassert>
using namespace std;

class IntList
{
private:
	int m_list[10];

public:
	int& operator [] (const int index) //용도에 따라 파라미터의 타입을 바꿔준다.
	{
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}
	const int& operator [] (const int index) const
	{
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}
};

int main()
{
	IntList* list = new IntList;

	// list[3] = 10; 
	(*list)[3] = 10;

	const IntList my_list;
	//my_list[3] = 10;
	cout << my_list[3] << endl;

	//my_list.setItem(3, 1);
	//cout << my_list.getItem(3) << endl;
	//my_list.getList()[3] = 1; //포인터로 array를 꺼낸뒤에 값을 바꿔준다. 
	//cout << my_list.getList()[3] << endl;
	return 0;
}
