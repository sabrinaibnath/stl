#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1="Technical Interview Preparation";
	stack<string>s2;

	stringstream ss (s1);
	string word;
	while(ss>>word){
		s2.push(word);
		}
	while(!s2.empty()){
	cout<<s2.top()<<" ";
		s2.pop();
	}
	return 0;
}


