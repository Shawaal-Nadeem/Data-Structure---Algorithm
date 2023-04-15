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
	~LinkedList()
	{
	}
	virtual void insertAtFront(int value) = 0;
	virtual void insertAtEnd(int value) = 0;
	virtual int removeFromFront() = 0;
	virtual int removeFromEnd() = 0;
	virtual void display() = 0;
};

