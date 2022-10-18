//#include<iostream>
//using namespace std;
//inline void sum()
//{
//	int a,b;
//	cin>>a>>b;
//	cout<<a+b;
//}
//main()
//{
//	sum();
//}

#include<iostream>
using namespace std;

class shapes
{
	public :
		void area(int u)
		{
			int r;
			cout<<"enter the radius: ";
			cin>>r;
			cout<<"the area of circle is: "<<3.14*r*r;
		}
};
main()
{
	shapes r;
	r.area(5);
}
