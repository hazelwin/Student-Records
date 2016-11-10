// StudentList.cpp

#include "StudentList.h"

StudentList::StudentList()
	:head(NULL), size(0)
{}

void StudentList::addToHead(const value_type& id, const value_type& name, const value_type& course)
{
	StudentNode* newOne = new StudentNode(id, name, course);

	if (head == NULL) { head = newOne; }
	else
	{
		newOne->set_link(head);
		head = newOne;
	}

	size++;
}

void StudentList::printList(void)
{
	StudentNode* coursor = head;

	while (coursor != NULL)
	{
		std::cout << *coursor << std::endl;
		coursor = coursor->link();
	}
}

void StudentList::insert(const value_type& id, const value_type& name, const value_type& course)
{
	StudentNode* newNode = new StudentNode(id, name, course);

	// Case 1 - empty list
	if (head == NULL) {	head = newNode; }
	else
	{
		StudentNode* current = head;
		StudentNode* trail = NULL;

		// Traverse list to find insert location
		while (current != NULL)
		{
			if (current->id 
				>= newNode->id)
			{
				break;
			}
			else
			{
				trail = current;
				current = current->link();
			}
		}
		// Case 2 - insert at head (not empty)
		if (current == head)
		{
			newNode->set_link(head);
			head = newNode;
		}
		else
		{
			// Case 3 - insert after the head (not empty)
			newNode->set_link(current);
			trail->set_link(newNode);
		}

	}
	size++;
	std::cout << name << " has been added to the list." << std::endl;
}

void StudentList::deleteNode(const value_type& id, const value_type& name)
{
	StudentNode* newNode;

	// case 1 - empty list
	if (head == NULL)
	{
		errorEmptyList();


	}
	else
	{
		StudentNode* current = head;
		StudentNode* trail = NULL;

		// Traverse list to find node to delete
		while (current != NULL)
		{
			if (current->id == id) { break; } // found
			else // continue looking
			{
				trail = current;
				current = current->link();
			}
		}
		// case 2 - Node with "student" not found in list
		if (current == NULL)
		{
			errorStudentNotFound(name);
		}
		else
		{
			// case 3 - delete from the head node
			if (head == current) { head = head->link(); }
			// case 4 - delete from beyond head node
			else { trail->set_link(current->link()); }

			delete current;
			size--;

			std::cout	<< name 
						<< " has been deleted from the list." << std::endl;
		}
	}
}

void StudentList::addCourse(const value_type & id, const value_type & course)
{
	StudentNode* newNode;

	// case 1 - empty list
	if (head == NULL)
	{
		errorEmptyList();
	}
	else
	{
		StudentNode* current = head;
		StudentNode* trail = NULL;

		// Traverse list to find node to delete
		while (current != NULL)
		{
			if (current->id == id) // found
			{
				break;
			}
			else // continue looking
			{
				trail = current;
				current = current->link();
			}
		}
		// case 2 - Node with "student" not found in list
		if (current == NULL)
		{
			std::cout	<< "Student with student ID number:  \"" 
						<< id
						<< "\" not found!" 
						<< std::endl;
		}
		else
		{
			current->course = course;

			std::cout << course
				<< " has been added to student with ID number: "
				<< id << "."
				<< std::endl;
		}
	}
}

void StudentList::deleteCourse(const value_type & id, const value_type & course)
{
	StudentNode* newNode;

	// case 1 - empty list
	if (head == NULL)
	{
		errorEmptyList();
	}
	else
	{
		StudentNode* current = head;
		StudentNode* trail = NULL;

		// Traverse list to find node to delete
		while (current != NULL)
		{
			if (current->id == id) // found
			{
				break;
			}
			else // continue looking
			{
				trail = current;
				current = current->link();
			}
		}
		// case 2 - Node with "student" not found in list
		if (current == NULL)
		{
			std::cout	<< "Student with student ID number:  \"" 
						<< id
						<< "\" not found!" 
						<< std::endl;
		}
		else
		{
			current->course = "none";

			std::cout	<< course
						<< " has been deleted from student record with ID number: "
						<< id 
						<< "."
						<< std::endl;
		}
	}
}
