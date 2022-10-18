#include<iostream>
using namespace std;
class admission
{
	private :

	   int reg_no;
    	public:
	    	void getdata()
		      {
d:
		     	cin>>reg_no;
		     	if(reg_no>=100 || reg_no<=10)
		     	{
		     		cout<<"invalid input.\nnenter again\n\n";
		     		goto d;
				 }
		      }
		    void print_data();
};
void admission::print_data()
{
  	cout<<reg_no<<endl;
}

int main()
{   int n,i;
	
    cout<<"enter the number of students:";
    cin>>n;
    admission student[i];
    
	for(i=1;i<=n;i++)
 { cout<<"enter the registration number of student "<<i<<" is "<<endl;
   student[i].getdata(); 
}
cout<<"registration number are:\n";
for(i=1;i<=n;i++)
{
	cout<<" student "<<i<<" is:\n";
	 student[i].print_data();
}

 }




