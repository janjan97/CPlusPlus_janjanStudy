// 이중 포인터와 동적 다차원 배열

#include <iostream>

using namespace std;

int main()
{
    /*
    //이중포인터
    int* ptr = nullptr;
    int** ptrptr = nullptr;

    int value = 5;

    ptr = &value;
    ptrptr = &ptr;

    cout << ptr << " " << *ptr << " " <<  &ptr << endl;
    cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
    cout << **ptrptr << endl; // *(*ptrptr)
    */

	const int row = 3;
	const int col = 5;

	const int s2da[row][col] =
	{
	{1, 2, 3, 4, 5},
	{6, 7, 8, 9, 10},
	{11, 12, 13, 14, 15}
	};

	int** matrix = new int* [row];

	for (int r = 0; r < row; ++r)
		matrix[r] = new int[col];

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			matrix[r][c] = s2da[r][c];
	}

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			cout << matrix[r][c] << " ";
		cout << endl;
	}

	// 각 행은 선언된 matrix가 존재해야 delete되므로 먼저 없앤다.
	for (int r = 0; r < row; ++r)
		delete[] matrix[r];

	delete[] matrix;

    return 0;
}
