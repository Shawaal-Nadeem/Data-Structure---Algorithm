#include"DoubleLinkedList.h"

class DoublyCircularLinkedList:public DoubleLinkedList
{
public:
	DoublyCircularLinkedList() :DoubleLinkedList(){};
	void DoubleLinkedList::insertatFirst(int val)
	{
		Node*temp = new Node;
		temp->data = val;
		if (head == nullptr && tail == nullptr)
		{
			head = temp;
			tail = temp;
			temp->prev = nullptr;
			temp->next = head;
		}
		else
		{
			temp->prev = tail;
			temp->next = head;
			head->prev = temp;
			head = temp;
		}
	}
	void DoubleLinkedList::insertatLast(int val)
	{
		Node*temp = new Node;
		temp->data = val;
		if (head == nullptr && tail == nullptr)
		{
			head = temp;
			tail = temp;
			temp->prev = nullptr;
			temp->next = head;
		}
		else
		{
			temp->prev = tail;
			temp->next = head;
			tail->next = temp;
			tail = temp;
		}
	}
	int DoubleLinkedList::deleteatFirst()
	{
		Node*temp = head->next;
		temp->prev = nullptr;
		int val = head->data;
		head = temp;
		return val;
	}
	int DoubleLinkedList::deleteatLast()
	{
		Node*temp = head;
		while (temp->next != tail)
		{
			temp = temp->next;
		}
		int val = tail->data;
		temp->next = nullptr;
		tail = temp;
		return val;
	}
	void DoubleLinkedList::display()
	{
		Node*temp = head;
		while (temp != tail)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << temp->data;
		cout << endl;
	}
};