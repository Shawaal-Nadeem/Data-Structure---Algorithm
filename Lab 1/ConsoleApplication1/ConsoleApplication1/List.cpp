#include "List.h"

char*List::deepCopy(char*p)
{
	int length = strlen(p);
	char *temp = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		temp[i] = p[i];
	}
	temp[length] = '\0';
	return temp;
}
List::List()
{
	arr = nullptr;
	maxSize = 0;
	currentSize = 0;
}

List::List(char*tempArr, int ms, int cs)
{
	arr = deepCopy(tempArr);
	maxSize = ms;
	currentSize = cs;
}

List::List(const List&obj)
{
	arr = deepCopy(obj.arr);
	maxSize = obj.maxSize;
	currentSize = obj.currentSize;
}
List::~List()
{

}

void List::addElementAtFirstIndex(char alph)
{
	currentSize++;
	for (int i = 0; i <=currentSize; i++)
	{
		arr[i + 1] = arr[i];
	}
	arr[0] = alph;
}
void List::addElementAtLastIndex(char alph)
{

}
void List::removeElementFromEnd()
{

}
void List::removeElementFromStart()
{

}
void List::display()
{
	cout << arr << endl;
}