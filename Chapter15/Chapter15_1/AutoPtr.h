#pragma once
#include <iostream>

//std::auto_ptr<int>; // C++ 17 X 복잡해질 때 작동하지 않는 경우가 생김

template<typename T>
class AutoPtr
{
public:
	T* m_ptr = nullptr; 

public:
	AutoPtr(T* ptr = nullptr) //동적 할당된 메모리에 포인터를 받아들이면서 초기화
		:m_ptr(ptr) 
	{
	}
	~AutoPtr()
	{
		if (m_ptr != nullptr) delete m_ptr; 
		// 소멸자에서 nullptr 아니면 메모리 지워줌 (이런 역할만 자동으로 해주어도 클래스로 만들어서 묶어 놓았을 때 재활용하기 좋다.)
	}

	AutoPtr(AutoPtr& a)  // 복사 생성자
	{
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;  // 소유권 이전
	}

	AutoPtr& operator = (AutoPtr& a)  // 대입 연산자 오버로딩
	{
		if (&a == this)  // 자신이면 아무것도 하지않음
			return *this;

		delete m_ptr;   // 갖고있는 메모리 지우기
		m_ptr = a.m_ptr;  // 새로운 주소
		a.m_ptr = nullptr;   // 소유권 이전
		return *this;
	}

	T& operator *() const { return *m_ptr; }  
	T* operator ->() const { return m_ptr; } 
	bool inNull() const { return m_ptr == nullptr; }
};