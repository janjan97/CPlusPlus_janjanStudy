// 포인터의 기본
#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    
	/* 
	//& 주소참조와 * 역참조
	int x = 3; 
	cout << x << endl;
	cout << &x << endl; //주소가 16진수로 나온다
	cout << (int)&x << endl; // 주소를 10진수로 캐스팅 

	cout << *(&x) << endl;
	*/

	
	 //포인터 데이터형의 일치
	int x = 5;
	double d = 1.0;

	int *ptr_x = &x; //초기화 필수
	double *ptr_d = &d;
	
	cout << ptr_x << endl;
	cout << *ptr_x << endl;

	cout << ptr_d << endl;
	cout << *ptr_d << endl;
	
	/*
	//포인터의 크기
	int x = 5;
	double d = 1.0;

	int *ptr_x;
	double *ptr_d;

	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
	*/
    return 0;
} 