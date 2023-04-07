#include"myList.h"

int main()
{
	int ar[8] = { -4, -3, 1, -2, 1,1,-3,-5 };
	myList obj(ar, 8, 0);
	//obj.removeElementFromSpecificPositionList(2);
	//cout << obj.firstRepeatingElement() << endl;;
	//cout << obj.firstNonRepeatingElement() << endl;
	obj.countFrequencyOfEachElement();
	obj.display();
	return 0;
}