// 포인터와 const
#include <iostream>

using namespace std;

int main()
{
    
    /*int value1 = 5;
    const int* ptr = &value1;
    
    int value2 = 6;
    ptr = &value2;

    cout << *ptr << endl;*/

    int value1 = 5;
    int *const ptr = &value1;

    *ptr = 10;
    cout << *ptr << endl;

    int value2 = 8;
    ptr = &value2;

    return 0;
}
