// Chapter7_15.cpp : 생략부호 (Ellipsis)
#include <iostream>
#include <cstdarg>

using namespace std;

double findAverage(int count, ...) //파라미터로 들어올 argument 개수
{
	double sum = 0;

	va_list list; //char *va_list, 문자열로 받는다

	va_start(list, count); //va_list를 받고, argument가 몇개인지는 count로 받는다. 
		for (int arg = 0; arg < count; ++arg)
			sum += va_arg(list, int); //int형으로 변환
	va_end(list); //종료 

	return sum / count;
}


int main()
{
	cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl; //1개, 1만 넣는다.
	cout << findAverage(3, 1, 2, 3) << endl; //3개 1,2,3 만 넣는다.
	cout << findAverage(5, 1, 2, 3, 4, 5) << endl;
	cout << findAverage(10, 1, 2, 3, 4, 5) << endl;

	return 0;
}
