#include<iostream>

using namespace std;
#define MAX 1000
struct node 
{
	int top ; 
	int* a;
	
};

struct node * createStack(int size )
{
	struct node * stack = new node;
	stack->top = -1;
	stack->a = new int[size];
	return stack;
	
}
bool push(struct node * stack , int x)
{
	if (stack->top >= (MAX- 1))
	{
		cout<<"stack is overflow"<<endl;
		return false;
	}
	else {
		stack->a[++stack->top]=x;
		cout<<x<<"pushed into stack\n";
		return true;
	}
}

int pop(struct node * stack )
{
	if (stack->top < 0){
			cout<<"stack underflow";
			return 0 ;
		
	}
	else 
	{
		int x = stack->a[stack->top--];
		return x;
	}
			
}


int size(struct node * s)
{
	return s->top+1;
}

bool isEmpty(struct node * stack)
{
	return (stack->top<0);
}
bool isFull(struct node * s)
{
	return (s->top>MAX-1);
}
int peak(struct node * s )
{
	if (!isEmpty(s))
		return s->a[s->top];
}
int main()
{	
	struct node* s = createStack(MAX);
	push(s, 30);
	push(s, 20);
	push(s, 90);
	push(s, 60);
	
	cout<<pop(s)<<"Popped from stack"<<endl;
	
	cout<<"peak is "<<peak(s)<<endl;
	cout<<"isFull"<<isFull(s)<<endl;
	cout<<"isEmpty"<<isEmpty(s)<<endl;
	cout<<"size"<<size(s)<<endl;
		cout<<pop(s)<<"Popped from stack"<<endl;
		cout<<"size"<<size(s)<<endl;
		
	
	 
	return 0;
}
