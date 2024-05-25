#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	cout<<"enter how many value:";
	int size,x;
	cin>>size;


	cout<<"enter the element";
	for(int i=0;i<size;i++){
		cin>>x;
		v.push_back(x);
	}

	cout<<"the vector is:";
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++){
		cout<<(*it)<<","<<endl;
	}
	return 0;
}
