#include <iostream>
#include "MY_CONSTANTS.h"

using namespace std;

/*
void printNumber(const int my_number)
{
	cout << my_number << endl;
}
*/

int main()
{
	//printNumber(123);
	//const double gravity{ 9.8 };

	/*const int my_const(123);

	int number;
	cin >> number;

	const int special_number(number);*/
	
	double radius;
	cin >> radius;

	double circumference = 2.0 * radius * constants::pi;

	return 0;
}
