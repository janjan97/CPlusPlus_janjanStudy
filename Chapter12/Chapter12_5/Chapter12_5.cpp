// Chapter12_5.cpp : 동적바인딩, 정적바인딩
#include <iostream>
using namespace std;
int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}


int main()
{
	int x, y;
	cin >> x >> y;

	int op;

	cout << "0: add, 1: subtract" << endl;
	cin >> op;

	//static binding (early binding)
	/*
	int result;
	switch (op)
	{
	case 0: result = add(x, y); break;
	case 1: result = subtract(x, y); break;
	}

	cout << result << endl;
	*/

	// Dynamic binding (late binding)
	int(*func_ptr)(int, int) = nullptr;
	switch (op)
	{
	case 0: func_ptr = add; break;
	case 1: func_ptr = subtract; break;
	}

}