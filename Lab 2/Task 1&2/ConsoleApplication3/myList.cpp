#include "myList.h"


myList::myList() :List(){}
myList::myList(int*arrP, int ms, int cs) : List(arrP, ms, cs){}
myList::myList(const myList&obj) : List(obj){}
myList::~myList(){}
int myList::removeElementFromSpecificPositionList(int pos)
{
	int element = arr[pos];
	for (int i = pos; i<maxSize; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[maxSize - 1] = '\0';
	return element;
}

int myList::firstRepeatingElement()
{
	int alph;

	for (int i = 0; i < maxSize; i++)
	{
		for (int j = 0; j < maxSize; j++)
		{
			if (i != j)
			{
				if (arr[i] == arr[j])
				{
					alph = arr[i];
					break;
				}
			}	
		}
	}

	return alph;
}
int myList::firstNonRepeatingElement()
{
	int alpha;
	int j = 0;
	for (int i = 0; arr[i]!=arr[j]; i++)
	{
					alpha = arr[i];
					j++;
					break;
	}

	return alpha;
}
void myList::display()
{
	for (int i = 0; i<maxSize; i++)
	{
		cout << arr[i] << " ";
	}
}
