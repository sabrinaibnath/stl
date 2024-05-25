#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int calsum1(const vector<long long>&v){
	int sum=0;
	for(auto i=v.begin();i!=v.end();++i){
		sum=sum+(*i);
	}
	return sum;
}
int calsum2(const vector<long long>&v){
	int sum=0;
	for(int i=0;i<v.size();++i){
		sum=sum+v[i];
	}
	return sum;
}
int main()
{
	vector<long long>v;
	int size;
	cout<<"please enter your size:";
	cin>>size;
	for(int i=0;i<size;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	int result1=calsum1(v);
	cout<<"the result of calsum1:"<<result1<<endl;
	int result2=calsum2(v);
	cout<<"the result of calsum2:"<<result2<<endl;
	return 0;
}

