// Chapter13_4.cpp : 함수 템플릿 특수화
#include <iostream>
#include "Storage.h"
using namespace std;

template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

template<>
char getMax(char x, char y)
{
	cout << "warning: comparing chars" << endl;
	return (x > y) ? x : y;
}

int main()
{
	Storage<int> nValue(5);
	Storage<double> dValue(6.7);

	nValue.print();
	dValue.print();

	return 0;
}