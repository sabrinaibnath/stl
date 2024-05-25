#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="learning to code is learning to create and innovate";
	string word;

	map<string,int>map1;
	stringstream ss(s);

	while(ss>>word){
		if(map1.find(word)==map1.end()){
			map1.insert(make_pair(word,1));
		}
		else{
			map1[word]++;
		}
	}
	map<string,int>::iterator it;
	for(it=map1.begin();it!=map1.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	return 0;
}
