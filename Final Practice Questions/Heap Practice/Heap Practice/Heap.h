#include<iostream>
using namespace std;

class HeapTree
{
	int *heapArr;
	int size;
	int limit;
public:
	HeapTree()
	{
		heapArr = nullptr;
		size = 0;
		limit = 0;
	}
	HeapTree(int s)
	{
		limit = s;
		heapArr = new int[limit];
		size = 0;
	}
	void insert(int val)
	{
		if (size == limit)
		{
			cout << "Not Enough Space" << endl;
		}
		size++;
		heapArr[size - 1] = val;
	}
	void swap(int&parentVal, int&childVal)
	{
		int temp = parentVal;
		parentVal = childVal;
		childVal = temp;
	}
	void displayLeafNodes()
	{
		cout << "Leaf Nodes are : ";
		for (int i = limit / 2; i < limit; i++)
		{
			cout << heapArr[i] << " ";
		}
		cout << endl;
	}
	int parent(int index)
	{
		int parentIndex = (index-1) / 2;
		return parentIndex;
	}
	int leftChild(int index)
	{
		int leftIndex = (2 * index) + 1;
		return leftIndex;
	}
	int rightChild(int index)
	{
		int rightIndex = (2 * index) + 2;
		return rightIndex;
	}
	void minHeap()
	{
		for (int stopper = 0;; stopper++)
		{

			int lastChildIndex = limit - 1;
			int lastParent = parent(lastChildIndex);
			for (int i = lastParent; i >= 0; i--)
			{
				if (heapArr[leftChild(i)] < heapArr[rightChild(i)])
				{
					if (heapArr[leftChild(i)] < heapArr[i])
					{
						int childVal = heapArr[leftChild(i)];
						int parentVal = heapArr[i];
						swap(parentVal, childVal);
					}
				}
				else if (heapArr[rightChild(i)] < heapArr[leftChild(i)])
				{
					if (heapArr[rightChild(i)] < heapArr[i])
					{
						int childVal = heapArr[rightChild(i)];
						int parentVal = heapArr[i];
						swap(parentVal, childVal);
					}
				}
			}
			int nonLeafLodes = 0;
			for (int i = 0; i < limit / 2; i++)
			{
				nonLeafLodes++;
			}
			int *arr = new int[nonLeafLodes];
			int count = 0;
			for (int i = lastParent; i >= 0; i--)
			{
				if (heapArr[leftChild(i)] < heapArr[rightChild(i)])
				{
					if (heapArr[leftChild(i)] < heapArr[i])
					{
						arr[count] = 1;
					}
					else
					{
						arr[count] = 0;
					}
					count++;
				}
				else if (heapArr[rightChild(i)] < heapArr[leftChild(i)])
				{
					if (heapArr[rightChild(i)] < heapArr[i])
					{
						arr[count] = 1;
					}
					else
					{
						arr[count] = 0;
					}
					count++;
				}
			}
			int temp = 0;
			for (int i = 0; i <= nonLeafLodes; i++)
			{
				if (arr[i] == 0)
				{
					temp++;
				}
			}
			if (temp == nonLeafLodes)
			{
				break;
			}
		}

		cout << "Min Heap : ";
		for (int i = 0; i < limit; i++)
		{
			cout << heapArr[i] << " ";
		}
		cout << endl;
	}
	void display()
	{
		cout << "Heap Array : ";
		for (int i = 0; i < limit; i++)
		{
			cout << heapArr[i] << " ";
		}
		cout << endl;
	}
};