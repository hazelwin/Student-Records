// StudentList.h

#ifndef STUDENTLIST_LOCK
#define STUDENTLIST_LOCK

#include"StudentNode.h"

//StudentList();
// precondtion: none
// postcondtion: default constructor set head to null and size to 0

// void addToHead(const value_type& id, const value_type& name, const value_type& course);
// precondtion: if head is equal to null
// postcondtion: set head equal to new node, increment size

// void printList(void);
// precondtion: run only while cursor is not equal to null
// postcondtion: coursor is linked to next node

// void insert(const value_type& id, const value_type& name, const value_type& course);
// precondtion: empty list and head is null 
// postcondtion: traverse case to new location

// void deleteNode(const value_type& id, const value_type& name);
// precondtion: if head and current is not null 
// postcondtion: traverse node to delete it

// void addCourse(const value_type& id, const value_type& course);
// precondtion: if head and current is not null 
// postcondtion: traverse list to find node to delete 

// void deleteCourse(const value_type& id, const value_type& course);
// precondtion: if head and current is not null 
// postcondtion: delete course from student's records

class StudentList
{
public:
	typedef std::string value_type;

	StudentList();
	void addToHead(const value_type& id, const value_type& name, const value_type& course);
	void printList(void);
	void insert(const value_type& id, const value_type& name, const value_type& course);
	void deleteNode(const value_type& id, const value_type& name);
	void addCourse(const value_type& id, const value_type& course);
	void deleteCourse(const value_type& id, const value_type& course);

private:
	StudentNode* head;
	int size;
};

#endif
