// void ������ (generic pointer)����
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
	//ĳ�����ϰ�, �������Ѵ�
	

    return 0;
}
