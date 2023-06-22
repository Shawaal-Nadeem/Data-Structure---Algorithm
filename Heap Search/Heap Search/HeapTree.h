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

	int parent(int index)
	{
		int parentIndex = (index - 1) / 2;
		return parentIndex;
	}

	int leftChild(int index)
	{
		int leftChildIndex = (2*index)+1;
		return leftChildIndex;
	}

	int rightChild(int index)
	{
		int rightChildIndex = (2 * index) + 2;
		return rightChildIndex;
	}

	void minHeap()
	{
		int index = limit-1;
	
		while (index > 0)
		{
			if (heapArr[index] < heapArr[index - 1])
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
			}
			else
			{
				if (heapArr[parent(index-1)] > heapArr[index-1])
				{
					int parentVal = heapArr[parent(index-1)];
					int childVal = heapArr[index-1];
					swap(parentVal, childVal);
					heapArr[parent(index-1)] = parentVal;
					heapArr[index-1] = childVal;
					index = index - 2;
				}
			}
		}
		
		cout << "Min Heap: " << endl;
		for (int i = 0; i < limit; i++)
		{
			cout << heapArr[i] << " ";
		}
		cout << endl;
	}

	void maxHeap()
	{
		int index = limit - 1;
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
		cout << "Max Heap: " << endl;
		for (int i = 0; i < limit; i++)
		{
			cout << heapArr[i] << " ";
		}
		cout << endl;
	}

	void swap(int &parentVal, int &childVal)
	{
		int temp = parentVal;
		parentVal = childVal;
		childVal = temp;
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