#include"HeaderLinkedList.h"

int main()
{
	HeaderLinkedList obj;
	obj.insertatLast(1);
	obj.insertatLast(2);
	obj.insertatLast(3);
	obj.insertatLast(4);
	obj.insertatLast(5);
	obj.deleteatLast();
	obj.display();

	return 0;
}