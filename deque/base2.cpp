#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="dept of cse cu";
	stringstream ss (s);
	string word;
	while(ss>>word){
		cout<<word<<endl;
	}
	cout<<endl;
	return 0;
}
