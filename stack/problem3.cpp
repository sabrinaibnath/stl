#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int flag=1;
	string st1,st2;
	cout<<"enter 1st string:";
	cin>>st1;

	cout<<"enter 2nd string:";
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


      for( int i=0;i<st2.size();i++){
		if(!s2.empty() && st2[i]=='#'){
			s2.pop();
		}
		else{
			s2.push(st2[i]);
		}
	}

      if(s1.size() != s2.size()){
	      flag=0;
      }
      else{
	      while(!s1.empty()){
		      if(s1.top()==s2.top()){
		      s1.pop();
		      s2.pop();
	      }
		      else{
			      flag=0;
		      }
	      }
      }

      if(flag==0){
	      cout<<"flase";
      }
      else{
	      cout<<"true";
      }
      return 0;
}


      
	
	      




