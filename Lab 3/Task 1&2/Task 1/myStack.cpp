#include "myStack.h"


myStack::myStack() :Stack()
{

}

myStack::myStack(char*sa, int ms, int st) : Stack(sa,ms,st)
{

}

myStack::myStack(const myStack&obj) : Stack(obj)
{

}

myStack::~myStack()
{

}

bool myStack::full()
{
	if (stackTop == maxSize - 1)
	{
		cout << "Stack is Full" << endl;
		return true;
	}
	else
	{
		return false;
	}
}

bool myStack::empty()
{
	if (stackTop == -1)
	{
		cout << "Stack is Empty" << endl;
		return true;
	}
	else
	{
		return false;
	}
}

int myStack::size()
{
	int num_of_elements = stackTop + 1;
	return num_of_elements;
}

char myStack::top()
{
	char alph = stackArray[stackTop];
	return alph;
}

void myStack::Push(char alph)
{
	if (full() == true)
	{
		cout << "OverFlow" << endl;
	}
	else
	{
		stackTop++;
		stackArray[stackTop] = alph;
	}
}

char myStack::Pop()
{
	if (empty() == true)
	{
		cout << "Underflow" << endl;
		return 0;
	}
	else
	{
		char data = stackArray[stackTop];
		stackTop--;
		return data;
	}
}

void myStack::display()
{
	cout << "Stack Elements are : ";
	for (int i = 0; i <= stackTop; i++)
	{
		cout << stackArray[i] << " ";
	}
}