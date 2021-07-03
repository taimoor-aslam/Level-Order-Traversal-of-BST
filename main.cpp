#include"QUEUE.h"

int main()
{
	char choice;
	int val;
	BST T;
	do
	{
		cout<<"\t____________________________________"<<endl;
		cout<<"\t|     ***MENUE***                   |"<<endl;
		cout<<"\t| I/i :: insert		            |"<<endl;
		cout<<"\t| L/l :  Level Order Traversal      |"<<endl;
		cout<<"\t| E/e ::  exit(0)                   |"<<endl;
		cout<<"\t------------------------------------"<<endl;
		cout<<"choice= ";
		cin>>choice;
		switch(choice)
		{
		case 'I':case 'i':
			cout<<"Enter value which you want to insert: ";
			cin>>val;
			T.insert(val);
			break;
		case 'L':case'l':
			cout<<"Data is displaying present in Tree: ";
			T.LevelOrderTreversal();
			break;
		case'E':case'e':
			break;
		default:
			cout<<"Sorry! Inavlid choice."<<endl;
			cout<<"Chose the appropriate choice."<<endl;
		}
	}
	while(choice!='E'&&choice!='e');
	system("pause");
	
}