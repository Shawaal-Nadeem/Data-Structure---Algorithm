#include"Node.h"

class Tree
{
protected:
	Node*root;
public:
	Tree()
	{
		root = nullptr;
	}
	virtual void insert(int val) = 0;
	virtual void InOrder(Node*temp) = 0;
	virtual void PreOrder(Node*temp) = 0;
	virtual void PostOrder(Node*temp) = 0;
	virtual void display() = 0;
};