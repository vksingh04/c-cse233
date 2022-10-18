#include<iostream>
using namespace std;

//class{
//};

main(){
	string s="jass op";
	cout<<s[0]<<endl;
	cout<<s.at(1)<<endl;
	cout<<s.find_first_of('a')<<endl;
	cout<<s.find_last_of('s')<<endl;
	cout<<s.find("op")<<endl;
	cout<<s.substr(2,6)<<endl;	
}
