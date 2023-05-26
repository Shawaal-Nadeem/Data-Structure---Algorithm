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

	bool checkPrime(int x)
	{
		if (x <= 1)
		{
			return false;
		}
		else if (x >= 2)
		{
			if (x == 2)
			{
				return true;
			}
			else 
			{
				for (int i = 2; i < x; i++) 
				{
					if (x % i == 0) 
					{
						return false;
					}
				}
				return true;
			}
			
		}
	}

	int product_of_prime(Node*temp)
	{
		if (head->next == nullptr && tail->next == nullptr)
		{
			if (checkPrime(head->data) == true)
			{
				return head->data;
			}
		}
		else
		{
			int x = 0;
			x = temp->data;
			if (temp != tail)
			{
				temp = temp->next;
			}
			if (checkPrime(x) == true)
			{
				if (temp == tail)
				{
					x = 1;
					cout << "x = " << x << endl;
					cout << "temp->data = " << temp->data << endl;
					return x = x * temp->data;
				}
				else
				{
					return x * product_of_prime(temp);
				}
			}
			else
			{
				product_of_prime(temp);
			}
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
		cout << "Product of List are : " << product_of_prime(head) << endl;
	}
};