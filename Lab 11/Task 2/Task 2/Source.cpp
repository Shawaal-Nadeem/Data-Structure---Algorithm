#include"HeapTree.h"

int main()
{
	HeapTree obj(5);

	obj.insert(4);
	obj.insert(6);
	obj.insert(10);
	obj.insert(9);
	obj.insert(2);
	obj.display();
	obj.min_Heap();
	obj.delete_min_Heap();
	obj.delete_min_Heap();
	/*obj.max_Heap();*/
	return 0;
}