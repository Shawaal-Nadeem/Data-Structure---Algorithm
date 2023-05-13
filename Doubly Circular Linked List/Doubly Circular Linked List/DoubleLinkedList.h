#include"Node.h"

class DoubleLinkedList
{
protected:
	Node*head;
	Node*tail;
public:
	DoubleLinkedList()
	{
		head = nullptr;
		tail = nullptr;
	}
	virtual void insertatFirst(int val) = 0;
	virtual void insertatLast(int val) = 0;
	virtual int deleteatFirst() = 0;
	virtual int deleteatLast() = 0;
	virtual void display() = 0;
};