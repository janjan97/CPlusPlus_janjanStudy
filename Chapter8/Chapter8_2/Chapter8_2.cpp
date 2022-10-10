// Chapter8_2.cpp : 캡슐화, 접근 지정자, 접근함수 
//(Encapsulation, Access Specifiers, Access Functions)
#include <iostream>

using namespace std;

class Date
{
//public: // access specifier (default는 private)
    int m_month;
    int m_day;
    int m_year;

public: 
    //접근함수
    void setDate(const int& month_input, const int& day_input, const int& year_input)
    {
        m_month = month_input;
        m_day = day_input;
        m_year = year_input;
    }

    const int getDay()
    {
        return m_day;
    }

    void copyFrom(const Date& original)
    {
        m_month =   original.m_month;
        m_day =     original.m_day;
        m_year =    original.m_year;
    }
};

int main()
{
    Date today; // { 8, 4, 2025 }; uniform
    /*today.m_month = 8;
    today.m_day = 4;
    today.m_year = 2025;
    */
    today.setDate(12, 1, 2025);

    //cout << today.getDay() << endl;
    
    Date copy;
    copy.copyFrom(today);

    return 0;
}

