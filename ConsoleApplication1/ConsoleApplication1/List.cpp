#include "List.h"


char*List::deepCopy(char*p)
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
List::List()
{
	arr = nullptr;
	size = 0;
	top = -1;
}
List::List(char*arrP, int s)
{
	arr = deepCopy(arrP);
	size = s;
	top = -1;
}
List::~List(){}
List::List(const List&obj)
{
	this->arr = deepCopy(obj.arr);
}
void List::push(char data)
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

char List::pop()
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