#include <iostream>

int main()
{
    using namespace std;

    //초기화 방법 세가지
    //int jin = 5017; // copy initialization
    //int jin(5017);  // direct initialization
    //int jin{ 5017 }; // uniform initialization


    bool bValue = true;
    char chValue = 65;
    float fValue = 3.141592f; //마지막에 f를 표기하지않으면 double로 봄.
    double dValue = 3.141592;

    auto aValue = 3.141592;
    auto aValue2 = 3.141592f;

    cout << aValue << endl;
    cout << aValue2 << endl;

    cout << (bValue ? 1 : 0) << endl;
    cout << chValue << endl;
    cout << fValue << endl;
    cout << dValue << endl;

    return 0;
}