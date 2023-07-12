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
		Node*temp = new Node;
		temp->data = val;
		if (head == nullptr && tail == nullptr)
		{
			head = temp;
			tail = temp;
			temp->prev = temp->next = nullptr;
		}
		else
		{
			tail->next = temp;
			temp->prev=tail;
			temp->next = nullptr;
			tail = temp;
		}
	}

	int sum_of_List(Node*temp)
	{
		if (head->next == nullptr && tail->next == nullptr)
		{
			return head->data;
		}

		else
		{
			int x = 0;
			if (temp == tail)
			{
				return x = x + temp->data;
			}
			x = temp->data;
			temp = temp->next;
			x = x + sum_of_List(temp);
		}
	}

	void display_EvenNumbers()
	{
		cout << "Even Numbers are : ";
		Node*temp = head;
		while (temp!=nullptr)
		{
			if (temp->data % 2 == 0)
			{
				cout << temp->data<<" ";
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
		cout << sum_of_List(head) << endl;
		display_EvenNumbers();
		cout << endl;
	}
};