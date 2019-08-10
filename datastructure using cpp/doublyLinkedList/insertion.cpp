#include<iostream>

using namespace std;
struct node
{
	int data;
	node *next;
	node *prev;
	
};

node *head;

node * getNewNode(int x){
	node *mynode = new node();
	mynode->data = x;
	mynode->next = NULL;
	mynode->next = NULL;
	return mynode;
}



void print(){
	node * temp = head;
	cout<<"forword \n";
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

void reversePrint(){
	node * temp = head;
	cout<<"backword \n";
	while(temp->next != NULL)
	{
		temp = temp->next;
	}

	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->prev;
	}
	cout<<endl;

}


void insertAtHead(int data){
	node *temp = getNewNode(data);
	if(head == NULL){
		head = temp;
		return;
	}
	head->prev = temp;
	temp->next = head;
	head = temp;

	
}


void insertAtEnd(int data){
	node * temp = getNewNode(data);
	if (head == NULL){
		head = temp;
		return;
	}
	node *t= head;
	while(t->next != NULL)
	{
		t = t->next;
	}
	t->next = temp;
	temp->prev = t;
}

int main(){
	head = NULL;
	insertAtEnd(2); 
	print();
	reversePrint();
	insertAtEnd(4); 
	print();
	reversePrint();
	insertAtEnd(6);
	print();
	reversePrint();

}
