#include <iostream>
#include <cmath>
#include <limits>

int main()
{
    using namespace std;

    short   s = 1; // 2 bytes = 2 * 8 bits = 16 bits
   
    //+,- 를표현하는 signed에 대해 1bit를 빼준것이고 0을 표현을 빼기위해 1을 또 뺀다. 
    
    // 수의 범위
    cout << std::pow(2, sizeof(short) *8 - 1) - 1 << endl;
    cout << std::numeric_limits<short>::max() << endl;
    cout << std::numeric_limits<short>::min() << endl;
    cout << std::numeric_limits<short>::lowest() << endl;

    s = 32767;
    s = s + 1; // 32768

    cout << s << endl; //overflow
    

    return 0;
}
