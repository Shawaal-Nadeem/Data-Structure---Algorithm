#pragma once
#include<iostream>
using namespace std;
class Stack
{
protected:
	char*stackArray;
	int maxSize;
	int stackTop;

public:
	Stack();
	Stack(char*sa, int ms, int st);
	Stack(const Stack&obj);
	~Stack();
	virtual void Push(char alph) = 0;
	virtual char Pop() = 0;
	char*deepCopy(char*p);
	virtual void display()=0;
};

