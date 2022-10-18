#include<iostream>
using namespace std;
class admission
{
	private :
		double stud_name;
	int reg_no;
		
    	public:
	    	void getdata()
		      {
//		     	cout<<"enter name :\n";
//		     	cin>>stud_name;
//d:
		     	cout<<"enter registraion number:\n";
		     	cin>>reg_no;
//		     	if(reg_no>=100000000 || reg_no<=10000000)
//		     	{
//		     		cout<<"invalid input.\nenter again\n\n";
//		     		goto d;
//				 }
		      }
		    void print_data();
};
void admission::print_data()
{
//	cout<<"student name:\n";
//	cout<<stud_name;

	cout<<"registration number is:";
	cout<<reg_no<<endl;
}

int main()
{
	admission student1;
	admission student2;
	admission student3;
	admission student4;
	admission student5;
	
	cout<<"\nregistration no. of student are:\n";
	cout<<"\nstudent1\n";
	student1.getdata();
	cout<<"\nstudent2\n";
	student2.getdata();
	cout<<"\nstudent3\n";
	student3.getdata();
	cout<<"\nstudent4\n";
	student4.getdata();
	cout<<"\nstudent5\n";
	student5.getdata();
	
	cout<<"\nstudent1\n";
	student1.print_data();
	cout<<"\nstudent2\n";
	student2.print_data();
	cout<<"\nstudent3\n";
	student3.print_data();
	cout<<"\nstudent4\n";
	student4.print_data();
	cout<<"\nstudent5\n";
	student5.print_data();
	
}
