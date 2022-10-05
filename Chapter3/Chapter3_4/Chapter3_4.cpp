#include <iostream>

int main()
{
    using namespace std;

    /* sizeof
    float a;

    sizeof(float);
    sizeof(a); //sizeof a; 변수명을 선언하면 괄호생략도가능하다
    */

    // comma operator
    /*
    int x = 3;
    int y = 2;
    int z = (++x, ++y);

    cout << x << " " << y << " " << z << endl;
    */

    // conditional operator
    bool onSale = true;

    const int price = (onSale == true)? 10 : 100;

   /* 
   if (onSale)
        price = 10;
    else price = 100;
    */
    cout << price << endl;

    return 0;
}
