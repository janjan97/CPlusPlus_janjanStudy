// �������� �⺻
#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    
	/* 
	//& �ּ������� * ������
	int x = 3; 
	cout << x << endl;
	cout << &x << endl; //�ּҰ� 16������ ���´�
	cout << (int)&x << endl; // �ּҸ� 10������ ĳ���� 

	cout << *(&x) << endl;
	*/

	
	 //������ ���������� ��ġ
	int x = 5;
	double d = 1.0;

	int *ptr_x = &x; //�ʱ�ȭ �ʼ�
	double *ptr_d = &d;
	
	cout << ptr_x << endl;
	cout << *ptr_x << endl;

	cout << ptr_d << endl;
	cout << *ptr_d << endl;
	
	/*
	//�������� ũ��
	int x = 5;
	double d = 1.0;

	int *ptr_x;
	double *ptr_d;

	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
	*/
    return 0;
} 