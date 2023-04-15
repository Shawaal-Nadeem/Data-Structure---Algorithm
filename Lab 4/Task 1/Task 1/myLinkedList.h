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

	int LinkedList::removeFromFront()
	{
		if (head == nullptr && tail == nullptr)
		{
			cout << "List is Empty." << endl;
			return NULL;
		}
		else if (head == tail)
		{
			Node*temp = head;
			int data = temp->data;
			delete head;
			head = nullptr;
			return data;
		}
		else
		{
			Node*temp = head;
			int data = temp->data;
			head = temp->next;
			return data;
		}
	}

	int LinkedList::removeFromEnd()
	{
		if (head == nullptr && tail == nullptr)
		{
			cout << "List is Empty." << endl;
			return NULL;
		}
		else if (head == tail)
		{
			Node*temp = head;
			int data = temp->data;
			delete head;
			head = nullptr;
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

