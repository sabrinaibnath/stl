#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int>s;
	int size,x;
	cout<<"enter the size";
	cin>>size;
	cout<<"enter the element:";
	for(int i=1;i<=size;i++){
		cin>>x;
		s.insert(x);
	}

	cout<<"the set is:";
	for(int a:s){
		cout<<a<<",";
	}
	cout<<'\n';
	return 0;
}

	
