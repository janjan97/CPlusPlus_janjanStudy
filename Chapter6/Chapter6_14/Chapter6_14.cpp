// ���� ���� Reference Variable
#include <iostream>

using namespace std;

/*
//�Լ��Ķ���� ����
void doSomething(int &n)
{
    cout << &n << endl;

    n = 10;
    cout << "In doSomething " << n << endl;
}*/

/*
//�迭�� ������
void printElements(int (&arr)[5]) //5 (elements�� ���� ������)
{
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}*/

struct Something
{
    int v1;
    float v2;
};

struct Other
{
    Something st;
};

int main()
{
    /*
    int value = 5;

    int* ptr = nullptr;
    ptr = &value;

    int &ref = value;

    cout << ref << endl;

    ref = 10; // *ptr =10;

    cout << &value << endl;
    cout << &ref << endl; //&value�� ������
    cout << ptr << endl;
    cout << &ptr << endl;*/

    /*
    int x = 5;
    int& ref = x;

    const int y = 8;
    const int& ref = y;
    */

    /*
    int value1 = 5;
    int value2 = 10;

    int& ref1 = value1;

    cout << ref1 << endl;

    ref1 = value2;

    cout << ref1 << endl;*/

    /* 
    //�Լ� �Ķ���� ����
    int n = 5;

    cout << n << endl;

    cout << &n << endl;

    doSomething(n);

    cout << n << endl;
    */

    /* 
    //�迭�� ������
    const int length = 5;
    int arr[length] = { 1,2,3,4,5 };

    printElements(arr);*/

    Other ot;

    int& v1 = ot.st.v1;
    v1= 1.0;

    return 0;
}

