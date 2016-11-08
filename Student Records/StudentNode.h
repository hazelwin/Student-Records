// StudentNode.h

#ifndef STUDENTNODE_LOCK
#define STUDENTNODE_LOCK

#include<iostream>
#include<string>

class StudentNode
{
	// FRIEND CLASS AND FUNCTIONS
	friend std::ostream& operator<<(std::ostream&, const StudentNode&);
	friend class StudentList;

public:
	// TYPEDEF
	typedef std::string value_type;

	// CONSTRUCTOR
	StudentNode(const value_type& id, const value_type& name, const value_type& course, 
		StudentNode* initial_link = NULL);
	// Member functions to set the data and link fields:
	void set_data(const value_type& new_data)	{ name = new_data; } //currently not in use
	void set_link(StudentNode* new_link)		{ link_field = new_link; }

	// Constant memeber function to retrieve the current data:
	value_type data(void) const { return name; } //currently not in use

	// Functions to retrieve the current link.
	const StudentNode* link() const { return link_field; }
	StudentNode* link()				{ return link_field; }
private:
	//std::string name; // dataField
	value_type id;
	value_type name;
	value_type course;
	//StudentNode* next; // linkField
	StudentNode* link_field;
};

#endif