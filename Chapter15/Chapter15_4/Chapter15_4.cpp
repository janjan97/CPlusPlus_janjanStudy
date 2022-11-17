// Chapter15_4.cpp : std::move
#include <iostream>
#include <vector>
#include <utility>
#include "AutoPtr.h"
#include "Resource.h"
using namespace std;

int main()
{
	/*
	//1
	{
		AutoPtr<Resource> res1(new Resource(10000000));

		cout << res1.m_ptr << endl;

		AutoPtr<Resource> res2 = res1; //

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	}*/

	//2
	{
		vector<string> v;
		string str = "Hello";

		v.push_back(str);

		cout << str << endl;
		cout << v[0] << endl;

		v.push_back(std::move(str));

		cout << str << endl;
		cout << v[0] << " " << v[1] << endl;
	}
}
