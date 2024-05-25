#include<iostream>
#include<list>
#include<sstream>
using namespace std;
int main()
{
list<string>s1={"data","is","the","new","oil","of","digital","economy"};
list<string>s2={"data","is","a","new","oil"};
s1.sort();
s2.sort();
s1.merge(s2);
for(string word:s1){
	cout<<word<<'\n';
}
//s1.sort();
s1.unique();
for(string word1:s1){

	cout<<word1<<",";
}
int count=0;
list<string>s4={"data","is","a","new","oil"};
list<string>s3={"data","is","the","new","oil","of","digital","economy"};
for(string word2:s3){
	for(string word3:s4){
		if(word2==word3){
		count++;
		}
	}
}
cout<<s1.size()<<'\n';
cout<<count<<'\n';
cout<<(double)count/(double)s1.size()<<endl;
return 0;
}
