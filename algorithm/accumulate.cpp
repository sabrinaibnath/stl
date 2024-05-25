#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
	vector<int>v;
	v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(2);

	cout<<"v contains:";
	for(int s=0;s<v.size();++s){
		cout<<v[s]<<" ";
	}
	cout<<endl;
	cout<<"the sum is:"<<accumulate(v.begin(),v.end(),0)<<endl;
	cout<<"inner product:"<<inner_product(v.begin(),v.end(),v.begin(),0)<<endl;
	return 0;
}
