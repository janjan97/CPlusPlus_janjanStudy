#pragma once
#include <iostream>


template<typename T>
class AutoPtr
{
public:
	T* m_ptr;

public:
	AutoPtr(T* ptr = nullptr)
		:m_ptr(ptr)
	{
		std::cout << "AutoPtr default constructor" << std::endl;
	}

	~AutoPtr()
	{
		std::cout << "AutoPtr destructor" << std::endl;

		if (m_ptr != nullptr) delete m_ptr;
	}

	AutoPtr(const AutoPtr& a) // 복사 생성자
	{
		std::cout << "AutoPtr copy constructor" << std::endl;

		// deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr; // Resource.h 의 대입 연산자 호출하여 깊은 복사 수행

	}

	AutoPtr& operator = (const AutoPtr& a) // 대입 연산자 오버로딩
	{
		std::cout << "AutoPtr copy assignment" << std::endl;

		if (&a == this)
			return *this;

		if (m_ptr != nullptr) delete m_ptr;

		// deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr; // Resource.h 의 대입 연산자 호출하여 깊은 복사 수행

		return *this;
	}

	//복사생성자 or 복사 대입 연산자 사용하지 않으려면 delete
	//AutoPtr(const AutoPtr& a) = delete;
	//AutoPtr& operator = (**const** AutoPtr& a) = delete;  

	AutoPtr(AutoPtr&& a)  // 이동 생성자 (Move Sementics)
		: m_ptr(a.m_ptr) // 소유권 이전
	{
		a.m_ptr = nullptr; // 소유권 박탈

		std::cout << "AutoPtr move constructor" << std::endl;
	}

	AutoPtr& operator = (AutoPtr&& a)  // 이동 대입 연산자 오버로딩
	{
		std::cout << "AutoPtr move assignment" << std::endl;

		if (&a == this)
			return *this;

		if (m_ptr != nullptr) delete m_ptr;

		m_ptr = a.m_ptr;  // 소유권 이전
		a.m_ptr = nullptr;  // 소유권 박탈

		return *this;
	}

	T& operator *() const { return *m_ptr; }
	T* operator ->() const { return m_ptr; }
	bool inNull() const { return m_ptr == nullptr; }
};