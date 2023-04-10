#pragma once
#include<iostream>
using namespace std;
class Queues
{
	char*arr;
	int size;
public:
	Queues();
	Queues(char*arrP,int s);
	Queues(const Queues&obj);
	~Queues();
	void push(char data);
	char pop();
	bool isEmpty();
	bool isFull();
	int numOfElements();
	void display();
	char*deepCopy(char*p);
};

