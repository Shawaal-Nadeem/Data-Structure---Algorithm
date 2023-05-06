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
	
	void insertatLast(int val)
	{
		Node*temp = new Node;
		temp->data = val;
		if (head == nullptr && tail == nullptr)
		{
			temp->prev = nullptr;
			temp->next = nullptr;
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			temp->prev = tail;
			temp->next = nullptr;
			tail = temp;
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