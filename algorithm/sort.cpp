#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"enter your string:";
	cin>>s;

	sort(s.begin(),s.end());

	cout<<s<<endl;

	
	string t(s);
	do{
		next_permutation(s.begin(),s.end());
		cout<<s<<" ";
	}while(s!=t);

		return 0;
}
