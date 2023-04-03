#pragma once
#include<iostream>
using namespace std;

class List
{
protected:
	char*arr;
	int maxSize;
	int currentSize;
public:
	List();
	List(char*arrP, int ms, int cs);
	List(const List&obj);
	~List();
	virtual char removeElementFromSpecificPositionList(int pos) = 0;
	virtual char firstRepeatingElement() = 0;
	virtual char firstNonRepeatingElement() = 0;
	char*deepCopy(char*p);
	virtual void display() = 0;
};

