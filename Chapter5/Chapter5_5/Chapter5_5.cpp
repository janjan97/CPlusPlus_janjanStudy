// ¹Ýº¹¹® 1.while

#include <iostream>

using namespace std;

int main()
{
	/*
	int count = 0;
	while (count < 10)
	{
		cout << count << endl;
		++count;

		
		//if (count == 10)
		//	break;
			
			
	}	*/

	int outer_count = 1;
	while (outer_count <= 5)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
		{
			cout << inner_count++ << " ";
		}

		cout << endl;
		++outer_count;
	}


    return 0;
}
