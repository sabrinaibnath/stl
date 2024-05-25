#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v;
	for(int i=0;i<100;i++){
		int x;
		x=rand();
		v.push_back(x);
	}
	for(int num:v){
		cout<<num<<endl;
	}
	return 0;
}
