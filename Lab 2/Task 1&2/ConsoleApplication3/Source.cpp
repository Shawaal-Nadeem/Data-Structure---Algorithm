#include"myList.h"

int main()
{
	int ar[5] = { 1, 2, 3, 2, 2 };
	myList obj(ar, 5, 0);
	//obj.removeElementFromSpecificPositionList(2);
	//cout << obj.firstRepeatingElement() << endl;;
	cout << obj.firstNonRepeatingElement() << endl;
	obj.display();
	return 0;
}