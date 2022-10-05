// std::vector
#include <iostream>
#include <vector> //라이브러리 선언

using namespace std;

int main()
{
    /*
    
    //std::array<int, 5>array;
    std::vector<int> array2 = { 1,2,3,4,5 };
    cout << array2.size() << endl;

    std::vector<int>array3{ 1,2,3 }; // uniform initialization
    cout << array3.size() << endl;
    */

    int* my_arr = new int[5];

    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    arr.resize(10);

    for (auto& itr : arr)
        cout << itr << " ";
    cout << endl;

    cout << arr.size() << endl;

    cout << arr[1] << endl;
    cout << arr.at(1) << endl;

    // delete[] my_arr;
  
    return 0;
    
}
