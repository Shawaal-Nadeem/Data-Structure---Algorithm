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
		if (head == nullptr && tail==nullptr)
		{
			temp->next = nullptr;
			head = temp;
			tail = temp;
		}
		else
		{
			temp->next = head;
			head = temp;
		}
		
	}
	void LinkedList::insertAtLast(int val)
	{
		Node*temp = new Node;
		temp->data = val;
		temp->next = nullptr;
		if (head ==nullptr &&  tail==nullptr)
		{
			head = temp;
			tail = temp;
		}
			
			tail->next = temp;
			tail = temp;
		
	}
	int LinkedList::removeAtFront()
	{
		if (head == nullptr && tail==nullptr)
		{
			cout << "Link List already Empty" << endl;
		}
		else if (head == tail)
		{
			int data = head->data;
			delete head;
			head = nullptr;
			tail = nullptr;
			return data;
		}
		else
		{
			Node*temp = head;
			int val = temp->data;
			head = temp->next;
			delete temp;
			temp = nullptr;
			return val;
		}

	}
	int LinkedList::removeAtLast()
	{
		if (head == nullptr && tail == nullptr)
		{
			cout << "Link List already Empty" << endl;
		}
		else if (head == tail)
		{
			int data = head->data;
			delete head;
			head = nullptr;
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

	int LinkedList::size()
	{
		int s = 0;
		Node*temp = head;
		while (temp != nullptr)
		{
			temp = temp->next;
			s++;
		}
		return s;
	}

	void LinkedList::insertatspecificposition(int pos,int val)
	{
		Node*temp = head;
		Node*newNode = new Node;
		if (pos != 1 && pos != 2)
		{
			int count = 2;
			while (temp != nullptr)
			{
				count++;
				temp = temp->next;
				if (count == pos)
				{
					newNode->next = temp->next;
					temp->next = newNode;
				}
			}
			newNode->data = val;
		}
		
		else if (pos == 2)
		{
			newNode->next = head->next;
			head->next = newNode;
			newNode->data = val;
		}
		else if (pos==1)
		{
			newNode->next = head;
			head = newNode;
			newNode->data = val;
		}
	}

	int LinkedList::removeatspecificposition(int pos)
	{
		Node*temp = head;
		Node*p;
		int val;
		if (pos != 1 && pos != 2)
		{
			int count = 2;
			while (temp != nullptr)
			{
				count++;
				temp = temp->next;
				if (count == pos)
				{
					
					p = temp->next;
					val = p->data;
					temp->next = p->next;
					/*delete p;
					p = nullptr;*/
				}
			}
			return val;
		}

		else if (pos == 2)
		{
			p = head->next;
			val = p->data;
			head->next = p->next;
		}
		else if (pos == 1)
		{
			head = head->next;
		}
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

