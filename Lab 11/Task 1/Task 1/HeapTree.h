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
	void minHeap()
	{
		int lastLeaf_index = size - 1;
		int parent_index = parent(lastLeaf_index);
		int non_leaf_nodes_size = 0;
		for (int s = 0; s < size / 2; s++)
		{
			non_leaf_nodes_size++;
		}
		for (int stoper = 0;; stoper++)
		{
			for (int i = parent_index; i >= 0; i--)
			{
				int left = leftChild(i);
				int right = rightChild(i);
				if (heapArr[left] < heapArr[right])
				{
					if (heapArr[left] < heapArr[i])
					{
						int parentVal = heapArr[i];
						int childVal = heapArr[left];
						swap(parentVal, childVal);
						heapArr[i] = parentVal;
						heapArr[left] = childVal;
					}
				}
				else if (heapArr[right] < heapArr[left])
				{
					if (heapArr[right] < heapArr[i])
					{
						int parentVal = heapArr[i];
						int childVal = heapArr[right];
						swap(parentVal, childVal);
						heapArr[i] = parentVal;
						heapArr[right] = childVal;
					}
				}
			}
			int stop = 0;
			int*arr = new int[non_leaf_nodes_size];
			int count = 0;
			for (int j = parent_index; j >= 0; j--)
			{
				int left = leftChild(j);
				int right = rightChild(j);
				if (heapArr[left] < heapArr[right])
				{
					if (heapArr[left] < heapArr[j])
					{
						arr[count] = 0;
					}
					else
					{
						arr[count] = 1;
					}
					count++;
				}
				else if (heapArr[right] < heapArr[left])
				{
					if (heapArr[right] < heapArr[j])
					{
						arr[count] = 0;
					}
					else
					{
						arr[count] = 1;
					}
					count++;
				}
			}

			for (int k = 0; k < non_leaf_nodes_size; k++)
			{
				if (arr[k] == 1)
				{
					stop++;
				}
			}
			if (stop == non_leaf_nodes_size)
			{
				break;
			}

		}
		cout << "Min Heap : ";
		for (int i = 0; i < size; i++)
		{
			cout << heapArr[i] << " ";
		}
		cout << endl;
	}
	
	void maxHeap()
	{
		int lastLeaf_index = size - 1;
		int parent_index = parent(lastLeaf_index);
		int non_leaf_nodes_size = 0;
		for (int s = 0; s < size / 2; s++)
		{
			non_leaf_nodes_size++;
		}
		for (int stoper = 0;; stoper++)
		{
			for (int i = parent_index; i >= 0; i--)
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
			int stop = 0;
			int*arr = new int[non_leaf_nodes_size];
			int count = 0;
			for (int j = parent_index; j >= 0; j--)
			{
				int left = leftChild(j);
				int right = rightChild(j);
				if (heapArr[left] > heapArr[right])
				{
					if (heapArr[left] > heapArr[j])
					{
						arr[count] = 0;
					}
					else
					{
						arr[count] = 1;
					}
					count++;
				}
				else if (heapArr[right] > heapArr[left])
				{
					if (heapArr[right] > heapArr[j])
					{
						arr[count] = 0;
					}
					else
					{
						arr[count] = 1;
					}
					count++;
				}
			}

			for (int k = 0; k < non_leaf_nodes_size; k++)
			{
				if (arr[k] == 1)
				{
					stop++;
				}
			}
			if (stop == non_leaf_nodes_size)
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