#include"QUEUE.h"

QUEUE::QUEUE()
{
	front=rear=NULL;
}
void QUEUE::enqueue(TreeNode* n)
{
	NODE* newnode=new NODE();
	newnode->setdata(n);
	if(front==NULL)
	{
		newnode->setnext(NULL);
		front=newnode;
		rear=newnode;
	}
	else
	{
		newnode->setnext(rear->getnext());
		rear->setnext(newnode);
		rear=newnode;
	}
}
TreeNode* QUEUE::deQueue()
{
	if(isEmpty())
	{
		return NULL;
	}
	else
	{
		NODE* temp=front;
		TreeNode* val=front->getdata();
		front=front->getnext();
		delete temp;
		return val;
	}
}
int QUEUE::isEmpty()
{
	return front==NULL;
}