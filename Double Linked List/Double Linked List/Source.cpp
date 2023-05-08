#include"DoubleLinkedList.h"

int main()
{
	DoubleLinkedList obj;
	obj.insertatLast(10);
	obj.insertatLast(20);
	obj.insertatLast(30);
	obj.insertatLast(40);
	obj.insertatLast(50);
	obj.deleteatFirst();
	obj.deleteatFirst();
	obj.deleteatFirst();

	obj.display();
	return 0;
}