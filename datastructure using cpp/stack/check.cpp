#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int>s;
	s.push(4);
	s.push(4);
	cout<<s.top();
	s.pop();
	return 0;
}
