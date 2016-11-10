#ifndef LINKLISTINTERFACE_LOCK
#define LINKLISTINTERFACE_LOCK

#include"StudentList.h"
//#include"Tools.h"

//void run(void);
//precondtion: none
//postcondition: test running is true to run loop

// void displayCommands(void);
//precondtion: none
//postcondition: display all commands

// void processCommands(StudentList* list, bool &running);
// precondtion: none
// postconidtion: cases to process the demands in displaycommands

// void addStudent(StudentList* list);
// preconidition: none
// postcondition: id, student name, and courses linked

// void deleteStudent(StudentList* list);
// precondition: none
// postcondtion: delete a student node

// void addCourse(StudentList* list);
// precondition: none
// postcondtion: add a course

// void deleteCourse(StudentList* list);
// precondition: none
// postcondtion: delete a course

// void printStudentRecord(StudentList* list);
// precondition:none
// postcondtion: print entire student record

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
