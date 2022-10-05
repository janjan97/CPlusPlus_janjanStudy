//변수의 시작

#include <iostream>

int main()
{
	int x = 1;
	x = x + 2;
	std::cout << x << std::endl; // #1 3

	int y = x;
	std::cout << y << std::endl; // #2 3
	
	std::cout << x + y << std::endl;

	std::cout << x << std::endl;

	return 0;
}

