#include "List.h"

//char*List::deepCopy(char*p)
//{
//	int length = strlen(p);
//	char*temp = new char[length + 1];
//	for (int i = 0; i < length; i++)
//	{
//		temp[i] = p[i];
//	}
//	temp[length] = '\0';
//	return temp;
//}

List::List()
{
	arr = nullptr;
	maxSize = 0;
	currentSize = 0;
}
List::List(int*arrP, int ms, int cs)
{
	arr = arrP;
	maxSize = ms;
	currentSize = cs;
}
List::List(const List&obj)
{
	arr = obj.arr;
	maxSize = obj.maxSize;
	currentSize = obj.currentSize;
}
List::~List()
{

}

