#pragma once
#include <iostream>

//std::auto_ptr<int>; // C++ 17 X �������� �� �۵����� �ʴ� ��찡 ����

template<typename T>
class AutoPtr
{
public:
	T* m_ptr = nullptr; 

public:
	AutoPtr(T* ptr = nullptr) //���� �Ҵ�� �޸𸮿� �����͸� �޾Ƶ��̸鼭 �ʱ�ȭ
		:m_ptr(ptr) 
	{
	}
	~AutoPtr()
	{
		if (m_ptr != nullptr) delete m_ptr; 
		// �Ҹ��ڿ��� nullptr �ƴϸ� �޸� ������ (�̷� ���Ҹ� �ڵ����� ���־ Ŭ������ ���� ���� ������ �� ��Ȱ���ϱ� ����.)
	}

	AutoPtr(AutoPtr& a)  // ���� ������
	{
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;  // ������ ����
	}

	AutoPtr& operator = (AutoPtr& a)  // ���� ������ �����ε�
	{
		if (&a == this)  // �ڽ��̸� �ƹ��͵� ��������
			return *this;

		delete m_ptr;   // �����ִ� �޸� �����
		m_ptr = a.m_ptr;  // ���ο� �ּ�
		a.m_ptr = nullptr;   // ������ ����
		return *this;
	}

	T& operator *() const { return *m_ptr; }  
	T* operator ->() const { return m_ptr; } 
	bool inNull() const { return m_ptr == nullptr; }
};