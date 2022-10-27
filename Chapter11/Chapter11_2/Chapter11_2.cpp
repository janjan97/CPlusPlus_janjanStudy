// Chapter11_2.cpp : 상속의 기본 [2 / 2]
#include <iostream>
#include "Student.h"
#include "Teacher.h"

int main()
{
    Student std("Jan Jan");
    std.setName("Jan Jan 2");
    std::cout << std.getName() << std::endl;

    Teacher teacher1("Dr. H");
    teacher1.setName("Dr. K");

    std::cout << teacher1.getName() << std::endl;

    std::cout << std << std::endl;
    std::cout << teacher1 << std::endl;

    std.doNothing();
    teacher1.doNothing();

    std.study();
    teacher1.teach();
    
    Person person;
    person.setName("Mr. Incredible");
    person.getName();
    //자식클래스의 것을 부모클래스가 쓰지못함(study, teach)

}
