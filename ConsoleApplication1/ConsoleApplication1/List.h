#pragma once
#include<iostream>
using namespace std;

class List
{
	char*arr;
	int size;
public:
	int top;
	List();
	List(char*arrP, int s);
	List(const List&obj);
	~List();
	void push(char data);
	char pop();
	bool isFull();
	bool isEmpty();
	int num_Of_Elemets();
	void display();
	char*deepCopy(char*p);

};

