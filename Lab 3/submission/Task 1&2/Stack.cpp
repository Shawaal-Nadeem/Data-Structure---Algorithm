#include "Stack.h"

char*Stack::deepCopy(char*p)
{
	int length = strlen(p);
	char*temp = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		temp[i] = p[i];
	}
	temp[length] = '\0';
	return temp;
}
Stack::Stack()
{
	stackArray = nullptr;
	maxSize = 0;
	stackTop = -1;
}

Stack::Stack(char*sa, int ms, int st=-1)
{
	stackArray = deepCopy(sa);
	maxSize = ms;
	stackTop = st;
}

Stack::Stack(const Stack&obj)
{
	this->stackArray = deepCopy(obj.stackArray);
	this->maxSize = obj.maxSize;
	this->stackTop = obj.stackTop;
}

Stack::~Stack()
{
	
}

