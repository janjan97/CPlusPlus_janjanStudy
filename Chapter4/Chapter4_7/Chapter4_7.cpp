// 열거형

#include <iostream>
#include <typeinfo>

using namespace std;

/*
int computeDamage(int weapon_id)
{
	if (weapon_id == 0) // 칼
	{
		return 1;
	}
	if (weapon_id == 1) // 망치
	{
		return 2;
	}
}
*/

enum Color // enumerated (열거)
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	BLUE
};

enum Feeling
{
	HAPPY,
	BLUE,
};

int main()
{

	Color paint = COLOR_BLACK;  // paint라는 변수로 색을 지정
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };
	
	return 0;
}