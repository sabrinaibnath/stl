#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>l;
	int size,x;
	cout<<"enter the size pls:";
	cin>>size;

	cout<<"enter the element:";
	for(int i=1;i<=size;i++){
		cin>>x;
		l.push_back(x);
	}


        
	cout<<"the list is:";
	list<int>::iterator it;
	for(it=l.begin();it!=l.end();it++){
		cout<<(*it)<<",";
	}


        cout<<'\n';
	l.reverse();
	cout<<"after reversing:";
	for(it=l.begin();it!=l.end();it++){
		cout<<(*it)<<",";
	}

	cout<<'\n';
	l.sort();
	cout<<"after sorting";
	for(it=l.begin();it!=l.end();it++){
		cout<<(*it)<<",";
	}
	
	cout<<'\n';
	l.unique();
	cout<<"after using unique function";
	for(it=l.begin();it!=l.end();it++){
		cout<<(*it)<<",";
	}
	return 0;
}
