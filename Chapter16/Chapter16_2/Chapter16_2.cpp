// Chapter16_2.cpp : STL 반복자 ( iterator )
#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
using namespace std;

int main()
{
	vector<int> container; //list, set, map
	for (int i = 0; i < 10; ++i)
		container.push_back(i);

	vector<int>::iterator itr;
	vector<int>::const_iterator citr;

	// 1 - while문 사용
	itr = container.begin();
	while (itr != container.end())
	{
		cout << *itr << " ";

		++ itr;
	}
	cout << endl;
	// 2 - for문 사용
	for (auto itr= container.begin(); itr != container.end(); ++itr)
		cout << *itr << " ";
	cout << endl;

	// 3 - for each 문 사용
	for (auto& e : container)
		cout << e << " ";
	cout << endl;

	return 0;
}