// ������

#include <iostream>
#include <typeinfo>

using namespace std;

/*
int computeDamage(int weapon_id)
{
	if (weapon_id == 0) // Į
	{
		return 1;
	}
	if (weapon_id == 1) // ��ġ
	{
		return 2;
	}
}
*/

enum Color // enumerated (����)
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

	Color paint = COLOR_BLACK;  // paint��� ������ ���� ����
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };
	
	return 0;
}