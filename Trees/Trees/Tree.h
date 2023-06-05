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

	void Inorder(Node*temp)                           // L,N,R
	{
		if (temp != nullptr)
		{
			Inorder(temp->left);
			cout << temp->data<<" ";
			Inorder(temp->right);
		}
	}
	void Preorder(Node*temp)                         // N,L,R
	{
		if (temp != nullptr)
		{
			cout << temp->data << " ";
			Preorder(temp->left);
			Preorder(temp->right);
		}
	}

	void Postorder(Node*temp)                         // L,R,N
	{
		if (temp != nullptr)
		{
			Postorder(temp->left);
			Postorder(temp->right);
			cout << temp->data << " ";
		}
	}

	void display()
	{
		cout << "Inorder : ";
		Inorder(root);
		cout << endl;
		cout << "Preorder : ";
		Preorder(root);
		cout << endl;
		cout << "Postorder : ";
		Postorder(root);
		cout << endl;
		
	}
};