#include "LinkListInterface.h"
using namespace std;

namespace linklistinterface
{ // namespace open
	void run(void)
	{ // run open
		cout << "Welcome!" << endl;
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
		cout << "Legal Commands:" << endl;
		cout << "a - add student" << endl;
		cout << "b - delete student" << endl;
		cout << "c - add course" << endl;
		cout << "d - delete course" << endl;
		cout << "p - print student record" << endl;
		cout << "q - quit" << endl;
	} // displayCommand close

	void processCommands(StudentList* list, bool &running)
	{ // processCommands open
		cout << endl;

		switch (getChar("Enter a command to edit list: "))
		{
		case 'a': addStudent(list);				break;
		case 'b': deleteStudent(list);			break;
		case 'c': addCourse(list) ;				break;
		case 'd': deleteCourse(list);			break;
		case 'p': printStudentRecord(list);		break;
		case 'q': running = false;				break;
		default: displayCommands();				break;
		}
	} // processCommands close

	void addStudent(StudentList * list)
	{
		
		std::string id(
			getString("Enter student ID number: "));
		std::string name(
			getStringLine("Enter the name of the student: "));
		std::string course(
			getStringLine("Enter a course name: ")); // **update for course**
		

		list->insert(id, name, course);
	}

	void deleteStudent(StudentList * list)
	{
		std::string id = getString("Enter the ID number for the student that you wish to delete: ");
		std::string name = getString("Enter the students name: ");
		list->deleteNode(id, name);
		
	}

	void addCourse(StudentList * list)
	{
		std::string id = getString("Enter ID number of the student record you wish to edit: ");
		std::string course = getStringLine("Enter course name: ");

		list->addCourse(id, course);
	}

	void deleteCourse(StudentList * list)
	{
		std::string id = getString("Enter ID number of the student record you wish to edit: ");
		std::string course = getStringLine("Enter course name: ");
		list->deleteCourse(id, course);
	}

	void printStudentRecord(StudentList * list)
	{
		list->printList();
	}

} // namespace close
