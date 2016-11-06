// Student Records - StudentNode.cpp

#include "StudentNode.h"

StudentNode::StudentNode
(const value_type& initial_data, StudentNode* initial_link)
	:data_field(initial_data), link_field(initial_link)
{}

std::ostream& operator<<(std::ostream& os, const StudentNode& s)
{
	return os << "ID: " << s.data_field.getIdNumber()
		<< "\nName: " << s.data_field.getName() << std::endl;
}