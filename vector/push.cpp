#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	int size;
	cin>>size;
	cout<<"please give the value:";
	for(int j=0;j<size;j++){
		int x;
		cin>>x;
		v.push_back(x);
	}

//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);


	for(int p:v){
		cout<<p<<",";
	}
	cout<<'\n';
	cout<<"with the help of iterator:";
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++){
		cout<<(*it)<<",";
	}
	return 0;
}
