// Chapter16_3.cpp :  STL algorithm
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> container;
    for (int i = 0; i < 10; ++i)
        container.push_back(i);

    auto itr = min_element(container.begin(), container.end());
    cout << *itr << endl;

    cout << endl;

    // find
    itr = find(container.begin(), container.end(), 3);
    container.insert(itr, 128);

    for (auto& e : container) cout << e << " ";
    cout << endl;

    // sort
    sort(container.begin(), container.end());
    //li.sort(); 리스트는 클래스에 정렬이있다! container.sort();

    for (auto& e : container) cout << e << " ";
    cout << endl;

    // reverse
    reverse(container.begin(), container.end());
    //li.reverse(); -> container.reverse();

    for(auto & e : container) cout << e << " ";
    cout << endl;

    return 0;
}
