//문자열

#include <iostream>
#include <string>

using namespace std;
int main()
{
	/*
	const char my_strs[] = "Hello, World";
	const string my_hello = "Hello, World";

	string my_ID = "123"; // "123" 대신 123이라고 써도 암시적 형변환을 하지않음.
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
