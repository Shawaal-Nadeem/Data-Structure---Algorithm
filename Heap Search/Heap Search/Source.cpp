#include"HeapTree.h"

int main()
{
	HeapTree obj(5);
	obj.insert(5);
	obj.insert(10);
	obj.insert(3);
	obj.insert(8);
	obj.insert(1);
	obj.display();
	obj.minHeap();
	return 0;
}