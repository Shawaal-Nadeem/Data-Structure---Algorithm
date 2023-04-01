#include "MyList.h"

int main()
{
	int arr[5] = { 2, 5, 3, 4, -1 };
	MyList<int> myList(arr, 5, 5);
	myList.displayArray();

	return 0;
}
