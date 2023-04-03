#pragma once
#include"List.h"
class myList:public List
{
public:
	myList();
	myList(char*arrP,int ms,int cs);
	myList(const myList&obj);
	~myList();
	 char removeElementFromSpecificPositionList(int pos);
	 char firstRepeatingElement();
	 void display();
};

