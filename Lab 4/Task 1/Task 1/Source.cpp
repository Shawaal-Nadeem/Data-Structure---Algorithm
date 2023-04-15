#include"myLinkedList.h"

int main()
{
	myLinkedList obj;
	
	/*obj.insertAtFront(2);
	obj.insertAtEnd(6);
	obj.insertAtEnd(5);
	obj.removeFromFront();*/
	
	obj.insertAtFront(2);
	obj.insertAtEnd(6);
	obj.insertAtEnd(5);
	obj.removeFromEnd();


	obj.display();

	return 0;
}