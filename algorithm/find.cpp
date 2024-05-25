#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>v;
	int size;
	cout<<"please enter the size:";
	cin>>size;

	int x;
	for(int i=0;i<size;i++){
		cin>>x;
		v.push_back(x);
	}

	cout<<"please enter the value you want to find:";
	int key;
	cin>>key;
	if(std::find(v.begin(),v.end(),key)!=v.end()){
		cout<<"found";
	}
	else{
		cout<<"not found";
	}
	return 0;
}
