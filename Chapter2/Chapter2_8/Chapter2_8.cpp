#include <iostream>

int main()
{
    using namespace std;

    // Decimal : 0 1 2 3 4 5 6 7 8 9 10
    // Octal   : 0 1 2 3 4 5 6 7 | 10 11 12
    // Hexa    : 0 1 2 3 4 5 6 7 8 9 A B C D E F

    int x = 012; // 8진수 ( 숫자앞에 0이 붙는다. )
    int y = 0xF; // 16진수 ( 숫자 앞에 0x이 붙는다. )

    cout << x << endl;
    cout << y << endl;

    return 0;
}