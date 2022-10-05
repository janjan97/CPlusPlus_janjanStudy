// std::array 소개

#include <iostream>
#include <array> //라이브러리선언
#include <algorithm> // sort

using namespace std;

int main()
{
	//int array[5] = { 1,2,3,4,5 };

	array<int, 5> my_arr = { 1,2,3,4,5 };
	my_arr = { 0,1,2,3,4 };
	my_arr = { 0,1,2, };

	cout << my_arr[0] << endl;
	cout << my_arr.at(0) << endl; //at은 미리체크하고 문제가 생기면 예외처리를해줌.

	cout << my_arr.size() << endl;
	


	return 0;
}
