// Chapter15_1.cpp : 이동의 의미와 스마트 포인터 (Move semantics, Smart Pointers)
#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"
using namespace std;
// RAII : new한 곳에서 delete를 해줘야한다.

//1
/*
void doSomething()
{
	try
	{
		Resource* res = new Resource; //res를 동적할당 받아서 가져옴
		// 수동으로 delete하는 포인터를 dull pointer라고도 한다
		if (true)
		{
			throw - 1;
		}
		delete res; //
	}
	catch (...)
	{
	}

	return;
}*/

//2
/*
void doSomething()
{
	try
	{
		//Resource* res = new Resource;
		AutoPtr<Resource> res = new Resource; // smart pointer res(new Resource)
		if (true)
		{
			throw - 1;
		}
		//delete res; // 스마트 포인터의 소멸자에서 자동으로 해줌
	}
	catch (...)
	{
	}

	return;
}*/


int main()
{
	//doSomething();  // 1, 2

	{
		AutoPtr<Resource> res1(new Resource); // 초기화됨,
		AutoPtr<Resource> res2; // 메모리 x 포인터로만 존재 (초기화 x)
		//int i; int *ptr(&i); int *ptr2 = nullptr; 이런느낌

		cout << res1.m_ptr << endl; // 주소 출력
		cout << res2.m_ptr << endl; // (nullptr)

		res2 = res1;	// 문제 move semantics

		cout << res1.m_ptr << endl;  //
		cout << res2.m_ptr << endl;  // 둘 다 같아짐
	}
}
