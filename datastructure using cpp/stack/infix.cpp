#include<iostream>
#include<stack>
#include<string>
using namespace std;

int precedence(char c )
{
	if (c == '+' || c == '-')
		return 1;
	else if (c == '*'||c == '/')
		return 2;
	else if (c == '^')
		return 3;
	else 
		return 0;
}
string inToPost(string infix)
{
	stack <char> stk; 
	stk.push('#'); //special symbol for the termination 
	
	string postfix = "";
	
	for (int i = 0; i<infix.length(); i++)
	{
		if ((infix[i]>='a' && infix[i] <= 'z')|| (infix[i]>= 'A' && infix[i]<= 'Z'))
			postfix+=infix[i];
			
		else if(isdigit(infix[i]))
			postfix+=infix[i];
			
		else if (infix[i]=='(')
			stk.push(infix[i]);
			
			
		else if (infix[i]==')')
			{
				while(stk.top() != '#' && stk.top() !='(')
					{
						char c = stk.top();
						stk.pop();
						postfix+=c;
					}
					
				if(stk.top() =='(')
					stk.pop();
					
			}
			
		else{
			while(stk.top()!= '#'  && precedence(infix[i])<= precedence(stk.top()))
				{
					char c = stk.top();
					stk.pop();
					postfix+=c;
				}
		}
	}
	
}

int main()
{

	string infix = "x^y/(5*z)+2";
	cout<<"postfix form is : "<<inToPost(infix)<<endl;
	
	
	return 0;
}
