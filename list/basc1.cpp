#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>l;
	l={1,2,3};
	

	cout<<"the original list is:";
	for(int p:l){
		cout<<p<<",";
	}

	l.push_front(0);
	l.push_back(4);
	cout<<'\n';


	cout<<"the final list is:";
	for(int j:l){
		 cout<<j<<",";
	}
	return 0;
}
