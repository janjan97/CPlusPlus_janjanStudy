#include <iostream>

int main()
{
    using namespace std;

    int num = 0;

    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << "�� ¦�� �Դϴ�" << endl;
    }
    else
        cout << num << "�� Ȧ�� �Դϴ�" << endl;
    
    return 0;
}
