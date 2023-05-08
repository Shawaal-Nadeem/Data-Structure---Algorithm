#include"Node.h"

class LinkedList
{
protected:
	Node*head;
public:
	LinkedList()
	{
		head = nullptr;
	}
	virtual void insertAtEnd(int val) = 0;
	virtual int deleteFromHead() = 0;
	virtual bool isempty() = 0;
	virtual void display() = 0;
};