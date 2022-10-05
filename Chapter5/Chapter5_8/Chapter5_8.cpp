// Chapter5_8.cpp 
#include <iostream>

using namespace std;

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
			break;
		if (ch == 'r')
			return;
	}
	cout << "Hello" << endl;

}

int main()
{
	breakOrReturn();
	cout << "hi";

	return 0;
}