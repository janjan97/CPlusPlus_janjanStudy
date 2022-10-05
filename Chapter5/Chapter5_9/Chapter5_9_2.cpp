// 난수만들기 random numbers (srand, rand )

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	std::srand(5323); // seed의 s
	//std::srand(static_cast<unsigned int>(std::time(0)));


	for (int count = 1; count <= 100; ++count)
	{
		cout << std::rand() << "\t"; 

		if (count % 5 == 0) cout << endl; 
	}

	return 0;
}

