#include"myLinkedList.h"

int main()
{
	myLinkedList obj;
	obj.insertAtStart(2);
	obj.insertAtLast(6);
	obj.insertAtLast(5);
	obj.deleteFromEnd();
	obj.deleteFromEnd();
	obj.deleteFromEnd();

	obj.display();
	return 0;
}