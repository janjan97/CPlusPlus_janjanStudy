// Chapter7_12.cpp : 재귀적 함수 호출 ( Recursive Function Call )
#include <iostream>
using namespace std;

/*
void countDown(int count)
{
    cout << count << endl;
    if(count >0)
    countDown(count - 1);
}*/

/*
//재귀함수호출 1~원하는수까지 합
int sumTo(int sumto)
{
    if (sumto <= 0)
        return 0;
    else if (sumto <= 1)
        return 1;
    else
        return sumTo(sumto - 1) + sumto;
}
int main()
{
    cout << sumTo(5) << endl;

    return 0;
}*/

int Fibonacci(int fibo)
{
    if (fibo == 1)
        return 0;
    else if (fibo == 2)
        return 1;
    else
        return Fibonacci(fibo - 1)+Fibonacci(fibo-2);
}
int main()
{
    cout << Fibonacci(5) << endl;

    return 0;
}