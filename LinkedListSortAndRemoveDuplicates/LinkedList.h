#pragma once
#include <iostream>
#include <string>
using namespace std;

struct node
{
	string title;
	int price;
	node* next;
};

class LinkedList
{
	node* head;
public:
	LinkedList()
	{
		head = nullptr;
	}
	void add(string t, int p)
	{
		node* temp = new node;
		temp->title = t;
		temp->price = p;
		temp->next = nullptr;

		if (head == nullptr)
		{
			head = temp;
		}
		else
		{
			temp->next = head;
			head = temp;
		}
	}

	void display()
	{
		for (node* i = head; i != nullptr; i = i->next)
		{
			cout << i->title << ": " << i->price << endl;
		}
	}

	void sort() //bubble sort
	{
		if (head->next != nullptr && head != nullptr) //Checking to see if more than 1 nodes exist
		{
			for (node* i = head; i != nullptr; i = i->next)
			{
				for (node* j = head; j->next != nullptr; j = j->next)
				{
					if (j->price > j->next->price)
					{
						//Same logic as
						//int temp;
						//temp = arr[j+1];
						//arr[j+1] = arr[j];
						//arr[j] = temp;

						node* temp = new node; //int temp;

						temp->title = j->next->title; //temp = arr[j+1];
						temp->price = j->next->price;

						j->next->title = j->title; //arr[j+1] = arr[j];
						j->next->price = j->price;

						j->title = temp->title; //arr[j] = temp;
						j->price = temp->price;
					}
				}
			}
		}
	}

	void removeDuplicates() //Removes the second duplicate
	{
		if (head->next != nullptr && head != nullptr) //Checking to see if more than 1 nodes exist
		{
			for (node* i = head; i->next != nullptr; i = i->next)
			{
				for (node* j = i->next; j != nullptr; j = j->next)
				{
					if (i->title == j->title)
					{
						node* temp = j->next;
						node* k;
						for (k = head; k->next != j; k = k->next);

						k->next = temp;
						delete j;
						j = temp;
					}
					//breaking out early if j becomes nullptr after deleting duplicate to prevent "j = j->next" because J is now nullptr
					if (j == nullptr) 
						break;
				}
				//breaking out early if i->next becomes nullptr after deleting duplicate to prevent "i = i->next" because i->next is now nullptr
				if (i->next == nullptr) 
					break;
			}
		}
	}

	void RemoveDuplicatesAndSort()
	{
		sort();
		removeDuplicates();
	}
};