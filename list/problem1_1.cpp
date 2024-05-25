#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<list>
using namespace std;
int main()
{
	list<string>doc1={"Data", "is", "the", "new", "oil", "of", "the" ,"digital", "economy"};
	list<string>doc2={"Data", "is", "a", "new", "oil"};

	doc1.sort();
	doc1.sort();
	doc1.merge(doc2);

	int s=doc1.size();
	for(auto p:doc1){
		cout<<p<<endl;
	}
	
	doc1.unique();
	s=doc1.size();
	cout<<s<<endl;

	list<string>doc3={"Data", "is", "the", "new", "oil", "of", "the" ,"digital", "economy"};
	list<string>doc4={"Data", "is", "a", "new", "oil"};
        int count=0;
	for(string word1:doc3){
		for(string word2:doc4){
			if(word1==word2){
				count++;
			}
		}
	}
	cout<<count<<endl;
	cout<<(double)count/(double)s;
	return 0;
}
        





