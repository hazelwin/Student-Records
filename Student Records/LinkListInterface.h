#ifndef LINKLISTINTERFACE_LOCK
#define LINKLISTINTERFACE_LOCK

#include"StudentList.h"
//#include"Tools.h"

namespace linklistinterface
{
	void run(void);
	void displayCommands(void);
	void processCommands(StudentList* list, bool &running);
	void addStudent(StudentList* list);
	void deleteStudent(StudentList* list);
	void addCourse(StudentList* list);
	void deleteCourse(StudentList* list);
	void printStudentRecord(StudentList* list);
}

#endif