#pragma once

#include "List.h"

template<typename myType>
class MyList : public List<myType>
{
public:
	MyList(myType* arrT = nullptr, int ms = 0, int cs = 0)
		: List<myType>(arrT, ms, cs)
	{
		}

	void displayArray()
	{
		for (int i = 0; i < this->currentSize; i++)
		{
			cout << this->arr[i] << " ";
		}
		cout << endl;
	}
};
