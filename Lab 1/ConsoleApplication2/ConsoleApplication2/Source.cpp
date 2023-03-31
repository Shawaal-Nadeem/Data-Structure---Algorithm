#include<iostream>
using namespace std;
const int max = 5;
class myStack{

private:
	int arr[max];
	int top();
public:
	myStack() :top(-1)
	{
	}
	int isFull();
	int isEmpty();
	int pop();
	void push(int x);
	void print();
};


int main()
{
	


	return 0;
}