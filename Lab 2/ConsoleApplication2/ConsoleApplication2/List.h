#pragma once
#include<iostream>
using namespace std;
template<class Type>
class List
{
protected:                           //because we use these attributes in child class 
	Type*arr;
	int maxSize;
	int currentSize;
public:
	List()
	{
		arr = nullptr;
		maxSize = 0; 
		currentSize = 0;
	}
	List(Type*arrP,int ms)
	{
		arr = arrP;
		maxSize = ms;
		currentSize = 0;
	}
	 ~List()
	{
		/*if (arr)
		{
			delete[]arr;
			arr = nullptr;
		}*/
	}
	 virtual void display() = 0;
	 virtual Type removeElementFromSpecificPositionList(Type arr, int pos) = 0;
};

