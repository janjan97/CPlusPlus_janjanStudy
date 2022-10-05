// 포인터와 정적배열
#include <iostream>

using namespace std;


//
void printArray(int array[])// int *array와 같음
{
    cout << sizeof(array) << endl; //20? -> 4
    cout << *array << endl;

    *array = 100;
}

int main()
{
    int array[5] = { 9,7,5,3,1 };

    /*
    cout << array[0] << " " << array[1] << endl;
    cout << array << endl;
    cout << &(array[0]) << endl;
   
    cout << *array << endl; //de-referencing array 
   
    int *ptr = array;
    cout << ptr << endl;
    cout << *ptr << endl;

    char name[] = "jinjin";
    cout << *name << endl;
    */

    cout << sizeof(array) << endl;

    printArray(array);
    cout << array[0] << " " << *array << endl;

    int *ptr = array;

    cout << sizeof(ptr) << endl; //포인터 변수 사이즈

    printArray(ptr);
    

    return 0;
}

/* 
struct MyStruct
{
    int array[5] = {9,7,5,3,1};
};

void doSomething(MyStruct ms) //*ms
{
    cout << sizeof(ms.array) << endl;
}

int main()
{
    MyStruct ms;
    cout << ms.array[0] << endl;
    cout << sizeof(ms.array) << endl;

    doSomething(ms); //&ms

    return 0;
}
*/
