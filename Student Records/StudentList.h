// ContactList.h

#ifndef STUDENTLIST_LOCK
#define STUDENTLIST_LOCK

#include"StudentNode.h"

class StudentList
{
public:
	typedef Student value_type;

	StudentList();
	void addToHead(const value_type& name = value_type());
	void printList(void);
	void insert(const value_type& name = value_type());
	void deleteNode(const int& id);

private:
	StudentNode* head;
	int size;
};

#endif