// Chapter15_5.cpp : std::unique_str
#include <iostream>
#include <memory>  // unique_ptr
using namespace std;

class Resource
{
public:
	int* m_data = nullptr;
	unsigned m_length = 0;

public:
	Resource()
	{
		cout << "Resource constructed" << endl;
	}

	Resource(unsigned length)
	{
		cout << "Resource length constructed" << endl;
		this->m_data = new int[length];
		this->m_length = length;
	}

	Resource(const Resource& res) // 복사 생성자 
	{
		cout << "Resource copy constructed" << endl;

		Resource(res.m_length);

		for (unsigned i = 0; i < m_length; ++i)  // 깊은 복사
			m_data[i] = res.m_data[i];
	}

	~Resource()  // 소멸자
	{
		cout << "Resource destroyed" << endl;
	}

	Resource& operator = (Resource& res)  // 대입 연산자 오버로딩
	{
		cout << "Resource copy assignment" << endl;

		if (&res == this) return *this;

		if (this->m_data != nullptr) delete[] m_data;

		m_length = res.m_length;

		m_data = new int[m_length];
		for (unsigned i = 0; i < m_length; ++i)
			m_data[i] = res.m_data[i]; //  깊은 복사

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

void doSomething2(std::unique_ptr<Resource>& res) // unique_ptr 를 인수로 받을 땐 &로 받기를 권장함
{
	res->setAll(10);
}

int main()
{
	//{
	//	/*
	//	Resource* res = new Resource(1000000);  // 일반 포인터
	//	//std::unique_ptr<Resource> res = new Resource(1000000); 
	//	std::unique_ptr<Resource> res(new Resource(1000000)); // 스마트 포인터
	//	*/

	//	std::unique_ptr<int> upi(new int);  // int 타입의 인스턴스를 가리키는 스마트 포인터 upi

	//	//std::unique_ptr<Resource> res1(new Resource(5)); // 동적할당된 메모리의 포인터를 넣는것도 가능
	//	auto* ptr = new Resource(5);
	//	std::unique_ptr<Resource> res1(ptr); // Resource 타입의 인스턴스를 가리키는 스마트 포인터 res1

	//	res1->setAll(5); // 5로 대입
	//	res1->print();  // 출력

	//	std::unique_ptr<Resource> res2; // unique_ptr인 res2는 선언만 되어 nullptr인 상태

	//	// std::boolalpha : 0, 1 대신 true, false 출력. null이면 false
	//	std::cout << std::boolalpha;
	//	std::cout << static_cast<bool>(res1) << std::endl; // true 출력
	//	std::cout << static_cast<bool>(res2) << std::endl; // false 출력

	//	//res2 = res1; // 복사 X
	//	res2 = std::move(res1);  // move sementics 가능

	//	std::cout << std::boolalpha;
	//	std::cout << static_cast<bool>(res1) << std::endl; // false 출력. res1은 소유권을 잃어 nullptr이 됨
	//	std::cout << static_cast<bool>(res2) << std::endl; // true 출력. res2에게로 소유권이 이전됨

	//	if (res1 != nullptr) res1->print();
	//	if (res2 != nullptr) res2->print();
	//}

	{
		auto res1 = std::make_unique<Resource>(5);
		res1->setAll(1);
		res1->print();

		doSomething2(res1); //

		res1->print();
	}

}