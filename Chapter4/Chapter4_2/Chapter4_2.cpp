#include <iostream>
#include "Myconstants.h"

using namespace std;

//void doSomething()
//{
//    static int a = 1; //static ������ �ʱ�ȭ�� �ݵ�� �ʿ��ϴ�.
//
//    ++a;
//
//    cout << a << endl;
//}


// ���� ����
void doSomething(); // extern void doSomthing(); (extern ����)


int main()
{
    /* ��������
    cout << value << endl;

    int value = 1;

    cout << ::value << endl; //�������� :: �����ڷ� ȣ��
    cout << value << endl;
    */

    
    cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;
    doSomething(); //test.cpp

    return 0;
}
