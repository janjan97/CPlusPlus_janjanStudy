// �迭 ���� (2/2)
#include <iostream>

using namespace std;

/*
struct Rectangle
{
   int length;
   int width;
};

int main()
{
   cout << sizeof(Rectangle) << endl;

   Rectangle rect_arr[10];

   cout << sizeof(rect_arr) << endl;
   return 0;
}
*/
void doSomething(int students_scores[20]) //�Ű����� students_scores
{
	cout << (int)&students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
}

int main()
{
	const int num_studnets = 20; //������ array ����

	int students_scores[num_studnets] = { 1, 2, 3, 4, 5, }; //�ʱ�ȭ

	cout << (int)&students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	doSomething(students_scores);

	return 0;
}