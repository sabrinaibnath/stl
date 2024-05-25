#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int>d;
	int size;
	cout<<"enter the size:";
	cin>>size;

	for(int i=0;i<size;i++){
		int x;
		cin>>x;
		d.push_back(x);
	}

	d.push_back(3);
	d.push_front(0);


	for(int n:d){
		cout<<n<<",";
	}
	return 0;
}
