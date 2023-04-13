#pragma once
#include "LinkedList.h"

class myLinkedList : public LinkedList {
public:
	myLinkedList() : LinkedList() {}
	~myLinkedList() {}

	void LinkedList::insertAtStart(int value) {
		Node* temp = new Node;
		temp->data = value;
		temp->next = head;
		head = temp;
	}

	void LinkedList::display() {
		Node* temp = head;
		while (temp != nullptr) {
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
};
