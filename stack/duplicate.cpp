in#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"enter your string:";
	cin>>s;
	
	int size;
	size=s.size();

	stack<char>s1;
	for(int i=size-1;i>=0;i--){
		if(!s1.empty() && s1.top()==s[i]){
			s1.pop();
		}
		else{
			s1.push(s[i]);
		}
	}

	if(s1.empty()){
		cout<<"it's empty";
	}
	else{
		while(!s1.empty()){
			cout<<s1.top();
			s1.pop();
		}
	}
	return 0;
}
