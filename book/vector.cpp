#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>getVector1(int n){
	vector<int>v1;
	for(int i=0;i<n;i++){
		v1.push_back(i);
	}
	return v1;
}
vector<int>getVector2(int n){

	vector<int>v2;
	v2.reserve(n);
	for(int i=0;i<n;i++){
		v2.push_back(i);
	}
	return v2;
}
int main()
{
	vector<int>v,v1;
	int size;
	cout<<"enter your size:";
	cin>>size;
	v=getVector1(size);
	cout<<"this is using getVector1:";
	for(int num:v){
		cout<<num<<" ";
	}
	v1=getVector2(size);
	cout<<endl;
	cout<<"this is using getVector2:";
	for(int num:v1){
		cout<<num<<" ";
	}
	return 0;
}
