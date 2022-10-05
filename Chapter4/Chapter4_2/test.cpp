#include <iostream>
#include "Myconstants.h"

using namespace std;

void doSomething()
{
	cout << "In test.cpp file " << Constants::pi << " " << &Constants::pi << endl;
}