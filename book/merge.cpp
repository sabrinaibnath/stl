#include<iostream>
#include<vector>
#include<list>
#include<set>
#include<string>
using namespace std;
int main()
{
	vector<string>c1{"delta","beta","alpha"};
	list<string>c2{"delta","beta","alpha"};
	set<string<c3{"one","two","four"};
	vector<string>d1;
	list<string>d2;
	set<string>d3;
	merge(c1,c2,d1);
	output(cout,d1)<<"\n";
	merge(c2,c3,d2);
	output(cout,d2)<<"\n";
	merge(c1,c3,d3);
	output(cout,d3)<<"\n";
	return 0;
}
