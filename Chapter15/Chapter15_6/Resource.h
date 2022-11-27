#pragma once

#include <iostream>
using namespace std;

class Resource
{
public:
	int* m_data = nullptr;	// 동적 할당
	unsigned m_length = 0;	// 데이터 개수

public:
	Resource() // 기본 생성자
	{
		cout << "Resource constructed" << endl;
	}

	Resource(unsigned length) // 길이를 입력받을 경우
	{
		cout << "Resource length constructed" << endl;
		this->m_data = new int[length]; // 메모리할당
		this->m_length = length;
	}

	Resource(const Resource& res) // 복사 생성자
	{
		cout << "Resource copy constructed" << endl;

		Resource(res.m_length);

		for (unsigned i = 0; i < m_length; ++i)  // 깊은 복사 (시간이 걸림)
			m_data[i] = res.m_data[i];
	}

	~Resource()  // 소멸자
	{
		cout << "Resource destroyed" << endl;

		if (m_data != nullptr) delete[] m_data; // 메모리 지워주기
	}

	Resource& operator = (Resource& res)  // 대입 연산자 오버로딩
	{
		cout << "Resource copy assignment" << endl;

		if (&res == this) return *this; // 자신을 대입할 경우 아무것도 안함

		if (this->m_data != nullptr) delete[] m_data;

		m_length = res.m_length;
		m_data = new int[m_length];

		for (unsigned i = 0; i < m_length; ++i)
			m_data[i] = res.m_data[i]; // 모든 원소들을 깊은 복사

		return *this;
	}

	void print()  // Resource의 동적 배열 m_data의 모든 원소값을 출력한다.
	{
		for (unsigned i = 0; i < m_length; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}

	void setAll(const int& v) // Resource의 동적 배열 m_data 의 모든 원소값을 v 값으로 설정한다.
	{
		for (unsigned i = 0; i < m_length; ++i)
			m_data[i] = v;
	}

};
