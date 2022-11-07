// Chapter14_6.cpp : 예외처리의 위험성과 단점
#include <iostream>
#include <memory> // unique_ptr
using namespace std;

/*
int main()
{
	try
	{
		int* i = new int[1000000];  // 메모리 할당
		//unique_ptr<int> up_i(i); // 스마트 포인터
		throw "error";

		delete[] i;
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}
	return 0;
}*/

class A
{
public:
	~A()
	{
		throw "error";  
	}
};

int main()
{
	try
	{
		A a; 
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}
	return 0;
}