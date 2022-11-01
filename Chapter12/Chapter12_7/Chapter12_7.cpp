// Chapter12_7.cpp : 순수 가상 함수, 추상 클래스, 인터페이스
#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string m_name;
public:
	Animal(std::string name)
		:m_name(name)
	{}
public:
	string getName() { return m_name; }
	virtual void speak() const = 0;  //순수 가상 함수
};

void Animal::speak() const
{
	cout << m_name << "???" << endl;
}

class Cat : public Animal
{
protected:
	string m_name;
public:
	Cat(std::string name)
		:Animal(name)
	{}

	virtual void speak() const
	{
		cout << m_name << "Mao" << endl;
	}
};

/*
//인터페이스 클래스
class IErrorLog
{
public:
	virtual bool reportError(const char* error) = 0;
	virtual ~IErrorLog() {}
};

class FileErrorLg : public IErrorLog 
{
public:
	bool reportError(const char* errorMessage) override
	{
		cout << "Writing Error To a File" << endl;
		return true;
	}
};
*/

int main()
{
	Cat cat("hello");
	
}

