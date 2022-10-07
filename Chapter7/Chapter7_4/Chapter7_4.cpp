// 주소에 의한 인수전달 ( Call by Address )
#include <iostream>

using namespace std;

void foo(int *ptr)
{
    cout << *ptr << " " << ptr << " " << &ptr << endl;
}

int main()
{
    int value = 5;
    int* ptr = &value;

    cout << value << " " << &value << endl;
    cout << &ptr << endl;

    foo(ptr);
    foo(&value);
    //foo(5);

    return 0;
}

