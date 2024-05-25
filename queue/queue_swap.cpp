#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int size;
	cout<<"enter size:";
	cin>>size;

	queue<int>q1;
	queue<int>q2;
	cout<<"enter first queue";
	int x;
	for(int i=1;i<=size;i++){
		cin>>x;
		q1.push(x);
	}
	for(int i=1;i<=size;i++){
		cin>>x;
		q2.push(x);
	}
	q1.swap(q2);
	cout<<"the first queue is";
	while(!q1.empty()){
		cout<<q1.front()<<",";
		q1.pop();
	}
	cout<<"the second queue is";
	while(!q2.empty()){
		cout<<q2.front()<<",";
		q2.pop();
	}
	return 0;
}

