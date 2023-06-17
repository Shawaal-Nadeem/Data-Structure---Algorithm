#include<iostream>
using namespace std;

class HeapTree
{
	int *heapArr;
	int limit;
	int heap_size;
public:
	HeapTree()
	{
		limit = 0;
		heapArr = new int [limit];
		heap_size = 0;
	}
	HeapTree(int lim)
	{
		limit = lim;
		heapArr = new int[limit];
		heap_size = 0;
	}
	void insert(int value)
	{
		if (heap_size == limit)
		{
			cout << "Heap Size is Full." << endl;
		}
		heap_size++;
		heapArr[heap_size - 1] = value;
	}

	int parent(int value)
	{
		int index;
		for (int i = 0; i < limit; i++)
		{
			if (heapArr[i] == value)
			{
				index = i;
				break;
			}
		}
		int parentIndex = (index - 1) / 2;
		int parentValue = heapArr[parentIndex];
		return parentValue;
	}
	int leftChild(int value)
	{
		int index;
		for (int i = 0; i < limit; i++)
		{
			if (heapArr[i] == value)
			{
				index = i;
				break;
			}
		}
		int childIndex = (2*index)+1;
		int childValue = heapArr[childIndex];
		return childValue;
	}
	int rightChild(int value)
	{
		int index;
		for (int i = 0; i < limit; i++)
		{
			if (heapArr[i] == value)
			{
				index = i;
				break;
			}
		}
		int childIndex = (2 * index) + 2;
		int childValue = heapArr[childIndex];
		return childValue;
	}
	void minHeap()
	{
		int index = limit-1;
		int parentIndex = 0;
		while (index > 0)
		{
			if (heapArr[index] < parent(heapArr[index]))
			{
				int temp = heapArr[index];
				for (int i = 0; i < limit; i++)
				{
					if (heapArr[i] == parent(heapArr[index]))
					{
						parentIndex = i;
						break;
					}
				}
				heapArr[parentIndex] = temp;
				heapArr[index] = parent(heapArr[index]);
				index = parentIndex;
			}
		}
	}
	void display()
	{
		for (int i = 0; i < limit; i++)
		{
			cout << heapArr[i] << " ";
		}
		cout << endl;
	}
};