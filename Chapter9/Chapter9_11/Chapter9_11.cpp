// Chapter9_11.cpp : 대입 연산자 오버로딩, 깊은복사와 얕은 복사
#include <iostream>
#include<cassert>
using namespace std;

class MyString
{
	//private: 
	//주소를 출력하기위해 public:
public:
	char* m_data = nullptr; //문자열을 저장하는 메모리의 포인터, nullptr로 초기화.
	int m_length = 0;

public:
	MyString(const char* source = "") // 생성자. 문자열을 받는다
	{
		assert(source); //assert를 사용해 문자열이 비었는지 확인

		m_length = std::strlen(source) + 1; //null character때문에 +1
		m_data = new char[m_length]; // m_length만큼 동적할당으로 받아줌

		for (int i = 0; i < m_length; ++i) // 값 하나씩 복사. 
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0'; //배열 요소에 접근하므로 -1, 문자의 끝을 알림. 
	}

	//복사 연산자
	MyString(const MyString& source) // 자신이 매개변수로
	{
		cout << "copy constructor " << endl; // 출력으로 확인

		m_length = source.m_length; // 길이 그대로

		if (source.m_data != nullptr) //source로 들어온 m_data가 메모리를 갖고 있을 경우
		{
			m_data = new char[m_length]; // 동적할당을 새로 해준다. 

			for (int i = 0; i < m_length; ++i) 
				m_data[i] = source.m_data[i]; //source가 가진걸 복사한다.
		}
		else
			m_data = nullptr;

	}

	//대입연산자
	MyString& operator = (const MyString& source)
	{
		//shallow copy 얕은 복사
		// this->m_data = source.m_data; 
		// this->m_length = source.m_length; 

		cout << "Assignment operator " << endl;

		if (this == &source) //prevent self-assignment
			return *this; //못하게 막아버리고 리턴해서 끝낸다

		delete[] m_data; 

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
	}

	~MyString() // 소멸자 
	{
		delete[]m_data; //메모리 누수(leak)을 막기위한 delete
	}

	char* getString() {
		return m_data;
	}
	int getLength() {
		return m_length;
	}
};

int main()
{
	MyString hello("Hello");

	MyString str1 = hello; //MyString str1(hello);

	MyString str2;
	str2 = hello;

	cout << (int*)hello.m_data << endl; //동적할당된 m_data의 주소
	//char형이므로 int로 형변환. 
	cout << hello.getString() << endl;

	{//scope 내부에서 local variable 형성
		
		MyString copy = hello;
		//hello가 복사되어 copy가 생성되므로 복사생성자 호출(대입 연산자가 아님)
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;
	}
	//scope를 벗어나 local variable은 사라짐

	cout << hello.getString() << endl;

	return 0;
}
