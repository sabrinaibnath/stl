#include<iostream>
#include<queue>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
	string s="Technical Interview Preparation";
	string word;
	string m;

	queue<string>q;
	stack<string>s1;

	stringstream ss(s);
	while(ss>>word){
		q.push(word);
	}
	while(!q.empty()){
		m=q.front();
		s1.push(m);
		q.pop();
	}
	while(!s1.empty()){
		cout<<s1.top()<<" ";
		s1.pop();
	}
	return 0;
}


