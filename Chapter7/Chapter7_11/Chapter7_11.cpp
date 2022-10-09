// Chapter7_11.cpp : std::vector를 스택처럼 사용하기
#include <iostream>
#include <vector>
using namespace std;
// size, capaciity(용량)

void printStack(const vector<int>& stack)
{
	for (auto& e : stack)
		cout << e << " ";
	cout << endl;
}

int main()
{
	vector<int> stack;

	stack.reserve(1024); //메모리 1024만큼 확보, 너무크면 낭비가될 수도 있다.

	stack.push_back(3);
	printStack(stack);

	stack.push_back(5);
	printStack(stack);

	stack.push_back(7);
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

    return 0;
}

