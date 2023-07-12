#include"Node.h"

class DoubleLinkedList
{
	Node*head;
	Node*tail;
public:
	DoubleLinkedList()
	{
		head = nullptr;
		tail = nullptr;
	}
	void insert(int val)
	{	
		if (head == nullptr && tail == nullptr)
		{
			Node*temp = new Node;
			temp->next = nullptr;
			temp->data = val;
			temp->prev = nullptr;
			head = temp;
			tail = temp;
		}
		else
		{
			
			//Prevention of same value
			Node*pointer = head;
			int flag = 0;
			while (pointer != nullptr)
			{
				if (pointer->data == val)
				{
					flag = 1;
				}
				pointer = pointer->next;
			}

			if (flag == 0)
			{
				Node*temp = new Node;
				temp->data = val;
				temp->next = nullptr;
				temp->prev = tail;
				tail->next = temp;
				tail = temp;
			}
		}

		// Ascending Order
		for (Node*trav_i = head; trav_i != nullptr; trav_i = trav_i->next)
		{
			for (Node*trav_j = head; trav_j != nullptr; trav_j = trav_j->next)
			{
				if (trav_i->data < trav_j->data)
				{
					int tempVal = trav_i->data;
					trav_i->data = trav_j->data;
					trav_j->data = tempVal;
				}
			}
		}

	}

	void display()
	{
		Node*temp = head;
		while (temp != nullptr)
		{
			cout << temp->data<<"->";
			temp = temp->next;
		}
		cout << endl;
	}
};