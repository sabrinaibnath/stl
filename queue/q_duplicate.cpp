#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"enter your string";
	cin>>s;

	int size,i;
	size=s.size();
	cout<<size<<endl;
	queue<char>q;
	for(i=0;i<size-1;i++){
		if(!q.empty() && s[i]==q.rare()){
			q.pop();
		}
		else{
			q.push(s[i]);
		}
	}
	if(q.empty()){
		cout<<"the queue is empty";
	}
	else{
		while(!q.empty()){
			cout<<q.front();
			q.pop();
		}
	}
	return 0;
}


