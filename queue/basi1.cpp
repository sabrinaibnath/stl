#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int size;
	cout<<"enter your size";
	cin>>size;

	queue<int>q;
	cout<<"enter your element";
	int i,x;
	for(i=1;i<=size;i++){
		cin>>x;
		q.emplace(x);
	}

	cout<<"the queue is:";
	while(!q.empty()){
		cout<<q.front()<<",";
		q.pop();
	}
	return 0;
}
		

