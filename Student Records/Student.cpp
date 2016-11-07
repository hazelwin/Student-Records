// Student Records - Student.cpp

#include "Student.h"

namespace student
{
	Student::Student(int idNumber, std::string name, std::string course)
	{
		this->idNumber	= idNumber;
		this->name		= name;
		this->course = course;
	}
	void Student::setIdNumber(const int & idNumber)
	{
		this->idNumber = idNumber;
	}
	void Student::setName(const std::string name)
	{
		this->name = name;
	}
	void Student::setCourse(const std::string course)
	{
		this->course = course;
	}
}
