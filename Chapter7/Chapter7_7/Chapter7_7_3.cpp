//함수 오버로딩 ( Function Overloading )
#include <iostream>
#include <string>

using namespace std;

typedef int my_int;

void print(unsigned int value) {}
void print(float value) {}

int main()
{
    
    print((unsigned int)'a'); //print('a');
    print(0u);                //print(0);
    print(3.14159f);          //print(3.14159);

    return 0;
}

