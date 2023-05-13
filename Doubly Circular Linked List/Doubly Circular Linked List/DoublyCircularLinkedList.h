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
		return 0;
	}
	int DoubleLinkedList::deleteatLast()
	{
		return 0;
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