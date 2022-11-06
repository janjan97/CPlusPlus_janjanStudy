// Chapter14_2.cpp : 예외처리와 스택 되감기 (Stack Unwiding)
#include <iostream>
using namespace std;

// void last() throw(...) exception specifier
void last()
{
	cout << "Last" << endl;  
	cout << "Throws exception" << endl;  

	throw - 1; // first의 catch로감

	cout << "End Last" << endl;
}

void third()
{
	cout << "Third" << endl;

	last();

	cout << "End third" << endl; //실행 X
}

void second()
{
	cout << "Second" << endl;

	try
	{
		third();
	}
	catch (double)
	{
		cerr << "Second caught double exception!" << endl; 
	}
	cout << "End second" << endl;  // double이라 타입이달라서 catch를 못 함
}

void first()
{
	cout << "First" << endl;  

	try
	{
		second();
	}
	catch (int)
	{
		cerr << "first caught int exception!" << endl;  // catch
	}
	cout << "End first" << endl; // 실행
}

int main()
{
	cout << "Start" << endl; 

	try
	{
		first();
	}
	catch (int)
	{
		cerr << "main caught int exception!" << endl;
	}

	//catch (...) 어떤 타입이든 받아준다
	catch (...)
	{
		cerr << "main caught ellipses exception" << endl;
	}
	cout << "End of main" << endl;  //
}