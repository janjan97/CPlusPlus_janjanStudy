//���ڿ�

#include <iostream>
#include <string>

using namespace std;
int main()
{
	/*
	const char my_strs[] = "Hello, World";
	const string my_hello = "Hello, World";

	string my_ID = "123"; // "123" ��� 123�̶�� �ᵵ �Ͻ��� ����ȯ�� ��������.
	cout << my_hello << endl;
	*/

	cout << "Your name ? : ";
	string name;

	//cin >> name;
	std::getline(std::cin, name);

	cout << "Youre age ? : ";
	string age;
	//cin >> age;

	std::getline(std::cin, age); 

	cout << name << " " << age << endl;

    return 0;
}
