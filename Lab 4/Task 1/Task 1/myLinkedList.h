#pragma once
#include"LinkedList.h"
class myLinkedList:public LinkedList
{
public:
	myLinkedList() :LinkedList(){};
	~myLinkedList(){};

	void LinkedList::insertAtFront(int value)
	{
			Node*temp = new Node;
			temp->data = value;
			temp->next = head;
			head = temp;
			tail = temp;
	}

	void LinkedList::insertAtEnd(int value)
	{
		Node*temp = new Node;
		temp->data = value;
		temp->next = nullptr;
		tail->next = temp;
		tail = temp;
	}

	void LinkedList::display()
	{
		Node*temp = head;
		while (temp!= nullptr)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}

		cout << endl;
	}
};

