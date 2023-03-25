#pragma once
#include<iostream>
using namespace std;
class List
{
	char*arr;
	int maxSize;
	int currentSize;
public:
	List();
	List(char*tempArr, int ms, int cs);
	List(const List&obj);
	~List();
	void setArr(char*tempArr);
	void setMaxSize(int ms);
	void setCurrentSize(int cs);
	char*getArr();
	int getMaxSize();
	int getCurrentSize();
	virtual void addElementAtFirstIndex(char alph);
	virtual void addElementAtLastIndex(char alph);
	virtual void removeElementFromEnd();
	virtual void removeElementFromStart();
	void display();
	char*deepCopy(char*p);

};
