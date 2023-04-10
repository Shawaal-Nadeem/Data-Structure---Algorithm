#include "Queues.h"
int front, rear;
char*Queues::deepCopy(char*p)
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

Queues::Queues()
{
	arr = nullptr;
	size = 0;
	front = -1;
	rear = -1;
}

Queues::Queues(char*arrP, int s)
{
	arr = deepCopy(arrP);
	size = s;
	front = -1;
	rear = -1;
}

Queues::Queues(const Queues&obj)
{
	arr = deepCopy(obj.arr);
	size = obj.size;
}

Queues::~Queues()
{

}

bool Queues::isEmpty()
{
	if (front == -1 && rear == -1)
	{
		return true;
	}
	else if (front == rear)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Queues::isFull()
{
	if (rear == size - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Queues::push(char data)
{
	if (isFull() == true)
	{
		cout << "Queue is Full." << endl;
	}

		rear++;

		arr[rear] = data;
	
}

char Queues::pop()
{
	front++;
	if (isEmpty() == true)
	{
		cout << "Queue is Empty." << endl;
	}
	char data = arr[front];
	return data;
}

int Queues::numOfElements()
{
	int count = 0;
	for (int i = front+1; i <= rear; i++)
	{
		count++;
	}
	return count;
}

void Queues::display()
{
	for (int i = front+1; i <= rear; i++)
	{
		cout << arr[i] << " " << endl;
	}
	cout << endl;
}
