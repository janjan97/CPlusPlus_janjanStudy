#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono> // 시간 측정
//실행 시간 측정하기
using namespace std;

class Timer
{
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;

	// Time 타입의 객체가 생성되자마자 start_time 멤버 변수에 시작 시간이 대입된다.
	std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
	void elapsed()
	{
		std::chrono::time_point<clock_t> end_time = clock_t::now();  // elapsed() 멤버 함수를 실행한 시간

		// elapsed() 멤버 함수가 실행되자마자 end_time - start_time 빼주어 실행 시간을 구하고 출력한다.
		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
	}
};