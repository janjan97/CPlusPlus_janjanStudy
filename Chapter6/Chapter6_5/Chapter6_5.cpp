// C��� ��Ÿ���� �迭 ���ڿ�
#include <iostream>

using namespace std;

int main()
{
    /*
	char myString[] = "string";

	for (int i = 0; i < 7; ++i)
	{
		cout << myString[i] << endl;
	}
	*/

	
	char myString[255];
	/*
	cin >> myString;

	myString[4] = '\0';

	cout << myString << endl;
	*/
	cin.getline(myString, 255);

	cout << myString << endl;

    return 0;
}
