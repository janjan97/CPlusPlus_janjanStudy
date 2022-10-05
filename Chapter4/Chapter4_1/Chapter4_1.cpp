#include <iostream>

using namespace std;

namespace work1
{
    int a = 1;
    void doSomething()
    {
        a += 3;
    }
}

namespace work2
{
    int a = 1;
    void doSomething()
    {
        a += 5;
    }
}

int main()
{
    /*
    int apple = 5;

    cout << apple << endl;

    {
        int apple = 1;
        cout << apple << endl;
    }

    cout << apple << endl;
    */

    work1::a; // :: 영역, 범위 결정 연산자
    work1::doSomething();
   

    work2::a;
    work2::doSomething();

    return 0;
}
