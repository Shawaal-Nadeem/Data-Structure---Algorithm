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
			temp->next = nullptr;
			temp->prev = nullptr;
			head = temp;
			tail = temp;
		}
		else
		{
			temp->next = nullptr;
			temp->prev = tail;
			tail->next = temp;
			tail = temp;
		}
	}
	int sum_of_list(Node*temp)
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
			x = x + sum_of_list(temp);
			return x;
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
		cout << "Sum of List are : " << sum_of_list(head) << endl;
	}
};