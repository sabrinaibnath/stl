#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>s1;
	stack<int>s2;
	int size1,size2,i,x;
	cout<<"enter the size of both stack";
	cin>>size1;
	cin>>size2;

	cout<<"enter the first stack";
	for(i=1;i<=size1;i++){
		cin>>x;
		s1.push(x);
	}
	cout<<"enter the second stack";
	for(i=1;i<=size2;i++){
		cin>>x;
		s2.push(x);
	}
	s1.swap(s2);
	cout<<"the first stack is:";
	for(i=1;i<=size1;i++){
		cout<<s1.top()<<",";
		s1.pop();
	}
	cout<<"the second stack is";
	for(i=1;i<=size2;i++){
		cout<<s2.top()<<",";
		s2.pop();
	}
	return 0;
}

