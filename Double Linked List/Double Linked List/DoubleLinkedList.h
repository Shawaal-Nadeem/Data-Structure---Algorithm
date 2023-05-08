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

	void insertatFirst(int val)
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
			head->prev = temp;
			temp->next = head;
			temp->prev = nullptr;
			head = temp;
			
		}
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

	int deleteatLast()
	{
		Node*temp = head;
		while (temp->next != tail)
		{
			temp = temp->next;
		}
		temp->next = nullptr;
		int val = tail->data;
		tail = temp;
		return val;
	}

	int deleteatFirst()
	{
		Node*temp = head;
		int val = temp->data;
		head = temp->next;
		head->prev = nullptr;
		return val;
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