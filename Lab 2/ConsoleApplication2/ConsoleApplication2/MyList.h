#pragma once
#include"List.h"
template<class myType>
class MyList :public List<myType>
{
public:
	MyList() :List<myType>(){}
	MyList(myType*arrP, int ms) :List<myType>(arrP,ms){}
	~MyList(){}

	myType List::removeElementFromSpecificPositionList (int pos)
	{
		myType removeElement = arr[pos];
		for (int i = 0; arr[i] != '\0'; i++)
		{
			arr[pos] = arr[pos + 1];
		}
		return removeElement;
	}

	void display ()
	{
		for (int i = 0; i < this->maxSize; i++)
		{
			cout << this->arr[i] << " ";
		}
	}
};

