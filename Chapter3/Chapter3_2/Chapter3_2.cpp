#include <iostream>

int main()
{
    using namespace std;

    int x = 7;
    int y = 4;

    int z = x;
    z += y; // z = z + y
    z %= y; // z = z % y

    /*
    cout << x / y << endl;
    cout << float(x) / y << endl;
    cout << x / float(y) << endl;
    cout << float(x) / float(y) << endl;

    cout << -5 / 2 << endl;
    cout << -5 % 2 << endl;
    */

    return 0;
}
