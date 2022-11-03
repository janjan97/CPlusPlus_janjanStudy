// Chapter13_2.cpp : 클래스 템플릿
#include <iostream>
#include "MyArray.h"

int main()
{
	//MyArray my_array(10);
	MyArray<char> my_array(10);

	for (int i = 0; i < my_array.getLength(); ++i)
		my_array[i] = i + 65;

	my_array.print();

	return 0;
}

