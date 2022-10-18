#include<iostream>
using namespace std;

class demo{
	public:
		int b;
		void show(){
			cout<<b;
		}
};
class demo1:public demo{
	public:
		int c;
		void show(){
			cout<<b<<endl<<c;
		}
};
main(){
	demo d;
	demo *dptr;
	dptr=&d;
	dptr->b=100;
	dptr->show();
	
	demo1 D;
	dptr=&D;
	dptr->b=200;
//	dptr->c=300;
	dptr->show();
}
