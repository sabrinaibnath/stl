#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int flag=1;
	string st1,st2;
	cout<<"enter first string:";
	cin>>st1;

	cout<<"enter second string:";
	cin>>st2;

	queue<char>qu1;
	queue<char>qu2;

	for(int i=0;i<st1.size();i++){
		if(!qu1.empty() && st1[i]=='#'){
			qu1.pop();
		}
		else{
			qu1.push(st1[i]);
		}
	}


        for(int i=0;i<st2.size();i++){
		if(!qu2.empty() && st2[i]=='#'){
			qu2.pop();
		}
		else{
			qu2.push(st2[i]);
		}
	}


	if(qu1.size() != qu2.size()){
		flag=0;
	}
	else{
		while(!qu1.empty()){
			if(qu1.front()==qu2.front()){
				qu1.pop();
				qu2.pop();
			}
			else{
				flag=0;
				break;
			}
		}
	}
	if(flag==0){
		cout<<"false";
	}
	else{
		cout<<"true";
	}
	return 0;
}


