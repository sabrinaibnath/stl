#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string name="sabrina ibnath oishy is a bitch";
	string word;

	stringstream ss(name);
	while(ss>>word){
		cout<<word<<",";
	}
	//cout<<endl;
	return 0;
}

