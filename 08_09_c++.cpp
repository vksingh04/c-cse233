#include<iostream>
using namespace std;

class check{
	int a;
	public:
		void verify(){
			if(a%2==0)
			cout<<"even number"<<endl;
		
		else
		cout<<"odd no."<<endl;
	}
		check()
		{
			a=100;
		}
		check(int x)
		{
			a=x;
		}
		check(check &ob)
		{
			a=ob.a;
		}
};

main()
{
	cout<<"c1"<<endl;
	check c1;
	c1.verify();
	int b;
	cout<<"enter a number";
	cin>>b;
	cout<<"c2"<<endl;
	check c2(b);
	c2.verify();
	cout<<"c3"<<endl;
	check c3;
	c3=c2;
	c3.verify();
	cout<<"c4"<<endl;
	check c4(c1);
	c4.verify();
}
