// Chapter8_9.cpp : 클래스와 const
#include <iostream>
using namespace std;

class Something
{
public:
    //int m_value = 0;
    string m_value = "default";
    /*
    // #1
    Something(const Something& st_in)
    {
        m_value = st_in.m_value;
        cout << "Copy Constructor" << endl;
    }

    Something()
    {
        cout << "Constructor" << endl;
    }


    void setValue(int value) { m_value = value; }
    int getValue() const //const 함수 안의 값은 바꾸지 않는다.
    { 
        return m_value; 
    }*/

    const string& getValue() const // const, return 타입도 const
    {
        cout << "const version" << endl;
        return m_value;
    }
    string& getValue()
    {
        cout << "non-const version" << endl;
        return m_value;
    }
};
/*
// #1
void print(const Something &st)
{
    cout << &st << endl;
    cout << st.getValue() << endl;
}*/
int main()
{
    Something something;
    something.getValue(); // = 10; 으로 수정가능

    const Something something2;
    something2.getValue(); // = 10;으로 수정불가 (const)
    
    //cout << &something << endl;

    //print(something);
    

    return 0;
}

