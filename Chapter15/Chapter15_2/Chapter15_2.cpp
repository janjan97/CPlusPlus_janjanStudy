// Chapter15_2.cpp : 오른쪽 값 참조 (R-Value References)
#include <iostream>
using namespace std;

void doSomething(int& lref) // L
{ 
	cout << "L-value ref" << endl; 
}
void doSomething(int&& ref) // R 파라미터로 오버로딩 구분
{ 
	cout << "R-value ref" << endl; 
}
int getResult() 
{ 
	return 100 * 100; 
}

int main()
{
	int x = 5;					// 5는 왼쪽x에 값을 복사해 넣고 사라진다.
	int y = getResult();
	const int cx = 6;			// const 적용 가능
	const int cy = getResult();	// const 적용 가능

	// L-value references 
	int& lr1 = x;				// O x는 변수이므로 참조 가능
	int& lr2 = cx;				// X cx는 const이므로 참조 불가능
	int& lr3 = 5;				// X R-Values
	
	
	const int& lr4 = x;			// O 참조 대상에 x를 const로 바꾸지 않기 때문에 가능
	const int& lr5 = cx;		// O 참조 대상에 cx를 const로 바꾸지 않기 때문에 가능
	const int& lr6 = 5;		// O 참조 대상에 10을 const로 바꾸지 않기 때문에 가능

	// R-value references (&&)
	int&& rr1 = x;				// X x는 변수이므로 R-value 참조 불가능 
	int&& rr2 = cx;				// X cx는 const형 변수이므로 메모리에 남아있으므로 R-Value 참조 불가능 
	int&& rr3 = 5;				// O 상수는 R-value이므로 참조 가능 
	
	int&& rr4 = getResult();	// O return된 값이 R-value이므로 참조 가능
	rr3 = 10;					// rr3은 값을 바꿀 수도 있다.

	const int&& rr5 = x;		// X
	const int&& rr6 = cx;		// X 다른곳에서 cx에 접근할 가능성이 있기 때문에 구분하기위해 불가능
	const int&& rr7 = 5;		// O R-Values

	const int&& rr8 = getResult();

	// L/R-value reference parameters
	doSomething(x);				// L
	doSomething(5);				// R
	doSomething(getResult());	// R
	doSomething(rr3);			// L

	return 0;
}