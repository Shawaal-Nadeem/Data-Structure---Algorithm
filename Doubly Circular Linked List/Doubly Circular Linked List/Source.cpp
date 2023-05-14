#include"DoublyCircularLinkedList.h"

int main()
{
	DoublyCircularLinkedList obj;
	obj.insertatLast(1);
	obj.insertatLast(2);
	obj.insertatLast(3);
	obj.insertatLast(4);
	obj.insertatLast(5);
	obj.deleteatFirst();
	obj.deleteatFirst();
	obj.deleteatFirst();
	obj.deleteatFirst();
	obj.deleteatFirst();

	obj.display();
	return 0;
}