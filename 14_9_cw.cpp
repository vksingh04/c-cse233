#include<iostream>
using namespace std;
main()
{
	string name;
	cout<<"enter name:\t";
	getline(cin,name);
	
	
	cout<<"name is:\t"<<name<<endl;
	
	cout<<name.size()<<endl;
	cout<<name.length()<<endl;
	cout<<name.capacity()<<endl;
	cout<<name.max_size()<<endl;
}
