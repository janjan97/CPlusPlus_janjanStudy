// 널 포인터 ( Null Pointer )
#include <iostream>
#include <cstddef>

using namespace std;

void doSomething(double* ptr)
{
    cout << "address of pointer varaible in doSomething()" << &ptr << endl;
    if (ptr != nullptr)
    {
        cout << *ptr << endl;
    }
    else
    {
        cout << "Null ptr,do nothing" << endl;
    }
}

int main()
{
    double* ptr = nullptr; // modern c++

    doSomething(ptr);
    doSomething(nullptr);

    double d = 123.4;

    doSomething(&d);

    ptr = &d;

    doSomething(ptr);

    //nullptr_t nptr;

    cout << "address of pointer varaible in main()" << &ptr << endl;

    return 0;
}
