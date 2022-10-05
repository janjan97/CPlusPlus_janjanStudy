#include <iostream>
#include <cstdlib> //std::rand(), std::srand()
#include <ctime> //std:: time()
#include <random>

using namespace std;

int main()
{
	std::random_device rd; // �õ� �ѹ� ���� 
	std::mt19937_64 mersenne(rd()); //create a mesenne twister 
	//���� ���� ����̽� �̿��� ������ ��� �ٲ۴�. 
	std::uniform_int_distribution<>dice(1, 6); // 1~6 ������ ���� �����ϰ� �����. 

	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl;

	return 0;
}
