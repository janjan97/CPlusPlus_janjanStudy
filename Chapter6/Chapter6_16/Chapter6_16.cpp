// �����Ϳ� ������ �������
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
	(*ptr).age = 20; //�� ���������� �켱���������� ()��ȣ�� ������Ѵ�. ��������

	Person& ref2 = *ptr;
	ref2.age = 45;

	cout << &person << endl;
	cout << &ref2 << endl;

    return 0;
}

