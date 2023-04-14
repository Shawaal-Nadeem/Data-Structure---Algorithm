#pragma once
#include "LinkedList.h"

class myLinkedList : public LinkedList {
public:
	myLinkedList() : LinkedList() {}
	~myLinkedList() {}

	void LinkedList::insertAtStart(int value) 
	{
		Node* temp = new Node;
		temp->data = value;
		temp->next = head;
		head = temp;
		tail = temp;
	}

	virtual void insertAtLast(int value)
	{
		Node*temp = new Node;
		temp->data = value;
		temp->next = nullptr;
		
		tail->next = temp;
		tail = temp;
	}

	int LinkedList::deleteFromStart()
	{
		if (head == tail)
		{
			int data = head->data;
			delete head;
			head = nullptr;
			/*delete tail;*/
			tail = nullptr;
			return data;
		}
		else
		{
			int data = head->data;
			head = head->next;
			return data;
		}
	}

	int LinkedList::deleteFromEnd()
	{
		if (head == tail)
		{
			int data = head->data;
			delete head;
			head = nullptr;
			/*delete tail;*/
			tail = nullptr;
			return data;
		}
		else
		{
			Node*temp = head;
			int data = tail->data;
			while (temp->next != tail)
			{
				temp = temp->next;
			}

			tail = temp;
			tail->next = nullptr;
			return data;
		}
	}

	void LinkedList::display() {
		Node* temp = head;
		while (temp != nullptr) {
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
};
