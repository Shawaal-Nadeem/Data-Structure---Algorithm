#include"LinkedList.h"

class myLinkedList:public LinkedList
{
public:
	myLinkedList() :LinkedList(){};
	void LinkedList::insertAtEnd(int val)
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

	bool LinkedList::isempty()
	{
		if (head == nullptr)
		{
			cout << "Link List is Empty" << endl;
			return true;
		}
		Node*trav = head;
		while (trav->next != nullptr)
		{
			trav = trav->next;
		}
		 if (trav == head)
		{
			 cout << "Link List is Empty" << endl;
			 return true;
		}
		 else
		 {
			 return false;
		 }
	}

	int LinkedList::deleteFromHead()
	{
		Node*temp = head;
		int val = head->data;
		head = head->next;
		return val;
	}

	void LinkedList::display()
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