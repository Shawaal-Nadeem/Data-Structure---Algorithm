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
	~LinkedList(){}

	virtual void insertAtFront(int value) = 0;
	virtual void insertAtEnd(int value) = 0;
	virtual int deleteAtFront() = 0;
	virtual int deleteAtEnd() = 0;
	virtual int front() = 0;
	virtual int end() = 0;
	virtual bool empty() = 0;
	virtual int size() = 0;
	virtual void display() = 0;
};

