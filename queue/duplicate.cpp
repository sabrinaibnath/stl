#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;

	stack<char>c;
	queue<char>qu;

	int size=s.size();

	for(int i=size-1;i>=0;i--){
		if(!c.empty() && c.top()==s[i]){
			c.pop();
		}
		else{
			c.push(s[i]);
		}
	}

	while(!c.empty()){
		qu.push(c.top());
		c.pop();
	}


	while(!qu.empty()){
		cout<<qu.front();
		qu.pop();
	}
	return 0;
}


