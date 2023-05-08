#include"myLL.h"

int main()
{
	myLinkedList obj;
	obj.insertAtEnd(1);
	obj.insertAtEnd(2);
	obj.insertAtEnd(3);
	obj.insertAtEnd(4);
	obj.insertAtEnd(5);
	obj.deleteFromHead();
	obj.deleteFromHead();
	
	obj.isempty();
	
	obj.display();
	return 0;
}