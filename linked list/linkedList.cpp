#include<iostream>

using namespace std;


struct node 
{
	int data;
	node* link;
};
node * head;

 
void print_nodes(){
	node * temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->link;
	}
	cout<<endl;
}
 

void insert(int x){
	node * temp = new node();
	temp ->data = x ;
	temp->link = head;
	head = temp; 
	
}




int main()
{
	head = NULL;
	int n, x;
	cout<<"How many no. do you want to insert: "<<endl; 
	cin>>n;
	
	for(int i =0; i<n; i++)
	{
		cout<<"enter any no."<<endl; 
		cin>>x;
		insert(x);
		print_nodes();
		
	}
	
}



