#pragma once
#include"List.h"
class myList:public List
{
public:
	myList();
	myList(int*arrP,int ms,int cs);
	myList(const myList&obj);
	~myList();
	 int removeElementFromSpecificPositionList(int pos);
	 int firstRepeatingElement();
	 int firstNonRepeatingElement();
	 void display();
	 void countFrequencyOfEachElement();
};

