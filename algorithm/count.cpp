#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v;
	int size;
	cout<<"enter the size pls:";
	cin>>size;

	cout<<"enter the vactor please:";
	for(int i=0;i<size;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}

	int target;
	cout<<"enter the item you are searching:";
	cin>>target;


	cout<<count(v.begin(),v.end(),target);

	return 0;
}
