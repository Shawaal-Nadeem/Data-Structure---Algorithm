#include<iostream>
using namespace std;

class HeapTree
{
	int *heapArr;
	int size;
	int countNodes;
public:
	HeapTree(int s)
	{
		size = s;
		heapArr = new int[size];
		countNodes = 0;
	}
	int parent(int index)
	{
		int parentIndex = (index - 1) / 2;
		return parentIndex;
	}
	void swap(int &parentVal, int &childVal)
	{
		int temp = parentVal;
		parentVal = childVal;
		childVal = temp;
	}
	void insert(int value)
	{
		if (countNodes == size)
		{
			cout << "Heap Tree is Full" << endl;
		}
		else
		{
			heapArr[countNodes] = value;
			countNodes++;
		}
	}
	void min_Heap()
	{
		int index = size - 1;
		while (index > 0)
		{
			if (heapArr[parent(index)] > heapArr[index])
			{
				int parentVal = heapArr[parent(index)];
				int childVal = heapArr[index];
				swap(parentVal, childVal);
				heapArr[parent(index)] = parentVal;
				heapArr[index] = childVal;
				index = parent(index);
			}
			else
			{
				index = parent(index);
			}
		}
		cout << "Min Heap : ";
		for (int i = 0; i < size; i++)
		{
			cout << heapArr[i] << " ";
		}
		cout << endl;
	}
	int delete_min_Heap()
	{
		int index = size - 1;
		int temp = heapArr[index];
		heapArr[0] = temp;
		size--;
		min_Heap();
		return temp;
	}
	void max_Heap()
	{
		int index = size - 1;
		while (index > 0)
		{
			if (heapArr[parent(index)] < heapArr[index])
			{
				int parentVal = heapArr[parent(index)];
				int childVal = heapArr[index];
				swap(parentVal, childVal);
				heapArr[parent(index)] = parentVal;
				heapArr[index] = childVal;
				index = parent(index);
			}
			else
			{
				index = parent(index);
			}
		}
		cout << "Max Heap : ";
		for (int i = 0; i < size; i++)
		{
			cout << heapArr[i] << " ";
		}
		cout << endl;
	}
	int delete_max_Heap()
	{
		int index = size - 1;
		int temp = heapArr[index];
		heapArr[0] = temp;
		size--;
		max_Heap();
		return temp;
	}
	void display()
	{
		cout << "Heap Tree : ";
		for (int i = 0; i < size; i++)
		{
			cout << heapArr[i] << " ";
		}
		cout << endl;
	}
};