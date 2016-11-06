// Student Records - Student.cpp

#include "Student.h"

namespace student
{
	Student::Student(int idNumber, std::string name)
	{
		this->idNumber	= idNumber;
		this->name		= name;
	}
	void Student::setIdNumber(const int & idNumber)
	{
		this->idNumber = idNumber;
	}
	void Student::setName(const std::string name)
	{
		this->name = name;
	}
}
