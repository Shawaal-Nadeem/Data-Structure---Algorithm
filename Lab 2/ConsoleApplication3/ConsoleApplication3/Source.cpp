#include"myList.h"

int main()
{
	char ar[5] = { 'A', 'B', 'C', 'B', 'B' };
	myList obj(ar, 5, 0);
	//obj.removeElementFromSpecificPositionList(2);
	//obj.firstRepeatingElement();
	cout << obj.firstNonRepeatingElement();
	obj.display();
	return 0;
}