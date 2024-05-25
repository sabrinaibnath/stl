#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<string,int>p;
	p.insert({"avocado",80});
	p["melon"]=90;
	p.insert(make_pair("mango",60));

	map<string,int>::iterator it;
	for(it=p.begin();it!=p.end();++it){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	return 0;
}

