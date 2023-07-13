#include"Node.h"

class BST
{
	Node*root;


	void insertRecursive(Node*& node, int val)
	{
		if (node == nullptr)
		{
			node = new Node;
			node->data = val;
			node->left = nullptr;
			node->right = nullptr;
		}
		else if (val < node->data)
		{
			insertRecursive(node->left, val);
		}
		else if (val > node->data)
		{
			insertRecursive(node->right, val);
		}
	}

	void searchRecursive(Node*temp, int val)
	{
		if (val == temp->data)
		{
			cout << temp->data << " exist." << endl;
		}
		else if (val < temp->data)
		{
			searchRecursive(temp->left, val);
		}
		else if (val>temp->data)
		{
			searchRecursive(temp->right, val);
		}
		
	}
public:
	BST()
	{
		root = nullptr;
	}

	void insert(int val)
	{
		insertRecursive(root, val);
	}

	void search(int value)
	{
		searchRecursive(root, value);
	}

	void inorder(Node*temp)
	{
		if (temp != nullptr)
		{
			inorder(temp->left);
			cout << temp->data << " ";
			inorder(temp->right);
		}
	}
	
	void display()
	{
		inorder(root);
		cout << endl;
	}
};