// Chapter17_5.cpp : string 대입, 교환, 덧붙이기, 삽입
#include <iostream>
#include <string>
using namespace std;

int main()
{

	// 대입 =, assign
	string str1("one");

	string str2;
	str2 = str1;
	str2 = "two";
	str2.assign("two");

	cout << str2 << endl;

	// 교환 swap
	string str1("one");
	string str2("two");

	cout << str1 << " " << str2 << endl;  // one two

	std::swap(str1, str2);

	cout << str1 << " " << str2 << endl;  // two one

	str1.swap(str2);

	//덧붙이기 +=, append, push_back
	string str1("one");  
	string str2("two");  

	str1.append("three");  
	str1.push_back('A');  // str1 = "onethreeA"
	str1 += "three";    // str1 = "onethreeAthree"

	str2 = str1 + "four";  // str2 = "onethreeAthreefour"

	cout << str1 << endl; // "onethreeAthree" 
	cout << str2 << endl; // "onethreeAthreefour"

	// 삽입 insert 
	string str("aaaa");
	str.insert(2, "bbb");   // index 두번째 자리에 bbb 삽입
	
	cout << str << endl;  // "aabbbaa"

	return 0;
}