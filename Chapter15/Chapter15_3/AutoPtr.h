#pragma once

#include <iostream>
using namespace std;

template<typename T>
class AutoPtr
{
public:
	T* m_ptr;

public:
	AutoPtr(T* ptr = nullptr)
		:m_ptr(ptr)
	{
		cout << "AutoPtr default constructor" << endl;
	}
	~AutoPtr()
	{
		cout << "AutoPtr destructor" << endl;

		if (m_ptr != nullptr) delete m_ptr;
	}
	/*
	//1
	AutoPtr(const AutoPtr& a) // 복사 생성자
	{
		cout << "AutoPtr copy constructor" << endl;

		// deep copy
		m_ptr = new T; 
		*m_ptr = *a.m_ptr;  // Resource의 대입 연산자 오버로딩 호출
	}
	AutoPtr& operator = (const AutoPtr& a) // 대입 연산자 오버로딩
	{
		cout << "AutoPtr copy assignment" << endl;

		if (&a == this)
			return *this;

		if (m_ptr != nullptr) delete m_ptr;

		// deep copy
		m_ptr = new T; 
		*m_ptr = *a.m_ptr; // Resource의 대입 연산자 오버로딩 호출 

		return *this;
	}
	*/

	//2
	AutoPtr(AutoPtr&& a)  // 이동 생성자
		: m_ptr(a.m_ptr) // 얕은 복사
	{
		a.m_ptr = nullptr; // 안전한 코딩 (위의 소멸자 !=때문 )

		cout << "AutoPtr move constructor" << endl;
	}

	AutoPtr& operator = (AutoPtr&& a)  // 이동 대입 연산자 오버로딩 
	{
		cout << "AutoPtr move assignment" << endl;

		if (&a == this)
			return *this;

		
		if (m_ptr != nullptr) delete m_ptr;

		m_ptr = a.m_ptr; // 얕은 복사 (Resource의 포인터만 복사)
		a.m_ptr = nullptr; // 소유권 넘김

		return *this;
	}

	T& operator *() const { return *m_ptr; }
	T* operator ->() const { return m_ptr; }
	bool inNull() const { return m_ptr == nullptr; }
};