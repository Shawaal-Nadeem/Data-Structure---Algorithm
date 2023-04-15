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
		tail = head;
	}

	int LinkedList::deleteAtFront()
	{
		if (head == nullptr && tail==nullptr)
		{
			cout << "List is already Empty." << endl;
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

	int LinkedList::deleteAtEnd()
	{
		if (head == nullptr && tail == nullptr)
		{
			cout << "List is already Empty." << endl;
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

	int LinkedList::front()
	{
		Node*temp = head;
		int data = temp->data;
		return data;
	}

	int LinkedList::end()
	{
		Node*temp = tail;
		int data = temp->data;
		return data;
	}

	bool LinkedList::empty()
	{
		if (head == nullptr && tail == nullptr)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int LinkedList::size()
	{
		Node*temp = head;
		int count = 0;
		while (temp != nullptr)
		{
			temp = temp->next;
			count++;
		}
		return count;
	}

	void LinkedList::display()
	{
		Node*temp = head;
		while (temp != nullptr)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << endl;
	}

	void LinkedList::insertAtEnd(int value)
	{
		Node*temp = new Node;
		temp->data = value;
		temp->next = nullptr;
		tail->next = temp;
		tail = temp;
	}
};

