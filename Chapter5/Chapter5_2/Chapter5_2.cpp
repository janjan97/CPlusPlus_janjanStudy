// if

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    
    if (1)
    {
        int x = 5;
    } // 변수 x 소멸
    else
    {
        int x = 6;
    } // 변수 x 소멸

    cout << x << endl; // x는 정의되지 않음.
    
    
    /* 대입 실수를 하지말자.
    if (x = 0) // x에 0이 대입 → false 
        cout << x << endl;

    cout << x << endl; //이부분이 실행되어 0이 출력된다.
    */

    return 0;
}