// Chapter7_8.cpp : 매개변수의 기본값
#include <iostream>
using namespace std;

void print(std::string str){}
void print(char ch = ' '){}

int main() 
{
    print();
  
    return 0;
}

