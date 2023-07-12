#include"Node.h"

class LinkedList
{
	Node*head;
public:
	LinkedList()
	{
		head = nullptr;
	}
	void insert(int val)
	{
		Node*temp = new Node;
		temp->data = val;
		if (head == nullptr)
		{
			temp->next = nullptr;
			head = temp;
		}
		else
		{
			Node*trav = head;
			while (trav->next != nullptr)
			{
				trav = trav->next;
			}
			trav->next = temp;
			temp->next = nullptr;
		}
	}

	void display_ReverseOrder(Node*temp)
	{
		if (temp == nullptr)
		{
			return;
		}
		display_ReverseOrder(temp->next);
		cout << temp->data << "->";
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
		cout << "Reverse Order : " << endl;
		display_ReverseOrder(head);
		cout << endl;
	}
};