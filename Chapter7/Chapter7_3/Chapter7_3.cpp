// ������ ���� �μ� ���� Passing Arguments by Reference ( Call by Reference )
#include <iostream>
#include <cmath> //sin(),cos()
#include <vector>

using namespace std;

/*
// 1
void getSinCos(const double degrees, double& sin_out, double& cos_out)
{
	static const double pi = 3.141592; // 3.141592 / 180.0;
	// �Լ��� ����� �� �Ź� ���Ӱ� ���������ʰԵȴ�
	const double radians = degrees * pi / 180.0;

	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

int main()
{
	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;

	return 0;
}
*/

/*
//2 ���ͷ���� ���� X
void foo(const int& x)
{
	cout << x << endl;
}

int main()
{
	foo(6);

	return 0;
}*/

/*
//3 �����Ϳ���������
//typedef int* pint;

void foo(int* &ptr)
{
	cout << ptr << " " << &ptr << endl;
}

int main()
{
	int x = 5;
	int* ptr = &x;

	cout << ptr << " " << &ptr << endl;
	foo(ptr);

	return 0;
}*/

void printElement(const vector <int>& arr)
{

}

int main()
{
	vector<int> arr{ 1, 2, 3, 4 };

	return 0;
}