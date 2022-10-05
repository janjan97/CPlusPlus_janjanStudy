// 메모리 동적 할당

#include <iostream>

using namespace std;

int main()
{
	new int;
	int* ptr = new int;
	*ptr = 7;

	delete ptr;
	ptr = nullptr;

	cout << "after delete" << endl;
	if (ptr != nullptr) //(ptr)도 가능하다.
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}

	/*
	//메모리누수!!
	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;

		delete ptr; //할당을 받고 지워주지않으면 메모리 누수가 발생한다.
	}*/

	return 0;
}
