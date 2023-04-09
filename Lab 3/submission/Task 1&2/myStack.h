#pragma once
#include"Stack.h"
class myStack:public Stack
{
public:
	myStack();
	myStack(char*sa, int ms, int st);
	myStack(const myStack&obj);
	~myStack();
	bool empty();
	bool full();
	int size();
	char top();
	void Stack::Push(char alph);
	char Stack::Pop();
	void Stack::display();
};

