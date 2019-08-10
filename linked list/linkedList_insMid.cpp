#include<iostream>

using namespace std; 

struct node 
{
	int data; 
	node * next;
};

node * head; 


void insert(int data, int n)//n = position  
{
	node * temp = new node();
	temp->data = data;
	temp->next = NULL;
	if (n == 1 )
	{
		temp->next = head;
		head = temp;
		return;
	}
	 
	node * t = head;
	for(int i = 0; i<n-2; i++)
	{
		t = t->next;
	}
	
	temp->next = t->next;
	t->next = temp;	
}


void print()
{
	node * temp = head;
	while(temp != NULL)
	{
		cout<<temp->data;
		temp = temp->next;
	}
	cout<<endl;
}

int main()
{
	head = NULL; 
	insert(2,1);
	insert(3,2);
	insert(4,1);
	insert(5,2);
	print();
	
}
