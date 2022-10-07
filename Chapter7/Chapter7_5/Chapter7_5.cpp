// 다양한 반환 값들
#include <iostream>
#include <array>
#include <tuple>

using namespace std;

//int& getValue(int x)
//{
//	int value = x * 2;
//	return value;
//}

//int* allocateMemory(int size)
//{
//	return new int[size];
//}

/*
//return by reference
int& get(std::array<int, 100>& my_array, int ix)
{
	return my_array[ix];
}

int main()
{
	std::array<int, 100> my_array;
	my_array[30] = 10;

	get(my_array, 30) = 1024;

	cout << my_array[30] << endl;


	return 0;
}
*/

//struct S
//{
//	int a, b, c, d;
//};
//
//S getStruct()
//{
//	S my_s{ 1,2,3,4 };
//}
//
//int main()
//{
//	S my_s = getStruct();
//	my_s.a;
//
//	return 0;
//}

//튜플

std::tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;
	return std::make_tuple(a, d);
}

int main()
{
	/*std::tuple<int, double> my_tp = getTuple();
	cout << std::get<0>(my_tp) << endl;
	cout << std::get<1>(my_tp) << endl;*/

	auto [a, d] = getTuple();
	cout << a << endl;
	cout << d << endl;

	return 0;
}