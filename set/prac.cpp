#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<string>s1={"data","is","the","new","oil","of","digital","economy"};
	set<string>s2={"data","is","a","new","oil"};

	s1.merge(s2);

	int result1=s1.size();
	//cout<<result1<<endl;

        set<string>s3={"data","is","the","new","oil","of","digital","economy"};
	set<string>s4={"data","is","a","new","oil"};



	list<string>common;

	set_intersection(s3.begin(),s3.end(),
			s4.begin(),s4.end(),
			back_inserter(common));

	int count=0;
	for(auto v:common){
		//cout<<v<<endl;
		count++;
	}

	cout<<(double)count/(double)result1;





	return 0;
}
