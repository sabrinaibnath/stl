#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	int f=1;
	cin>>s1;
	cin>>s2;

	queue<char>qu1,qu2;

	for(int i=0;i<s1.size();i++){
		if(!qu1.empty() && s1[i]=='#'){
			qu1.pop();
		}
		else{
			qu1.push(s1[i]);
		}
	}
       for(int i=0;i<s2.size();i++){
		if(!qu2.empty() && s2[i]=='#'){
			qu2.pop();
		}
		else{
			qu2.push(s2[i]);
		}
	}
       if(qu1.size()!=qu2.size()){
	       f=0;
       }
       else{
	       while(!qu1.empty()){
		       if(qu1.front()==qu2.front()){
			       qu1.pop();
			       qu2.pop();
		       }
		       else{
			       f=0;
			       break;
		       }
	       }
       }
       if(f==1){
	       cout<<"yes";
       }
       else{
	       cout<<"no";
       }
       return 0;
}


