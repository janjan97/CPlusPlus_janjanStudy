// �޸� ���� �Ҵ�

#include <iostream>

using namespace std;

int main()
{
	new int;
	int* ptr = new int;
	*ptr = 7;

	delete ptr;
	ptr = nullptr;

	cout << "after delete" << endl;
	if (ptr != nullptr) //(ptr)�� �����ϴ�.
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}

	/*
	//�޸𸮴���!!
	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;

		delete ptr; //�Ҵ��� �ް� �������������� �޸� ������ �߻��Ѵ�.
	}*/

	return 0;
}
