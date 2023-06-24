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
	int leftChild(int index)
	{
		int child = (2 * index) + 1;
		return child;
	}
	int rightChild(int index)
	{
		int child = (2 * index) + 2;
		return child;
	}
	void leafNodes()
	{
		cout << "Leaf Nodes : ";
		int leafNodes_startIndex = size / 2;
		for (int i = leafNodes_startIndex; i < size; i++)
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
	void max_Heap()
	{
		int index = size - 1;
		int parentIndex = parent(index);
		int nonLeafNodes = 0;
		for (int stopper = 0;; stopper++)
		{
			for (int i = 0; i < size / 2; i++)
			{
				nonLeafNodes++;
			}
			int *arr = new int[nonLeafNodes];
			for (int i = parentIndex; i >= 0; i--)
			{
				int left = leftChild(i);
				int right = rightChild(i);
				if (heapArr[left] > heapArr[right])
				{
					if (heapArr[left] > heapArr[i])
					{
						int parentVal = heapArr[i];
						int childVal = heapArr[left];
						swap(parentVal, childVal);
						heapArr[i] = parentVal;
						heapArr[left] = childVal;
					}
				}
				else if (heapArr[right] > heapArr[left])
				{
					if (heapArr[right] > heapArr[i])
					{
						int parentVal = heapArr[i];
						int childVal = heapArr[right];
						swap(parentVal, childVal);
						heapArr[i] = parentVal;
						heapArr[right] = childVal;
					}
				}
			}

			int count = 0;
			for (int j = parentIndex; j >= 0; j--)
			{
				int left = leftChild(j);
				int right = rightChild(j);
				if (heapArr[left] > heapArr[right])
				{
					if (heapArr[left] > heapArr[j])
					{
						arr[count] = 1;
					}
					else
					{
						arr[count] = 0;
					}
					count++;
				}
				else if (heapArr[right] > heapArr[left])
				{
					if (heapArr[right] > heapArr[j])
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

			int stop = 0;
			for (int k = 0; k < nonLeafNodes; k++)
			{
				if (arr[k] == 0)
				{
					stop++;
				}
			}
			if (stop == nonLeafNodes)
			{
				break;
			}
		}
		
		cout << "Max Heap : ";
		for (int i = 0; i < size; i++)
		{
			cout << heapArr[i] << " ";
		}
		cout << endl;
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