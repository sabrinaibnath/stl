#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find_first_negative(vector<int>&v){
	for(int i=0;i<v.size();i++){
		if(v[i]<0){
			return i+1;
		}
	}
	return -1;
}
int main()
{
	vector<int>v;
	int size;
	cin>>size;
	for(int i=0;i<size;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}

	int result=find_first_negative(v);
	cout<<result;
	return 0;
}
