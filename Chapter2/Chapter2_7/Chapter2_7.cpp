#include <iostream>
#include <limits>

int main()
{
    using namespace std;

   /* char c1(65);
    char c2('A'); // 1byte

    cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

    // C
    cout << (char)65 << endl;
    cout << (int)'A' << endl;

    // C++
    cout << char(65) << endl;
    cout << int('A') << endl;

    cout << static_cast<char>(65) << endl;
    cout << static_cast<int>('A') << endl;
    */

    /*
    char c1(65);

    cin >> c1;
    cout << c1 << " " << static_cast<int>(c1) << endl;

    cin >> c1;
    cout << c1 << " " << static_cast<int>(c1) << endl;
    */

    /*
    char c1(65);

    cout << sizeof(char) << endl;
    cout << (int)std::numeric_limits<char>::max() << endl;
    cout << (int)std::numeric_limits<char>::lowest() << endl;
    */

    char c1(65);

    cout << int('\n') << endl;
    cout << "This is first line \n " << endl;

    return 0;
}
