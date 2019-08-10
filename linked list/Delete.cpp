#include<iostream>
using namespace std; 

struct node 
{
	int data;
	node * next;
};

node * head;

void insert(int x)
{
//	node * t = new node();
//
//	if (head == NULL)
//	{
//			t->data = data;
//			t ->next = NULL;
//			head = t;
//	}
//	else{
//		node * temp = head;
//			while(temp != NULL)
//				{
//					temp = temp->next;
//					
//		   		}
//
//
//				t->data = data;
//				t->next = NULL;
//				temp->next = t;
//	}

	node * temp = new node();
	temp ->data = x ;
	temp->next = head;
	head = temp; 
	
}

void delete1(int n)
{
	node *temp = head;
	if (n==1)
	{
		head = temp->next;
		delete(temp);
		return ;
	}
	for(int i = 0; i<n-2; i++)
	{
		temp = temp->next;
	}
	node * temp2 = temp->next;
	temp->next = temp2->next;
	delete(temp2);
}

void print()
{
	node * temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main()
{
	head = NULL;
	insert(2);
	insert(40);
	insert(6);
	insert(5);
	print();
	int n; 
	cout<<"enter a position "<<endl;
	cin>>n;
	delete1(n);
	print();
	
}
