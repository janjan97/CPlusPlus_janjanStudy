#include <iostream>

int main()
{
    using namespace std;

    int num = 0;

    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << "은 짝수 입니다" << endl;
    }
    else
        cout << num << "은 홀수 입니다" << endl;
    
    return 0;
}
