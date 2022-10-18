#include<iostream>
using namespace std;

class A{
	int h;
	public:
		int b;
		A(){
			h=10;
			b=20;
		}
	protected:
		int c;
		void get(){
			c=59852;
		}
};
class B: private A{
	public:
		void print(){
			get();
//	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
 }
};

main(){
	B ab;
	
	ab.print()
}
