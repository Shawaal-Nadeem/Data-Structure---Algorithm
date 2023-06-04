#include"Node.h"

class Tree
{
	Node*root;
public:
	Tree()
	{
		root = nullptr;
	}
	void insert(int val)
	{
		Node*temp = new Node;
		temp->data = val;
		if (root == nullptr)
		{
			temp->left = nullptr;
			temp->right = nullptr;
			root = temp;
		}
		else
		{
			Node*trav = root;
				while (trav != nullptr)
				{
					if (temp->data < trav->data)
					{
						trav->left = temp;
						temp->right = nullptr;
						temp->left = nullptr;
					}
					trav = trav->left;
				}
		}
	}
};