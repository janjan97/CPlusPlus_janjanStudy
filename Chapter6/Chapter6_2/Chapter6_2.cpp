//  배열과 반복문
#include <iostream>

using namespace std;

int main()
{

    const int num_students = 5;
    int scores[num_students] = { 84, 92, 76, 81, 56 };

    int total_score = 0;

    for (int i = 0; i < num_students; ++i)
    {
        total_score += scores[i];
    }

    double avg_score = static_cast<double>(total_score) / num_students;



    return 0;
}