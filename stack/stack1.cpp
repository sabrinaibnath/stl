#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>s;
	int size;
	cout<<"please enter size";
	cin>>size;

	int i,x;
	cout<<"please enter element";
	for(i=1;i<=size;i++){
		cin>>x;
		s.push(x);
	}

	cout<<"the stack is:";
	while(!s.empty()){
		cout<<s.top()<<",";
		s.pop();
	}
	return 0;
}

