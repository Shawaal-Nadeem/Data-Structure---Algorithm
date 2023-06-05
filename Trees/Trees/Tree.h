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
		temp->left = nullptr;
		temp->right = nullptr;
		if (root == nullptr)
		{
			root = temp;
		}
		else
		{
			Node*trav = root;
			Node*parent = nullptr;
				while (trav != nullptr)
				{
					parent = trav;
					if (temp->data < trav->data)
					{
						trav = trav->left;
					}
					else if (temp->data > trav->data)
					{
						trav = trav->right;
					}
				}

				if (temp->data < parent->data)
				{
					parent->left = temp;
				}
				else if (temp->data > parent->data)
				{
					parent->right = temp;
				}
		}
	}
	void Inorder(Node*temp)
	{
		if (temp != nullptr)
		{
			Inorder(temp->left);
			cout << temp->data<<" ";
			Inorder(temp->right);
		}
	}
	void display()
	{
		cout << "Inorder : ";
		Inorder(root);
		cout << endl;
	}
};