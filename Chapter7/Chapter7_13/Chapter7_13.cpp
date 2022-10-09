// Chapter7_13.cpp : 방어적 프로그래밍 ( Defensive Programming )
#include <iostream>

using namespace std;

int main()
{
	//violated assumption

	string hello = "Hello, my name is janjan";

	cout << "input from 0 to " << hello.size() - 1 << endl;

	while (true)
	{
		int ix;
		cin >> ix;	
		// if문이 없을경우 string hello의 size를 넘어가는 ix를 입력할경우 오류 발생  
		if (ix >= 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;
			break;
		}
		else
			cout << "please try again" << endl;
	}

    return 0;
}

