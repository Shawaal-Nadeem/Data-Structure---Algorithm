#pragma once
#include"LinkedList.h"
class myLinkedList:public LinkedList
{
public:
	myLinkedList() :LinkedList(){};
	~myLinkedList(){};
	void LinkedList::insertAtFront(int val)
	{
		Node*temp = new Node;
		temp->data = val;
		temp->next = head;
		head = temp;
		tail = temp;
	}
	void LinkedList::insertAtLast(int val)
	{
		Node*temp = new Node;
		temp->data = val;
		temp->next = nullptr;
		tail->next = temp;
		tail = temp;
	}
	int LinkedList::removeAtFront()
	{
		Node*temp = head;
		int val = temp->data;
		head = temp->next;
		return val;
	}
	int LinkedList::removeAtLast()
	{
		Node*temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		int val = temp->data;
		tail = temp;
		return val;
	}
	void LinkedList::display()
	{
		Node*temp = head;
		while (temp!= nullptr)
		{
			cout << temp->data<<"->";
			temp = temp->next;
		}
		cout << endl;
	}
};

