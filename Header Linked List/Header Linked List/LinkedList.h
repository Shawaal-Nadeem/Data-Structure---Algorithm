#include"Node.h"

int count = 0;
class LinkedList
{
protected:
	Node*header;
public:
	LinkedList()
	{
		Node*temp = new Node;
		temp->data = ::count;
		temp->next = nullptr;
		header = temp;
	}
	virtual void insertatFirst(int val)=0;
	virtual void insertatLast(int val)=0;
	virtual int deleteatFirst()=0;
	virtual void display()=0;
};