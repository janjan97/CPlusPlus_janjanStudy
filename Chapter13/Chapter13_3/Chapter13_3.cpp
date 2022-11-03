// Chapter13_3.cpp : 자료형이 아닌 템플릿 매개변수
#include <iostream>
#include "MyArray.h"

int main()
{
	MyArray<double, 100> my_array;

	for (int i = 0; i < my_array.getLength(); ++i)
		my_array[i] = i + 65;

	my_array.print();

	return 0;
}