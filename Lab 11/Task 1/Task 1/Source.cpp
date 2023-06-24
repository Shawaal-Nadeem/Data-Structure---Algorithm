#include"HeapTree.h"

int main()
{
	HeapTree obj(11);
	obj.insert(3);
	obj.insert(5);
	obj.insert(8);
	obj.insert(10);
	obj.insert(17);
	obj.insert(11);
	obj.insert(13);
	obj.insert(19);
	obj.insert(22);
	obj.insert(24);
	obj.insert(29);
	obj.display();
	obj.leafNodes();
	obj.minHeap();
	/*obj.maxHeap();*/
	return 0;
}