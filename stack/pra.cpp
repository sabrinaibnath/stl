#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string st1,st2;
	int f=1;
	cout<<"enter first string:";
	cin>>st1;
	cout<<"enter second string:";
	cin>>st2;

	stack<char>s1;
	stack<char>s2;


	for(int i=0;i<st1.size();i++){
		if(!s1.empty() && st1[i]=='#'){
			s1.pop();
		}
		else{
			s1.push(st1[i]);
		}
	}
       for(int i=0;i<st2.size();i++){
		if(!s2.empty() && st2[i]=='#'){
			s2.pop();
		}
		else{
			s2.push(st2[i]);
		}
	}

       if(s1.size()!=s2.size()){
	       f=0;
       }
       else{
	       while(!s1.empty()){
		       if(s1.top()==s2.top()){
			       s1.pop();
                               s2.pop();
		       }
		       else{
			       f=0;
			       break;
		       }
	       }
       }
       if(f==0){
	       cout<<"false";
	}
       else{
	       cout<<"true";
       }
       return 0;
}

