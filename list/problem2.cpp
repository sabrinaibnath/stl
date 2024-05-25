#include<iostream>
#include<list>
#include<sstream>
using namespace std;
int main()
{
	string bi,bi2;
	float count1=0,count2=0,count3=0,count4=0;
	float sum1,sum2;
	cout<<"please enter your first string:";
	cin>>bi;
	cout<<"please enter your second string:";
	cin>>bi2;
	int s1,s2;
	s1=bi.size();
	s2=bi2.size();
cout<<s1<<'\n';
cout<<s2<<'\n';
		for(int i=0;i<s1;i++){
			if(bi[i] == '0' && bi2[i] == '1'){
				count1=count1+1;
			}
			else if(bi[i]=='1' && bi2[i]=='0'){
				count2=count2+1;
			}
			else if(bi[i]=='0' && bi2[i]=='0'){
				count3=count3+1;
			}
			else if(bi[i]=='1' && bi2[i]=='1'){
				count4=count4+1;
			}
		}

		cout<<count1<<'\n';
                cout<<count2<<'\n';
                 cout<<count3<<'\n';
                cout<<count4<<'\n';



	sum1=count3+count4;
	sum2=count1+count2+count3+count4;
        cout<<sum1<<'\n';
	cout<<sum2;
	double smc;
	smc=sum1/sum2;
	cout<<"the result"<<smc;

return 0;
}

