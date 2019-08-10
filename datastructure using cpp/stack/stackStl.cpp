#include<iostream>
#include<stack>
using namespace std; 

void showstack(stack <int> s)
{
	while(!s.empty())
	{
		cout<<"\t"<<s.top();
		s.pop();
	}
}

int main()
{
	stack <int> s;
	while(true)
	{
		cout<<"enter the value to push in the stack \n";
		int val;
		cin>>val;
		if (val== 0000)
			break;
		s.push(val);
	}
	cout<<"the stack is : ";
	showstack(s);
	cout<<"\n size()"<<s.size();
	cout<<"\n top()"<<s.top();
	cout<<"\n pop()";
	s.pop();
	showstack(s);
	return 0;
	
	
}
