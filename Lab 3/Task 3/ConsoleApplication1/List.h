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
	void infix_to_postfix(char*inf_arr);
	char*deepCopy(char*p);

};

