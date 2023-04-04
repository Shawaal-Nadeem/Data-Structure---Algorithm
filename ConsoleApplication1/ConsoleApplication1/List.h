#pragma once
#include<iostream>
using namespace std;

class List
{
	int*arr;
	int size;
public:
	List();
	List(int*arrP, int s);
	~List();
	void push(int data);
	int pop();
	bool isFull();
	bool isEmpty();
	int num_Of_Elemets();
	void display();
};

