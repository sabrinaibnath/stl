#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1="learning to code is learning to create and innivate";
	string word;
	map<string,int>m;
	stringstream ss(s1);
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
