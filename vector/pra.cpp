#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);

	cout<<"the size is:"<<v.size()<<endl;
	cout<<"the vector with the help of just for loop";
	for(int num:v){
		cout<<num<<endl;
	}
	cout<<"the vector with the help of iterator"<<endl;
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++){
		cout<<(*it)<<endl;
	}
	return 0;

}

