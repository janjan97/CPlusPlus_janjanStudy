// if

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    
    if (1)
    {
        int x = 5;
    } // ���� x �Ҹ�
    else
    {
        int x = 6;
    } // ���� x �Ҹ�

    cout << x << endl; // x�� ���ǵ��� ����.
    
    
    /* ���� �Ǽ��� ��������.
    if (x = 0) // x�� 0�� ���� �� false 
        cout << x << endl;

    cout << x << endl; //�̺κ��� ����Ǿ� 0�� ��µȴ�.
    */

    return 0;
}