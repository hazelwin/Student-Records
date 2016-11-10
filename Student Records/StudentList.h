// StudentList.h

#ifndef STUDENTLIST_LOCK
#define STUDENTLIST_LOCK

#include"StudentNode.h"

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