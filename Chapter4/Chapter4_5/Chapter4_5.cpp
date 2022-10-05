// 암시적, 명시적 형변환
#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	// numeric conversion
	double i = 30000;
	char c = i;

	// numeric promotion
	int a = 10.f;
	double d = a;


	cout << static_cast<int>(c) << endl;
	cout << (int)c << endl;

	cout << static_cast<int>(d) << endl;
	cout << (int)d << endl;
    /* 명시적 형변환
    int i = (int)4.0;
    int i = int(4.0);
    int i = static_cast<int>(4.0);
    */


    return 0;
} 