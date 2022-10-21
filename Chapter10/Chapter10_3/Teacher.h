#pragma once

#include <string>

class Teacher
{
private:
	std::string m_name;
	//todo: more members like home address, salary, age..

public:
	Teacher(const std::string& name_in = "No name")//생성자
		: m_name(name_in)
	{}

	void setName(const std::string& name_in)
	{
		m_name = name_in;
	}

	std::string getName()
	{
		return m_name;
	}

	friend std::ostream & operator <<(std::ostream & out, const Teacher & teacher)
	{
		out << teacher.m_name;
		return out;
	}
};