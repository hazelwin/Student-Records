// StudentList.cpp

#include "StudentList.h"

StudentList::StudentList()
	:head(NULL), size(0)
{}

void StudentList::addToHead(const value_type& student)
{
	StudentNode* newOne = new StudentNode(student);

	if (head == NULL)
	{
		head = newOne;
	}
	else
	{
		//newOne->link_field = head;
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
		//coursor = coursor->link_field;
		coursor = coursor->link();
	}
	//std::cout << "Printing record..." << std::endl;
}

void StudentList::insert(const value_type& student)
{
	StudentNode* newNode = new StudentNode(student);

	// Case 1 - empty list
	if (head == NULL)
	{
		head = newNode;
	}
	else
	{
		StudentNode* current = head;
		StudentNode* trail = NULL;

		// Traverse list to find insert location
		while (current != NULL)
		{
			if (current->data_field.getIdNumber() 
				>= newNode->data_field.getIdNumber())
			{
				break;
			}
			else
			{
				trail = current;
				//current = current->link_field;
				current = current->link();
			}
		}
		// Case 2 - insert at head (not empty)
		if (current == head)
		{
			//newNode->link_field = head;
			newNode->set_link(head);
			head = newNode;
		}
		else
		{
			// Case 3 - insert after the head (not empty)
			//newNode->link_field = current;
			newNode->set_link(current);
			//trail->link_field = newNode;
			trail->set_link(newNode);
		}

	}
	size++;
	std::cout << student.getName() << " has been added to the list." << std::endl;
}

void StudentList::deleteNode(const int& id)
{
	// case 1 - empty list
	if (head == NULL)
	{
		std::cout << "Error: The list is empty." << std::endl;
	}
	else
	{
		StudentNode* current = head;
		StudentNode* trail = NULL;

		// Traverse list to find node to delete
		while (current != NULL)
		{
			if (current->data_field.getIdNumber() == id) // found
			{
				break;
			}
			else // continue looking
			{
				trail = current;
				//current = current->link_field;
				current = current->link();
			}
		}
		// case 2 - Node with "student" not found in list
		if (current == NULL)
		{
			std::cout << "Student with ID number: \"" << id 
				<< "\" not found!" << std::endl;
		}
		else
		{
			// case 3 - delete from the head node
			if (head == current)
			{
				//head = head->link_field;
				head = head->link();
			}
			// case 4 - delete from beyond head node
			else
			{
				//trail->link_field = current->link_field;
				//trail->set_link(current->link_field); // needs to use link() when implemented
				trail->set_link(current->link());
			}

			delete current;
			size--;

			std::cout	<< "Student with ID number " 
						<< id 
						<< " has been deleted from the list." 
						<< std::endl;
		}
	}
}