#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cout<<"enter the first string:";
	cin>>s1;
	cout<<'\n';
	cout<<"enter the second string";
	cin>>s2;
	int s=s1.size();
	int n1=0,n2=0,n3=0,n4=0;


	for(int i=0;i<s;i++){
		if(s1[i]=='0' && s2[i]=='1'){
			n1++;
		}
		else if(s1[i]=='1' && s2[i]=='0'){
			n2++;
		}
		else if(s1[i]=='0' && s2[i]=='0'){
			n3++;
		}
		else if(s1[i]=='1' && s2[i]=='1'){
			n4++;
		}
	}
	int sum1=n4+n3;
	int sum2=n1+n2+n4+n3;
	cout<<(double)sum1/(double)sum2;
	return 0;
}
