#include<iostream>
using namespace std;
class A{
	public:
		virtual void show(){
			cout<<"parent\n";
		}
		void print(){
			cout<<"bye";
		}
};
class B:public A{
	public:
		void show(){
			cout<<"child \n";
		}
		void get(){
			cout<<"hi\n";
		}
};
main(){
	A *aptr;
	A a;
	aptr=&a;
	aptr->show();
	
	B b;
	aptr=&b;
	aptr->show();
	aptr->A::show();
	((B*)aptr)->get();
	aptr->print();
}
