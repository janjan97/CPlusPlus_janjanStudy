// Chapter9_4.cpp : 비교 연산자 오버로딩 하기 ( ==, !=, >, >= )

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	friend bool operator < (const Cents& c1, const Cents& c2) //크기비교
	{
		return c1.m_cents < c2.m_cents; 
		//왼쪽이 더 작냐라고 묻는 (<)연산자를 사용해야한다. (less than)
	}

	friend bool operator == (const Cents& c1, const Cents& c2) // !=도 마찬가지
	{
		return c1.m_cents == c2.m_cents;
	}

	friend std::ostream& operator << (std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	vector<Cents> arr(20);
	for (unsigned i = 0; i < 20; ++i)
		arr[i].getCents() = i;

	std::random_shuffle(begin(arr), end(arr)); // C++ 17이상은 shuffle을 사용한다.

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	std::sort(begin(arr), end(arr)); //오버로딩해야 작동함

	for (auto& e : arr)
		cout << e << " ";

	/*Cents cents1(6);
	Cents cents2(6);

	if (cents1 == cents2)
		cout << "Equal " << endl;*/
	return 0;
}