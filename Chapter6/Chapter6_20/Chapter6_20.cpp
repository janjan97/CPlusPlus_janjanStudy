// std::array �Ұ�

#include <iostream>
#include <array> //���̺귯������
#include <algorithm> // sort

using namespace std;

int main()
{
	//int array[5] = { 1,2,3,4,5 };

	array<int, 5> my_arr = { 1,2,3,4,5 };
	my_arr = { 0,1,2,3,4 };
	my_arr = { 0,1,2, };

	cout << my_arr[0] << endl;
	cout << my_arr.at(0) << endl; //at�� �̸�üũ�ϰ� ������ ����� ����ó��������.

	cout << my_arr.size() << endl;
	


	return 0;
}
