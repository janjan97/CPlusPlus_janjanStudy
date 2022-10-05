//ÂüÁ¶¿Í const
#include <iostream>

using namespace std;

void doSomething(const int& x)
{
    cout << x << endl;
}

int main()
{
    
    const int value = 5;
    const int& ref = value;
    
    int a = 1;
    doSomething(a);
    doSomething(a + 4);
    doSomething(1);
  

 
    return 0;
}
