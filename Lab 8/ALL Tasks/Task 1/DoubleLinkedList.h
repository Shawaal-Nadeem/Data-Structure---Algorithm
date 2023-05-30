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
	// Task 1
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

	// Task 2
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

	// Task 3
	void display_Even_numbers(Node*temp)
	{
		if (temp->data % 2 == 0)
		{
			cout << temp->data<<" ";
			temp = temp->next;
			if (temp != tail)
			{
				display_Even_numbers(temp);
			}
		}
		else
		{
			temp = temp->next;
			if (temp != tail)
			{
				display_Even_numbers(temp);
			}
		}
	}

	// Task 4
	void occurance_of_key(Node*temp,int key)
	{
		if (temp->data == key)
		{
			cout << key << " exist in Linked List. " << endl;
		}
		else
		{
			if (temp != tail)
			{
				temp = temp->next;
				occurance_of_key(temp, key);
			}
		}

	}

	void reverse_of_List()
	{
		Node*temp = head;
		while (temp != nullptr)
		{
			Node* nextNode = temp->next;
			temp->next = temp->prev;
			temp->prev = nextNode;
			temp = nextNode;
		}
		Node*tempPointer = head;
		head = tail;
		tail = tempPointer;
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
		cout << "Even Numbers in List are : "; 
		display_Even_numbers(head);
		cout << endl;
		int key;
		cout << "Enter Key : ";
		cin >> key;
		cout << endl;
		occurance_of_key(head, key);
	}
};