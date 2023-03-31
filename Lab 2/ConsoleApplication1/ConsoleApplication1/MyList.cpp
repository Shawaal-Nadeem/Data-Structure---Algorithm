#pragma once
//#include"List.h"
template<typename myType>
class MyList:public List
{
public:
	MyList() :List()
	{

	}
	MyList(myType*arrT, int ms) :List(arrT,ms,0)
	{

	}
	MyList(const MyList&obj);
	~MyList();
};

