// Chapter17_4.cpp : 문자 접근하기와 배열로의 변환
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string my_str("abcdefg");

	cout << my_str[0] << endl;  // a
	cout << my_str[3] << endl;  // d

	my_str[3] = 'Z';

	cout << my_str << endl;  // abcZefg

	// c_str()
	{
		string my_str("abcdefg");

		cout << my_str.c_str() << endl;

		const char* arr = my_str.c_str();

		cout << arr[6] << endl;  // g
		cout << arr[7] << endl;  // '\0'
	}

	//  copy()
	{
		string my_str("abcdefg");

		char buf[20];

		my_str.copy(buf, 5, 1);

		buf[5] = '\0';

		cout << buf << endl;
	}

	return 0;
}
