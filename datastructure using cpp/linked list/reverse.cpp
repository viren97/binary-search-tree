#include<iostream>
using namespace std;

struct node 
{
	int data;
	node * link;
};


void print(node * head)
{
	node * temp = head;
	while( temp != NULL)
	{
		cout<<temp->data<<" ";
		
		temp = temp->link;
	}
	cout<<endl;
}
node * insert(node * head, int data)
{
	node * temp = new node();
	temp->data = data;
	temp->link = head;
	head = temp;
	return head;	
}


node * reverse(node * head){
	node *current, *next, *prev;
	prev = NULL;
	current = head;
	while(current != NULL)
	{
		next = current->link;
		current->next = prev;
		prev = current;
		current = next;

	}
	head = prev;
	return head;
}

int main()  
{
	node * head = NULL;
	head = insert(head, 2);
	head = insert(head, 4);
	head = insert(head, 6);
	head = insert(head, 8);
	print(head);
	head = reverse(head);
	print(head);
	
		
}
