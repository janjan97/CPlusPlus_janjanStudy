// Chapter7_14.cpp : 단언하기 assert

#include <iostream>
#include <cassert> // assert.h
#include <array>

using namespace std;

void printValue(const std::array<int, 5>& my_array, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1);
	std::cout << my_array[ix] << std::endl;
}

int main()
{
	std::array<int, 5> my_array{ 1, 2, 3, 4, 5 };

	printValue(my_array, 100);

	const int x = 10;

	assert(x == 10);
	static_assert(x == 10, "x should be 5");

	return 0;
}