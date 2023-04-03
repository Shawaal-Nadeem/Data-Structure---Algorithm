#include "myList.h"


myList::myList() :List(){}
myList::myList(char*arrP, int ms, int cs) : List(arrP, ms, cs){}
myList::myList(const myList&obj) : List(obj){}
myList::~myList(){}
char myList::removeElementFromSpecificPositionList(int pos)
{
	char element = arr[pos];
	for (int i = pos; i<maxSize; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[maxSize - 1] = '\0';
	return element;
}

char myList::firstRepeatingElement()
{
	char alph;

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
char myList::firstNonRepeatingElement()
{
	char alpha;

	for (int i = 0; i < maxSize; i++)
	{
		for (int j = 0; j < maxSize; j++)
		{
				if (arr[i] != arr[j])
				{
					alpha = arr[i];
					break;
				}
		}
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
