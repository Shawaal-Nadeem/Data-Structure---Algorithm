#include"Heap.h"
int main()
{
	HeapTree obj(7);
	obj.insert(1);
	obj.insert(5);
	obj.insert(3);
	obj.insert(2);
	obj.insert(6);
	obj.insert(7);
	obj.insert(4);
	obj.minHeap();
	return 0;
}