// Chapter14_4.cpp : std::exception 
#include <iostream>
#include <exception> //exception
#include <string>

class CustomException : public std::exception //상속
{
public:
	const char* what() const noexcept override // C++ 11 이상 noexcept
	{
		return "Custom exception";
	}
};

int main()
{
	try
	{
		/*std::string s;
		s.resize(-1); // exception throw
		*/
		throw CustomException();
	}
	catch (std::exception& exception) // 부모 클래스
	{
		// typeid(exception).name() 자식클래스 이름
		std::cout << typeid(exception).name() << std::endl; 
		std::cerr << exception.what() << std::endl;
	}
	return 0;
}