#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<string>s1={"data","is","the","new","oil","of","digital","economy"};
	set<string>s2={"data","is","a","new","oil"};

	s1.merge(s2);
	int count=0;
	for(string s:s1){
		cout<<s<<endl;
		count++;
	}
	cout<<count<<endl;
        set<string>s3={"data","is","the","new","oil","of","digital","economy"};
	set<string>s4={"data","is","a","new","oil"};
	list<string>s5;

	set_intersection(s3.begin(),s3.end(),
			s4.begin(),s4.end(),
			back_inserter(s5));
	int count2=0;
	for(string s2:s5){
		cout<<s2<<endl;
		count2++;
	}
	cout<<count2<<endl;
	cout<<(double)count2/(double)count<<endl;


	return 0;
}
