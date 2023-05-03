#include"myLinkedList.h"

int main()
{
	myLinkedList obj;
	obj.insertAtLast(1);
	obj.insertAtLast(2);
	obj.insertAtLast(3);
	obj.insertAtLast(4);
	obj.insertAtLast(5);
	obj.insertatspecificposition(1,20);
	obj.display();

	return 0;
}