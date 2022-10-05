// 포인터와 참조의 멤버선택
#include <iostream>

using namespace std;

struct Person
{
	int age;
	double weight;
};

int main()
{
	Person person;

	person.age = 5;

	Person& ref = person;
	ref.age = 15;

	Person* ptr = &person;
	ptr->age = 30;
	(*ptr).age = 20; //잘 쓰진않지만 우선순위때문에 ()괄호를 해줘야한다. 위랑같음

	Person& ref2 = *ptr;
	ref2.age = 45;

	cout << &person << endl;
	cout << &ref2 << endl;

    return 0;
}

