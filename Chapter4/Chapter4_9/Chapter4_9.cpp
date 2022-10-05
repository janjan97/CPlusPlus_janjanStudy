// 자료형에게 가명 붙여주기.

#include <iostream>
#include <vector>
#include <cstdint>
#include <string>

using namespace std;

int main()
{
    typedef double distance_t;

    double my_distance;
    distance_t home2work;
    distance_t home2school;

    /*
    vector<pair<string, int>> pairlist1;
    vector<pair<string, int>> pairlist2;
    */

    typedef vector<pair<string, int>> pairlist_t;
    pairlist_t pairlist1;
    pairlist_t pairlist2;

    return 0;
}
