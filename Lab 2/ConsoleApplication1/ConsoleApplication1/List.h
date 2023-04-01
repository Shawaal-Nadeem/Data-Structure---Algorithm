#pragma once

#include <iostream>
using namespace std;

template<typename Type>
class List
{

	Type* arr;
	int maxSize;
	int currentSize;

public:
	List(Type* arrT = nullptr, int ms = 0, int cs = 0)
	{
		arr = arrT;
		maxSize = ms;
		currentSize = cs;
	}

	virtual ~List() {}

	/*virtual Type removeElementFromSpecificPositionList() = 0;
	virtual void firstRepeatingElement(Type) = 0;
	virtual void firstNonRepeatingElement(Type) = 0;
	virtual Type findPairs(Type) = 0;*/
};