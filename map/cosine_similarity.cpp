#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string st1,st2,word;
	getline(cin,st1);
	getline(cin,st2);

	list<string>l1,l2;
	set<string>s1;
	map<string,int>mp1,mp2;
	vector<int>v1,v2;
	int dot=0,mag1=0,mag2=0;

	stringstream ss(st1);
	while(ss>>word){
		l1.push_back(word);
	}

	stringstream ss1(st2);

	while(ss1>>word){
		l2.push_back(word);
	}

	for(string num:l1){
		s1.insert(num);
	}
	for(string num:l2){
		s1.insert(num);
	}

	for(string word:s1){
		for(string num:l1){
			if(word!=num){
				mp1.insert(make_pair(word,0));
			}
			else{
			mp1[word]++;
			}
		}
	}
	for(string word:s1){
		for(string num:l2){
			if(word!=num){
				mp2.insert(make_pair(word,0));
			}
			else{
			mp2[word]++;
			}
		}
	}

	for(auto it=mp1.begin();it!=mp1.end();it++){
	                  v1.push_back((*it).second);
			}
         for(auto it2=mp2.begin();it2!=mp2.end();it2++){
	                  v2.push_back((*it2).second);
			}

			for(size_t i=0;i<v1.size();i++){
			dot+=v1[i]*v2[i];
			mag1+=v1[i]*v1[i];
			mag2+=v2[i]*v2[i];
			}
			double magnitude1=sqrt(mag1);
			double magnitude2=sqrt(mag2);

			double cos=dot/(magnitude1*magnitude2);
			cout<<acos(cos)*(180/3.1416);
			return 0;
			}






