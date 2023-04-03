#include"MyList.h"

int main()
{
	char arr[3] = {'a','b','c'};
	MyList<char> obj(arr, 3);

	int ar[3] = { 1, 2, 3 };
	MyList<int>obj1(ar, 3);
	obj1.removeElementFromSpecificPositionList(1);
	obj.display();
	obj1.display();
	return 0;
}