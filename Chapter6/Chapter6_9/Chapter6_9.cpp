// ������ ����� �迭 �ε���
#include <iostream>

using namespace std;

int main()
{
	/*
	
    int array[] = { 9, 7, 5, 3, 1 };

	int* ptr = array;
	for (int i = 0; i < 5; ++i)
	{
		//cout << array[i] << " " << (uintptr_t)&array[i] < endl;
		cout << *(ptr + i) << " " << (uintptr_t)(ptr + i) << endl;
	}
	*/

	char name[] = "jin jin";
	const int n_name = sizeof(name) / sizeof(char); //���ڼ� ���

	char* ptr = name;

	for (int i = 0; i < n_name; i++)
	{
		cout << *(ptr + i);
	}

	/*
	int i = 0;
	while (i < n_name)
	{
		cout << *(name + i);
		i++;

		if (*(name + i) == NULL) 
			break;
	}*/

    return 0;
}
