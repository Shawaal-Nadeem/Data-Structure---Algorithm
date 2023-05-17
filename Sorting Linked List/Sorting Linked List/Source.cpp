#include"LinkedList.h"

int main()
{
	LinkedList obj;
	obj.insertatLast(1);
	obj.insertatLast(3);
	obj.insertatLast(2);
	obj.insertatLast(5);
	obj.insertatLast(4);
	obj.sortLinkedList();
	obj.display();
	return 0;
}