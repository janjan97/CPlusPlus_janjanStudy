// for문 예제 연습
#include <iostream>

using namespace std;

int main()
{
    // 별표 찍어보기 (계단식)
    
    for(int i = 1; i < 5; i++)
    {
        for (int j = 0; j <  i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    

    // 별표 찍어보기 ( 높이가 h인 삼각형 모양 )
    // 공백: h - i 까지 출력
    // 별 : i * 2 - 1까지 출력
    int i, j, h;
    cin >> h;

    for(i = 1; i <= h; i++) {
        for (j = 1; j <= h - i; j++) //공백 먼저 출력
        {
            cout << " ";
        }
        for (j = 1; j <= i * 2 - 1; j++)  //*출력
        {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}
