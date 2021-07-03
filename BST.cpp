#include"QUEUE.h"

	BST::BST()
	{
		root = NULL;
	}
	void BST::insert(int val)
	{
		TreeNode* newnode = new TreeNode();
		newnode->setdata(val);
		if (root == NULL)
		{
			root = newnode;
		}
		else
		{
			TreeNode* parent, *location;
			parent = location = root;
			while (val != parent->getdata() && location != NULL)
			{
				parent = location;
				if (val < parent->getdata())
				{
					location = parent->getleft();
				}
				else
				{
					location = parent->getright();
				}
			}
			if (val == parent->getdata())
			{
				cout << "Duplicate values are not allowed!" << endl;
			}
			else if (val < parent->getdata())
			{
				parent->setleft(newnode);
			}
			else
			{
				parent->setright(newnode);
			}
				
		}
	}
	void BST::LevelOrderTreversal()
	{
		QUEUE q;
		TreeNode* temp=root;
		while(temp)
		{
			cout<<temp->getdata()<<" ";
			if(temp->getleft())
			{
				q.enqueue(temp->getleft());
			}
			if(temp->getright())
			{
				q.enqueue(temp->getright());
			}
			temp=q.deQueue();
		}
		cout<<endl;
	}