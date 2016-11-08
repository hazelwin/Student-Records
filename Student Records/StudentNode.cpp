// StudentNode.cpp

#include "StudentNode.h"

StudentNode::StudentNode
(const value_type& id, const value_type& name, const value_type& course, StudentNode* initial_link)
{
	this->id = id;
	this->name = name;
	this->course = course;
	this->link_field = initial_link;
}

std::ostream& operator<<(std::ostream& os, const StudentNode& s)
{
	return os << "ID: " << s.id 
		<< "\nName: "	<< s.name 
		<< "\nCourse: " << s.course 
		<< std::endl;
}
