#include<iostream>
using namespace std;

class admission
{
	private :
	    int reg_no;
	    static int i;
		
    	public:
	    	void getdata()
		      {

		     	cout<<"enter registraion number:";
		     	cin>>reg_no;
    
		      }
		    void print_data();
};
int admission::i;//initialisation or def.
void admission::print_data()
{
    i=1;
	cout<<"registration number of student "<<i<<" is:";
	cout<<reg_no<<endl;
	i++;
}

int main()
{
	admission a1;
	a1.getdata();
	a1.print_data();
	
	cout<<endl;
	
	admission a2;
	a2.getdata();
	a2.print_data();
	
	cout<<endl;
	
	admission
}
