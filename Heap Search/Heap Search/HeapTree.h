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
		int lastLeaf_index = limit - 1;
		int parent_index = parent(lastLeaf_index);
		int non_leaf_nodes_size = 0;
		for (int s = 0; s < limit / 2; s++)
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
		for (int i = 0; i < limit; i++)
		{
			cout << heapArr[i] << " ";
		}
		cout << endl;
	}
	void delete_from_minHeap()
	{
		int lastChildIndex = limit - 1;
		heapArr[0] = heapArr[lastChildIndex];
		limit--;
		minHeap();
	}
	void maxHeap()
	{
		int lastLeaf_index = limit - 1;
		int parent_index = parent(lastLeaf_index);
		int non_leaf_nodes_size = 0;
		for (int s = 0; s < limit / 2; s++)
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
						arr[count]= 0;
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
		for (int i = 0; i < limit; i++)
		{
			cout << heapArr[i] << " ";
		}
		cout << endl;
	}
	void leafNodes()
	{
		cout << "Leaf Nodes : ";
		int start_leaf_node_index = (limit / 2);
		for (int i = start_leaf_node_index; i < limit; i++)
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