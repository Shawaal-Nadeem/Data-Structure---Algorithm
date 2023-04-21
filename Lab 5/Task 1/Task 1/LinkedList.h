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
	virtual void insertAtFront(int val) = 0;
	virtual void insertAtLast(int val) = 0;
	virtual int removeAtFront() = 0;
	virtual int removeAtLast() = 0;
	virtual void display() = 0;
	//virtual void insertAtSpecificPosition(Type, Type) = 0;
};

