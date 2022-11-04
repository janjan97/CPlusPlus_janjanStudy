// Chapter14_1.cpp : 예외 처리의 기본 (Exception Handing)
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
// 방법 1
int findFirstChar(const char* string, char ch)
{
	for (std::size_t index = 0; index < strlen(string); ++index)

		if (string[index] == ch)
			return index; //받은 string 내에 찾고자하는 문자가 있을 경우 인덱스를 리턴
	
	return -1; //no match
}

double divide(int x, int y, bool& success)
{
	if (y == 0)
	{
		success = false; // 0으로 나눌때 success를 false로
		return 0.0;
	}

	success = true;
	return static_cast<double>(x) / y;
}

int main()
{
	bool success;
	double result = divide(5, 3, success);

	if (!success)
		cerr << "An Error Occurred" << endl;
	else
		cout << "Result is " << result << endl;

	std::ifstream input_file("tmp.txt");
	if (!input_file)// 변수 자체를 초기화되었는지 !으로 판별
		std::cerr << "Cannot open file" << std::endl;

		return 0;
}
*/

// try, catch, throw
/*
int main()
{
	
	double x;
	cin >> x;  

	try
	{
		if (x < 0.0) throw string("Negative input");

		cout << std::sqrt(x) << endl; //x가 0보다 작으면 구할 수 없음
	}
	catch (string error_message)
	{
		cout << error_message << endl;
	}

	return 0;
}*/

int main()
{
	try
	{
		// Something Happend
		throw "My Error Message ";
	}
	catch (int x)
	{
		cout << "Catch integer " << x << endl;
	}
	catch (double x)
	{
		cout << "Catch double" << x << endl;
	}
	catch (const char* error_message)
	{
		cout << "Char *" << error_message << endl;
	}
	catch (string error_message)
	{
		cout << error_message << endl;
	}

	return 0;
}