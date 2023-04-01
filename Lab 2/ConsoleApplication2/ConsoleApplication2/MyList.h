#pragma once
#include"List.h"
template<class myType>
class MyList :public List<myType>
{
public:
	MyList() :List<myType>(){}
	MyList(myType*arrP, int ms) :List<myType>(arrP,ms){}
	~MyList(){}
	void display()
	{
		for (int i = 0; i < this->maxSize; i++)
		{
			cout << this->arr[i] << " ";
		}
	}
};

