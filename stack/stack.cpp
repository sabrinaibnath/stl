#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>s;
	int size;
	cout<<"please enter the size:";
	cin>>size;

	cout<<"please enter the element in the stack:";
	for(int i=0;i<=size;i++){
		int x;
		cin>>x;
		s.push(x);
	
	}


	cout<<"the stack is:";
	while(!s.empty()){
		cout<<s.top()<<'\n';
		s.pop();
	}

	return 0;

}



