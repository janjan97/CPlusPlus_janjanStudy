// for�� ���� ����
#include <iostream>

using namespace std;

int main()
{
    // ��ǥ ���� (��ܽ�)
    
    for(int i = 1; i < 5; i++)
    {
        for (int j = 0; j <  i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    

    // ��ǥ ���� ( ���̰� h�� �ﰢ�� ��� )
    // ����: h - i ���� ���
    // �� : i * 2 - 1���� ���
    int i, j, h;
    cin >> h;

    for(i = 1; i <= h; i++) {
        for (j = 1; j <= h - i; j++) //���� ���� ���
        {
            cout << " ";
        }
        for (j = 1; j <= i * 2 - 1; j++)  //*���
        {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}
