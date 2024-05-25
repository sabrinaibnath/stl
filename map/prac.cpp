#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="learning to code is learning to create and innovate";
	//cout<<"enter your string:";
	//cin>>s;


	map<string,int>m;

	stringstream ss (s);
	string word;

	while(ss>>word){
		if(m.find(word)==m.end()){
			m.insert(make_pair(word,1));
		}
		else{
			m[word]++;
		}
	}

	map<string,int>::iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	return 0;
}
