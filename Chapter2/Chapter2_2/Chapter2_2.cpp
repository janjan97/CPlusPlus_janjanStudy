#include <iostream>
#include <cmath>
#include <limits>

int main()
{
    using namespace std;

    short   s = 1; // 2 bytes = 2 * 8 bits = 16 bits
   
    //+,- ��ǥ���ϴ� signed�� ���� 1bit�� ���ذ��̰� 0�� ǥ���� �������� 1�� �� ����. 
    
    // ���� ����
    cout << std::pow(2, sizeof(short) *8 - 1) - 1 << endl;
    cout << std::numeric_limits<short>::max() << endl;
    cout << std::numeric_limits<short>::min() << endl;
    cout << std::numeric_limits<short>::lowest() << endl;

    s = 32767;
    s = s + 1; // 32768

    cout << s << endl; //overflow
    

    return 0;
}
