#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<double,double>>v;
	vector<double>v1;
	int size;
	cin>>size;
	for(int i=0;i<size;i++){
		pair<double,double>x;
		cin>>x.first;
		cin>>x.second;
		v.push_back(x);
	}
	double sum;
	pair<double,double>::iterator it;
	for(it=v.begin();it!=v.end();it++){
		sum=(*it).first*(*it).second;
		v1.push_back(sum);
	}

	sort(v1.begin(),v1.end());
	for(double num:v1){
		cout<<num<<" ";
	}
	return 0;
}

		

