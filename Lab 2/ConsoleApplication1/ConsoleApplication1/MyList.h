#pragma once

#include "List.h"

template<typename myType>
class MyList : public List<myType>
{
public:
	MyList(myType* arrT = nullptr, int ms = 0)
		: List<myType>(arrT, ms, 0)
	{
		}
	MyList(const MyList&obj) :List(obj)
	void displayArray()
	{
		for (int i = 0; i < this->maxSize; i++)
		{
			cout << this->arr[i] << " ";
		}
		cout << endl;
	}
};
