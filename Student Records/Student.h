// Student Records - Student.h

#ifndef	STUDENT_LOCK
#define STUDENT_LOCK

#include<string>

//using namespace course_namespace;
namespace student
{
	class Student
	{
	public:
		Student(int idNumber = 0, std::string name = "unknown", std::string course = "none");

		// SET FUNCTIONS
		void setIdNumber(const int& idNumber);
		void setName(const std::string name);
		void setCourse(const std::string course);
		
		// GET FUNCTIONS
		int getIdNumber(void) const { return idNumber; }
		std::string getName(void) const { return name; }
		std::string getCourse(void) const { return course; }

	private:
		int idNumber;
		std::string name;
		std::string course;
	};
}

#endif