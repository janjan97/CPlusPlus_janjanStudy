// Chapter10_2.cpp : 구성관계 (Composition)
#include <iostream>
#include "Monster.h"
using namespace std;

int main()
{
	Monster mon1("janjan", Position2D(0,0));
	cout << mon1 << endl;

	//while (1) //game loop
	{

		//event
		mon1.moveTo(Position2D(1,1));
		cout << mon1 << endl;
	}

	return 0;
}