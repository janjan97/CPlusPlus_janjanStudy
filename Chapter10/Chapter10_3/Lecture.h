#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	std::string m_name;

	Teacher* teacher;
	std::vector<Student*> students; //학생 다수

public:
	Lecture(const std::string & name_in)
		: m_name(name_in)
	{}

	~Lecture()
	{
		//do not delete teacher
		//do not delete students
	}

	//포인터
	void assignTeacher(Teacher * const teacher_input) // *, const제거
	{
		teacher = teacher_input;
	}

	void registerStudent(Student * const student_input)
	{
		students.push_back(student_input);
	}

	void study()
	{
		std::cout << m_name << "Study " << std::endl << std::endl;

		// value가 아닌 포인터
		for (auto& element : students)
			(* element).setIntel((* element).getIntel() + 1); //(* element) *(역참조)
	}

	friend std::ostream& operator << (std::ostream& out, const Lecture& lecture)
	{
		out << "Lecture name: " << lecture.m_name << std::endl;

		out << lecture.teacher << std::endl;
		for (auto element : lecture.students)
			out << *element << std::endl; //element는 주소자체를 출력함

		return out;
	}
};