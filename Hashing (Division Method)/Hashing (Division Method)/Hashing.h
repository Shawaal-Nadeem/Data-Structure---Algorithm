#include<iostream>
using namespace std;
class Hashing
{
	int *hashArr;
	int size = 0;
public:
	Hashing(int s)
	{
		size = s;
		hashArr = new int[size];
	}
	void insert(int k)
	{
		hashArr[k % 10] = k;
	}
	void display()
	{
		for (int i = 0; i < 10; i++)
		{
			cout << hashArr[i] << " ";
		}
		cout << endl;
	}
};