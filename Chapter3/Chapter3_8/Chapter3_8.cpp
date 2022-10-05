#include <iostream>
#include <bitset> //2진수로 바꿔주는 라이브러리

int main()
{
    using namespace std;

    //unsigned int a = 3;

    /*
    cout << std::bitset<4>(a) << endl;

    unsigned int b = a << 1;

    cout << std::bitset<4>(b) << " " << b << endl;
    */

    /*
    cout << std::bitset<8>(a << 1) << " " << (a << 1 ) << endl;
    cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
    cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
    cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;
    */

    unsigned int a = 1024;

    cout << std::bitset<16>(a) << endl;

    cout << std::bitset<16>(~a) << " " << (~a) << endl;

    return 0;
}
