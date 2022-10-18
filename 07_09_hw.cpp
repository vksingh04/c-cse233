#include<iostream>
using namespace std;

class point{

	int x,y;
	public:
		
	point(){
		cout<<"enter x:";
		cin>>x;
		cout<<"enter y:";
		cin>>y;		
	}
	
	point(int a,int s){
		x=a;
		y=s;
	}
	point(int a){
		x=0;
		y=0;
	}
	
		void print(){
		cout<<"value of x :"<<x<<endl;
		cout<<"value of y :"<<y<<endl;
	}
};

main()
{
	point p1;
	p1.print();
	point p2(8,6);
	p2.print();
	point p3(1);
	p3.print();
	
}
