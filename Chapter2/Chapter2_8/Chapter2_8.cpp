#include <iostream>

int main()
{
    using namespace std;

    // Decimal : 0 1 2 3 4 5 6 7 8 9 10
    // Octal   : 0 1 2 3 4 5 6 7 | 10 11 12
    // Hexa    : 0 1 2 3 4 5 6 7 8 9 A B C D E F

    int x = 012; // 8���� ( ���ھտ� 0�� �ٴ´�. )
    int y = 0xF; // 16���� ( ���� �տ� 0x�� �ٴ´�. )

    cout << x << endl;
    cout << y << endl;

    return 0;
}