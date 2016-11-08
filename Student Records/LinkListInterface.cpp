#include "LinkListInterface.h"
using namespace std;

namespace linklistinterface
{ // namespace open
	void run(void)
	{ // run open
		cout << "Welcome!" 
			 << endl;
		cout << endl;
		cout << "A new student linked list has been created..." 
			 << endl;
		cout << endl;

		StudentList* list1 = new StudentList();

		bool running = true;

		do
		{
			processCommands(list1, running);
		} while (running);
	} // run close
	void displayCommands(void)
	{ // displayCommand open
		cout << endl;
		cout << "Legal Commands:"			<< endl;
		cout << "a - add student"			<< endl;
		cout << "b - delete student"		<< endl;
		cout << "c - add course"			<< endl;
		cout << "d - delete course"			<< endl;
		cout << "p - print student record"	<< endl;
		cout << "q - quit"					<< endl;
	} // displayCommand close

	void processCommands(StudentList* list, bool &running)
	{ // processCommands open
		cout << endl;

		switch (getChar("Enter a command to edit list: "))
		{
		case 'a': addStudent			(list);			break;
		case 'b': deleteStudent			(list);			break;
		case 'c': addCourse				(list) ;		break;
		case 'd': deleteCourse			(list);			break;
		case 'p': printStudentRecord	(list);			break;
		case 'q': running = false;						break;
		default: displayCommands();						break;
		}
	} // processCommands close

	void addStudent(StudentList * list)
	{
		Student newStudent;
		newStudent.setIdNumber(
			getInt("Enter student ID number: "));
		newStudent.setName(
			getStringLine("Enter the name of the student: "));
		newStudent.setCourse(
			getStringLine("Enter a course name: "));

		list->insert(newStudent);
	}

	void deleteStudent(StudentList * list)
	{
		list->deleteNode(getInt("Enter the students ID number: "));
		
	}

	void addCourse(StudentList * list)
	{
		cout << "Adding course..." << endl;
	}

	void deleteCourse(StudentList * list)
	{
		cout << "Deleting course..." << endl;
	}

	void printStudentRecord(StudentList * list)
	{
		list->printList();
	}

} // namespace close
