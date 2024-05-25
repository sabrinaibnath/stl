#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int>d;
	int size;
	cout<<"enter the size";
	cin>>size;

	int x;
	for(int i=1;i<=size;i++){
		cin>>x;
		d.push_back(x);
	}

	deque<int>::iterator it;
	for(it=d.begin();it!=d.end();it++){
		cout<<(*it)<<",";
	}

	return 0;
}

