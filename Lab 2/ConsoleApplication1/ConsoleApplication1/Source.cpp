#include "MyList.h"

int main()
{
	/*int arr[5] = { 2, 5, 3, 4, -1 };
	MyList<int> myList(arr, 5, 0);*/
	char arr[5] = { 'a', 'b', 'c', 'd', 'e' };
	MyList<char>obj(arr, 5);
	obj.displayArray();

	return 0;
}
