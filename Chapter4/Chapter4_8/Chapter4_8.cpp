// 영역제한 열거형 (열거형 클래스)

#include <iostream>

using namespace std;

int main()
{
	enum Color
	{
		RED,
		BLUE
	};

	enum Fruit
	{
		BANANA,
		APPLE,
	};

	Color color = RED;
	Fruit fruit = BANANA;

	if (color == fruit)
		cout << "Color is fruit ? " << endl;
	// 0 == 0??

	return 0;
}
