#pragma once
#include"Node.h"
class LinkedList
{
protected:
	Node*head;
	Node*tail;
public:
	LinkedList()
	{
		head = nullptr;
		tail = nullptr;
	}
	 ~LinkedList(){};
	virtual void insertAtStart(int value) = 0;
	virtual void insertAtLast(int value) = 0;
	virtual int deleteFromStart() = 0;
	virtual int deleteFromEnd() = 0;
	virtual void display() = 0;
};

