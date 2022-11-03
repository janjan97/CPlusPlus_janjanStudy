// Chapter13_1.cpp : 함수 템플릿 (Templates)
#include <iostream>
using namespace std;

template<typename T>
T getMax(T x, T y)
{
    return (x > y) ? x : y;
}


int main()
{
    cout << getMax(1, 2) << endl;
    cout << getMax(3.14, 1.592) << endl;
    cout << getMax(1.0f, 3.4f) << endl;
    cout << getMax('a', 'c') << endl;

    return 0;
}
