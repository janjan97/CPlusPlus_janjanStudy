// Chapter16_1.cpp : 표준 템플릿 라이브러리, 컨테이너
#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
using namespace std;

void sequence_containers()
{
	// vector
	{
		std::vector<int> vec;	// #include <vector>
		for (int i = 0; i < 10; ++i)
			vec.push_back(i);
		cout << "Vector를 출력합니다 \n";
		for (auto& e : vec)
			cout << e << "  ";
		cout << "\n";
	}
	// deque
	{
		std::deque<int> deq;	// #include <deque>
		for (int i = 0; i < 10; ++i)
		{
			deq.push_back(i);
			deq.push_front(i);
		}
		cout << "\nDeque를 출력합니다 \n";
		for (auto& e : deq)
			cout << e << "  ";
		cout << "\n";
	}
}

void associative_containers()
{
	// set
	{
		std::set<string> str_set;

		str_set.insert("Hello");
		str_set.insert("Jan");
		str_set.insert("Jan");	// Disallow duplicated value

		cout << "\nset 크기 = " << str_set.size() << "\n";
		cout << "set을 출력합니다 \n";
		for (auto& e : str_set)
			cout << e << " ";
		cout << "\n";
	}

	// multiset : duplication is allowed
	{
		std::multiset<string> str_set;

		str_set.insert("Hello");
		str_set.insert("Jan");
		str_set.insert("Jan");	// Allow duplicated value

		cout << "\nmultiset 크기 = " << str_set.size() << "\n";
		cout << "multiset을 출력합니다 \n";
		for (auto& e : str_set)
			cout << e << " ";
		cout << "\n";
	}

	// map
	{
		std::map<char, int> map;
		map['a', 10];	// map['a'] = 10; (o) / map['a'](10) (x)
		map['b', 20];
		map['c', 50];

		cout << "\nmap을 출력합니다 \n";
		cout << "'a' = " << map['a'] << "\n";

		map['a', 100];
		cout << "'a' = " << map['a'] << "\n";

		for (auto& e : map)
			cout << "첫 번째 요소 = " << e.first << " " << "두 번째 요소 = " << e.second << "\n";
		cout << "\n";
	}
	// multimap : duplicated keys
	{
		std::multimap<char, int> mmap;
		mmap.insert(std::pair<char, int>('a', 10));	// C++ 17 이전 문법
		//mmap.insert(std::pair('b', 20));			// C++ 17 이후 문법
		//mmap.insert(std::pair('c', 50));
		//mmap.insert(std::pair('a', 100));
		//mmap.insert(std::pair('a', 200));

		cout << mmap.count('a') << endl;
		cout << "\nmultimap을 출력합니다 \n";
		for (auto& e : mmap)
			cout << "첫 번째 요소 = " << e.first << " " << "두 번째 요소 = " << e.second << "\n";
		cout << "\n";
	}
}



void container_adapters()
{
	// stack
	{
		cout << "\nStack을 출력합니다 \n";

		std::stack<int> stack;
		stack.push(1);		// push adds a copy
		stack.emplace(2);	// emplace constructs a new object
		stack.emplace(3);

		cout << "stack top = " << stack.top() << "\n";
		cout << "stack top = " << stack.top() << "\n";
	}
	// queue
	{
		cout << "\nqueue을 출력합니다 \n";

		std::queue<int> queue;
		queue.push(1);
		queue.emplace(2);
		queue.push(3);

		cout << "queue front = " << queue.front() << "queue back = " << queue.back() << "\n";
		queue.pop();
		cout << "queue front = " << queue.front() << "queue back = " << queue.back() << "\n";
	}
	// Priority queue (정렬한다)
	{
		cout << "\nPriority queue을 출력합니다 \n";

		std::priority_queue<int> pqueue; //사용자 지정으로 만들경우 sort 오버로딩해야함.

		for (const int n : {1, 8, 5, 2, 6, 9, 4, 7, 3, 0})
			pqueue.push(n);	// 자동 정렬이 된다. 우선순위 큐

		for (int i = 0; i < 10; ++i)
		{
			cout << pqueue.top() << " ";
			pqueue.pop();
		}
	}
}
int main()
{
	sequence_containers();
	
	associative_containers();
	
	container_adapters();

	return 0;
}