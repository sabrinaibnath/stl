#include<iostream>
#include<map>
#include<set>
#include<fstream>
using namespace std;
int main()
{
	map<string,float>balancemap,balancemap2;
	string key,key2,key3;
	float value,value2,value3;



	ifstream infile("oldmast.txt");
	
		cout<<"oldmast.txt file"<<endl;
		cout<<"A/C No"<<" "<<"Balance"<<endl;
		while(infile>>key>>value){
			cout<<key<<" "<<value<<endl;
			balancemap.insert({key,value});
		}

	infile.close();

	cout<<endl;


	ifstream infile2("trans.txt");
		cout<<"trans.txt file"<<endl;
		cout<<"A/C No"<<" "<<"Transaction Amount"<<endl;
		while(infile2>>key2>>value2){
			cout<<key2<<" "<<value2<<endl;
			if(balancemap2.find(key2)==balancemap2.end()){
				balancemap2.insert({key2,value2});
			}
			else{
				balancemap2[key]+=value2;
			}
		}

	infile2.close();

	ofstream outfile("log.txt");
		cout<<"log.txt"<<endl;
		for(auto it=balancemap2.begin();it!=balancemap2.end();it++){
			key3=(*it).first;
			value3=(*it).second;
			if(balancemap.find(key3)!=balancemap.end()){
				balancemap[key]+=value3;
			}
			else{
				outfile<<"Unmatched transition for A/C No"<<key3<<endl;
			}
		}

	outfile.close();

	ofstream outfile2("newmast.txt");
		cout<<"newmast.txt file"<<endl;
		cout<<"A/C NO"<< " "<<"balance"<<endl;
		for(auto it1=balancemap.begin();it1!=balancemap.end();it1++){
			outfile2<<(*it1).first<<" "<<(*it1).second<<endl;
		}
	outfile2.close();
	return 0;
}


