// Chapter7_10.cpp : 스택과 힙 (Stack and Heap)

#include <iostream>

using namespace std;

int g_i = 0;

int second(int x)
{
	return 2 * x;
}

int first(int x)
{
	int y = 3;
	return second(x + y);
}

int main()
{
	

	int a = 1, b;
	b = first(a);
		cout << b << endl;

		// Heap
		//int* ptr = nullptr;
		//ptr = new int[1000000];
		//delete[] ptr;

	return 0;
}
