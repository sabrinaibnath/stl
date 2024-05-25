#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	list<string>s1={"data","is","the","new","oil","of","digita","economy"};
	list<string>s2={"data","is","a","new","oil"};

	s1.sort();
	s2.sort();
	s1.merge(s2);
	s1.unique();
	int s=s1.size();

	cout<<s<<endl;
        list<string>s3={"data","is","the","new","oil","of","digita","economy"};
	list<string>s4={"data","is","a","new","oil"};
	

//	list<string>l3;
	s3.sort();
	s4.sort();
//	set_intersection(s3.begin(),s3.end(),
//		s4.begin(),s4.end(),
//		back_inserter(l3));
//
	int count=0;
//	for(string num:l3){
//		cout<<num<< " ";
//		count++;
//	}
//	cout<<count<<endl;

	
	for(string word:s3){
		for(string word1:s4){
			if(word==word1){
				count++;
			}
		}
	}
	cout<<count<<endl;

	cout<<(double)count/(double)s<<endl;

	return 0;
}
