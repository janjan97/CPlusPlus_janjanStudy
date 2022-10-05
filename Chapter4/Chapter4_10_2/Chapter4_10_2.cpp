#include<iostream>
#include<string>

using namespace std;

struct Employee     //(2) + 14 bytes -> padding
{
	short id;		//2bytes
	int age;		//4bytes
	double wage;	//8bytes
};


int main()
{

	Employee emp1;

	cout << sizeof(emp1) << endl;


	return 0;

}