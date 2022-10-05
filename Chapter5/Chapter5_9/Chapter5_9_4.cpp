#include <iostream>
#include <cstdlib> //std::rand(), std::srand()
#include <ctime> //std:: time()
#include <random>

using namespace std;

int main()
{
	std::random_device rd; // 시드 넘버 생성 
	std::mt19937_64 mersenne(rd()); //create a mesenne twister 
	//위의 랜덤 디바이스 이용해 난수를 계속 바꾼다. 
	std::uniform_int_distribution<>dice(1, 6); // 1~6 사이의 수를 랜덤하게 만든다. 

	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl;

	return 0;
}
