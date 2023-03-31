#pragma once

#include<iostream>
using namespace std;
template<typename Type,typename d>

class List
{
	Type*arr;
	int maxSize;
	int currentSize;
public:
	d*deepCopy(d *p)
	{
		int length = strlen(p);
		d*temp = new d[length + 1];
		for (int i = 0; i < length; i++)
		{
			temp[i] = p[i]
		}
		temp[length] = '\0';
		return temp;
	}
	List()
	{
		arr = nullptr;
		maxSize = 0;
		currentSize = 0;
	}
	List(Type*arrT, int ms, int cs)
	{
		arr = deepCopy(arrT);
		maxSize = ms;
		currentSize = 0;                     //Because Array start from 0 Index
	}
	List(const List&obj)
	{
		arr = deepCopy(obj.arr);
		maxSize = obj.maxSize;
		currentSize = obj.currentSize;
	}
	~List()
	{
		if (arr)
		{
			delete[]arr;
			arr = nullptr;
		}
	}
	virtual Type removeElementFromSpecificPositionList() = 0;
	virtual void firstRepeatingElement(Type) = 0;
	virtual void firstNonRepeatingElement(Type) = 0;
	virtual Type findPairs(Type) = 0;
};

