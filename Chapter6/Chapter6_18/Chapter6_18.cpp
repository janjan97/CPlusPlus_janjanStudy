// void 포인터 (generic pointer)포괄
#include <iostream>

using namespace std;

int main()
{
	int		i = 5;
	float	f = 3.0;
	char	c = 'a';

	void* ptr = nullptr;

	ptr = &i; 
	ptr = &f;
	ptr = &c;

	//cout << ptr + 1 << endl;
	
	cout << *static_cast<char*>(ptr) << endl; 
	//캐스팅하고, 역참조한다
	

    return 0;
}
