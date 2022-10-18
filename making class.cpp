#include<iostream>
using namespace std;
//this is a class student
class student
{
	private:
		int reg_number; //these 3 are private dara members
		char grade;
		float cgpa;
		
		public:
			void get()//function declaration + function defination // also known  as inline function
			{
				cout << "enter registration number:\n";
				cin>> reg_number;
				cout<< "enter grade:\n";
				cin>>grade;
				cout<<"enter cgpa:\n";
				cin>>cgpa;
		}
	void print(); //function declaration //also known as non inline function

};
void student::print()//function defination
{
	cout<<"The Student details are:\n";
	cout<<reg_number<<endl;
	cout<< grade;
	cout<<cgpa;	
}
main()
{
	student s1;
	student s2;
	cout<<"\ns1\n";
	s1.get();
	cout<<"\ns2\n";
	s2.get();
	cout<<"\ns1\n";
	s1.print();
	cout<<"\ns2\n";
	s2.print();
}
