#include"myLinkedList.h"

int main()
{
	myLinkedList obj;
	obj.insertAtFront(1);
	obj.insertAtLast(2);
	obj.insertAtLast(3);
	obj.insertAtLast(4);
	obj.insertAtLast(5);
	obj.display();

	return 0;
}