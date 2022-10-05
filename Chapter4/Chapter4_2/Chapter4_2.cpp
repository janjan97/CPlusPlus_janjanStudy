#include <iostream>
#include "Myconstants.h"

using namespace std;

//void doSomething()
//{
//    static int a = 1; //static 변수는 초기화가 반드시 필요하다.
//
//    ++a;
//
//    cout << a << endl;
//}


// 전방 선언
void doSomething(); // extern void doSomthing(); (extern 생략)


int main()
{
    /* 정적변수
    cout << value << endl;

    int value = 1;

    cout << ::value << endl; //정적변수 :: 연산자로 호출
    cout << value << endl;
    */

    
    cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;
    doSomething(); //test.cpp

    return 0;
}
