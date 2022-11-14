// Chapter15_3.cpp : 이동 생성자와 이동 대입
#include <iostream>
#include "Timer.h"
#include "AutoPtr.h"
#include "Resource.h"

AutoPtr<Resource> generateResource()
{
	AutoPtr<Resource> res(new Resource(10000000)); // 초기화

	return res; // return해주면 내부에서 복사해주는 과정을 거친다
}

int main()
{
	using namespace std;
	streambuf* orig_buf = cout.rdbuf();
	// cout.rdbuf(NULL); // 로그를 버퍼와 끊어줘서 cout이 안나오게 해줌

	Timer timer;
	{
		AutoPtr<Resource> main_res;
		main_res = generateResource();
	}

	cout.rdbuf(orig_buf);
	timer.elapsed(); // 실행시간 출력

	return 0;
}
