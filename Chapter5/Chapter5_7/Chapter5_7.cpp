// ¹Ýº¹¹® for
#include <iostream>

using namespace std;

int dd(int base, int exponent)
{
    int result = 1;

    for (int count = 0; count < exponent; ++count)
        result *= base;

    return result;
}

int main()
{
    /*
    int count = 0;
    for (; count < 10; count++)
    {
        cout << count << endl;
    }
    cout << count << "dd" << endl;
    */

    cout << dd(3, 3) << endl;
   

    return 0;
}
