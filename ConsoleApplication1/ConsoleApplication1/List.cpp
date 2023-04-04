#include "List.h"

int top;
List::List()
{
	arr = nullptr;
	size = 0;
	top = -1;
}
List::List(int*arrP, int s)
{
	arr = arrP;
	size = s;
	top = -1;
}
List::~List(){}

void List::push(int data)
{
	if (isFull() == true)
	{
		cout << "Overflow" << endl;
	}

	top++;
	arr[top] = data;
}
void List::display()
{
	for (int i = 0; i <= top; i++)
	{
		cout << arr[i] << " ";
	}
}

int List::pop()
{
	if (isEmpty() == true)
	{
		cout << "Underflow" << endl;
		return 0;
	}

	int val = arr[top];
	top--;
	return val;
}
bool List::isEmpty()
{
	if (top == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool List::isFull()
{
	if (top == size - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int List::num_Of_Elemets()
{
	int num = top + 1;
	return num;
}