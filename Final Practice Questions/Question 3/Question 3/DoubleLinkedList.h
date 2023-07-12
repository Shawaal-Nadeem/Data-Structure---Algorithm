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
		if (head == nullptr && tail == nullptr)
		{
			Node*temp = new Node;
			temp->next = nullptr;
			temp->data = val;
			temp->prev = nullptr;
			head = temp;
			tail = temp;
		}
		else
		{
			
			//Prevention of same value
			Node*pointer = head;
			int flag = 0;
			while (pointer != nullptr)
			{
				if (pointer->data == val)
				{
					flag = 1;
				}
				pointer = pointer->next;
			}

			if (flag == 0)
			{
				Node*temp = new Node;
				temp->data = val;
				temp->next = nullptr;
				temp->prev = tail;
				tail->next = temp;
				tail = temp;
			}
		}

		// Ascending Order
		for (Node*trav_i = head; trav_i != nullptr; trav_i = trav_i->next)
		{
			for (Node*trav_j = head; trav_j != nullptr; trav_j = trav_j->next)
			{
				if (trav_i->data < trav_j->data)
				{
					int tempVal = trav_i->data;
					trav_i->data = trav_j->data;
					trav_j->data = tempVal;
				}
			}
		}

	}

	void countTriplets(int val)
	{
		cout << "Triplets of "<<val <<" are"<< endl;
		int count = 0;
		for (Node*temp_i = head; temp_i != nullptr; temp_i = temp_i->next)
		{
			for (Node*temp_j = temp_i->next; temp_j != nullptr; temp_j = temp_j->next)
			{
				for (Node*temp_k = temp_j->next; temp_k != nullptr; temp_k = temp_k->next)
				{
					if (temp_i->data + temp_j->data + temp_k->data == val)
					{
						cout << "{" << temp_i->data << "," << temp_j->data << "," << temp_k->data << "}" << endl;
						count++;
					}
				}
			}
		}
		cout << "Number of Triplets are : " << count << endl;
	}

	void display()
	{
		Node*temp = head;
		while (temp != nullptr)
		{
			cout << temp->data<<"->";
			temp = temp->next;
		}
		cout << endl;
	}
};