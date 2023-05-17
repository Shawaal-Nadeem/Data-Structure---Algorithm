#include"Node.h"

class LinkedList
{
	Node*head;
	Node*tail;
public:
	LinkedList()
	{
		head = nullptr;
		tail = nullptr;
	}
	void insertatLast(int val)
	{
		Node*temp = new Node;
		temp->data = val;
		temp->next = nullptr;
		if (head == nullptr && tail == nullptr)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}

	void sortLinkedList()
	{
		Node*temp = head;
		Node*p = head;
		int dum=0;
		while (temp != nullptr)
		{
			while (p != nullptr)
			{
				if (temp->data < p->data)
				{
					dum = temp->data;
					temp->data = p->data;
					p->data = dum;
				}
				p = p->next;
			}
			temp = temp->next;
		}
	}

	void display()
	{
		Node*temp = head;
		while (temp != nullptr)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << endl;
	}
};