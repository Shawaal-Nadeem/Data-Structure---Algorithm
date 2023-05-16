#include"LinkedList.h"

class HeaderLinkedList:public LinkedList
{
public:
	HeaderLinkedList():LinkedList(){};
	void LinkedList::insertatFirst(int val)
	{
		Node*temp = new Node;
		temp->data = val;
		temp->next = header->next;
		header->next = temp;
		::count++;
	}

	void insertatLast(int val)
	{
		Node*temp = new Node;
		temp->data = val;
		temp->next = nullptr;
		Node*trav = header;
		while (trav->next != nullptr)
		{
			trav = trav->next;
		}
		trav->next = temp;
		::count++;
	}

	int LinkedList::deleteatFirst()
	{
		Node*temp = header->next;
		int val = temp->data;
		header->next = temp->next;
		::count--;
		return val;
	}


	void LinkedList::display()
	{
		Node*temp = header->next;
		cout << "Number of Nodes in Linked List are : " << ::count << endl;
		while (temp != nullptr)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << endl;
	}
};