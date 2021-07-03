#ifndef _QUEUES_H
#define _QUEUES_H
#include<iostream>
using namespace std;


class TreeNode
{
private:
	int data;
	TreeNode* left;
	TreeNode* right;
public:
	TreeNode()
	{
		left = right = NULL;
	}
	void setright(TreeNode* ptr)
	{
		right = ptr;
	}
	void setleft(TreeNode* ptr)
	{
		left = ptr;
	}
	TreeNode* getright()
	{
		return right;
	}
	TreeNode* getleft()
	{
		return left;
	}
	void setdata(int val)
	{
		data = val;
	}
	int getdata()
	{
		return data;
	}
};
class BST
{
private:
	TreeNode* root;
public:
	BST();
	void insert(int);
	void LevelOrderTreversal();
};


class NODE
{
private:
	TreeNode* data;
	NODE *next;
public:
	void setdata(TreeNode* val)
	{
		data=val;
	}
	TreeNode* getdata()const
	{
		return data;
	}
	void setnext(NODE *ptr)
	{
		next=ptr;
	}
	NODE* getnext()
	{
		return next;
	}
};

class QUEUE
{
private:
	
	NODE* front;
	NODE* rear;
public:
	QUEUE();
	void enqueue(TreeNode*);
	TreeNode* deQueue();
	int isEmpty();
};
#endif