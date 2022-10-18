#include<iostream>
using namespace std;

class team{
	int player;
	int scr;
		
	public:
		void get(){
			int *o=&scr;
			cout<<"enter the score :";
			cin>>*o;
			cout<<"enter no. of student :";
			cin>>player;
		}
		void print(){
			cout<<"the average of student :"<<scr/player;
		}
};
main()
{
	team a;
	a.get();
	a.print();
	cout<<endl;
	
	team *pt=&a;//pointer to object
	pt->print();
	cout<<endl;
	
	void(team::*pf)()=&team::print();//pointer to member function
	t.(*pf)();
	pt->(*pf)();
}
