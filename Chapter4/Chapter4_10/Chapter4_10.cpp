// ±¸Á¶Ã¼ struct

#include <iostream>
#include <string>

using namespace std;

struct Person
{
	double height;
	float weight;
	int age;
	string name;
	void print()
	{
		cout << height << " " << weight << " " << age << " " << name << endl;
	}
};
struct Family
{
	Person me, mom, dad;
};

void printPerson(Person ps)
{
	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
	cout << endl;
}

Person getMe()
{
	Person me{ 170, 60, 26, "Won Jin" };

	return me;
}

int main()
{
	//Person me{170, 60, 26, "Won Jin"};
	//printPerson(me);

	Person me_from_func = getMe();
	me_from_func.print();
	

	/*
	me.age = 26;
	me.name = "Won Jin";
	me.height = 170;
	*/

    return 0;
}
