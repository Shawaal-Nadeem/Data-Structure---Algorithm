#pragma once
#include<iostream>
using namespace std;

class List
{
protected:
	int*arr;
	int maxSize;
	int currentSize;
public:
	List();
	List(int*arrP, int ms, int cs);
	List(const List&obj);
	~List();
	virtual int removeElementFromSpecificPositionList(int pos) = 0;
	virtual int firstRepeatingElement() = 0;
	virtual int firstNonRepeatingElement() = 0;
	//int*deepCopy(int*p);
	virtual void display() = 0;
};

