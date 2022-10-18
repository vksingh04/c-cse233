#include<iostream>
using namespace std;

class demo{
	int a,b;
	public:
		void get(){
			cout<<"enter a and b:"<<endl;
			cout<<"enter a:\n";
			cin>>a;
			cout<<"enter b:\n"<<endl;
			cin>>b;
		    } 
	    void print(){
	    	cout<<"sum"<<a+b<<endl;
		}
		friend void put(demo &);// friend is used to use private outside the class.
};

void put(demo &sd){
	cout<<"a:"<<sd.a<<"\nb:"<<sd.b<<endl;
}

main(){
	demo d;
	d.get();
	put(d);
	d.print();
}
