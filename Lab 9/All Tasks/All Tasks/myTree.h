#include"Tree.h"

class myTree :public Tree
{
public:
	myTree() :Tree(){};

	void Tree::insert(int val)
	{
		Node*temp = new Node;
		temp->left = nullptr;
		temp->data = val;
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
				else
				{
					trav = trav->right;
				}
			}
			if (temp->data < parent->data)
			{
				parent->left = temp;
			}
			else
			{
				parent->right = temp;
			}
		}
	}

	void Tree::InOrder(Node*temp)
	{
		if (temp != nullptr)
		{
			InOrder(temp->left);
			cout << temp->data << " ";
			InOrder(temp->right);
		}
	}

	void Tree::PreOrder(Node*temp)
	{
		if (temp != nullptr)
		{
			cout << temp->data << " ";
			PreOrder(temp->left);
			PreOrder(temp->right);
		}
	}

	void Tree::PostOrder(Node*temp)
	{
		if (temp != nullptr)
		{
			PostOrder(temp->left);
			PostOrder(temp->right);
			cout << temp->data << " ";
		}
	}

	void Tree::display()
	{
		cout << "Inorder : ";
		InOrder(root);
		cout << endl;
		cout << "Preorder : ";
		PreOrder(root);
		cout << endl;
		cout << "Postorder : ";
		PostOrder(root);
		cout << endl;
	}
};