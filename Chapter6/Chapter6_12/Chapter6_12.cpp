// ���� �Ҵ� �迭 Dynamically Allocating Arrays
#include <iostream>

using namespace std;

int main()
{
    
    /*const int length = 5;
    int array[length];
    */

    int length;

    cin >> length;

    int* array = new int[length]; //�ʱ�ȭ�� new int[length]()

    for (int i = 0; i < length; ++i)
    {
        cout << (uintptr_t) & array[i] << endl;
        cout << array[i] << endl;
    }

    delete[] array;

    return 0;
}

