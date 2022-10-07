// 매개변수와 인자의 구분 ( Parameter / Argument )

#include <iostream>

using namespace std;

int foo(int x, int y);

int foo(int x, int y)
{
    return x + y;
}// x,y 는 여기서만쓰임

int main()
{
    int x = 1, y = 2;

    foo(6, 7); //6,7 인자(arguments),실매개변수 실인자(actual parameters)
    foo(x, y + 1);

    return 0;
}
