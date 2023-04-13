#pragma once
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
	 ~LinkedList(){};
	virtual void insertAtStart(int value) = 0;;
	virtual void display() = 0;
};

