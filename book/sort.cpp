#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>v;
	for(int i=0;i<10;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	cout<<"the real vector is:";
	for(int num:v){
		cout<<num<<" ";
	}
	cout<<"\n";
	cout<<"after sorting:";
	sort(v.begin(),v.end());
	for(int num:v){
		cout<<num<<" ";
	}
	return 0;
}
