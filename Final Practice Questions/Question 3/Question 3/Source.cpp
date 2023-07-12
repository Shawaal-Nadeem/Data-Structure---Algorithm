#include"DoubleLinkedList.h"

int main()
{
	DoubleLinkedList obj;
	obj.insert(1);
	obj.insert(2);
	obj.insert(4);
	obj.insert(5);
	obj.insert(6);
	obj.insert(8);
	obj.insert(9);
	obj.display();
	obj.countTriplets(17);
	return 0;
}