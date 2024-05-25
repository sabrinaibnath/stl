#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v;
	int size,count=0;
	cout<<"enter the size";
	cin>>size;
	for(int i=0;i<size;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}

	for(int i=0;i<size;i++){
		if(v[i]%2!=0){
			count++;
		}
	}
	if(count==size){
		cout<<"all element are integer";
	}
	else{
		cout<<"all element are not interger";
	}
	return 0;
}


