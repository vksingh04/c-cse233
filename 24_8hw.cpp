#include<iostream>
using namespace std;

class marks
{
	private:
		int roll_no;
		int english;
		int hindi;
		int maths;
		int science;
		int sst;

public:

void get()
   {

        cin>>roll_no;
      cout<<"\nEnter marks:\n";
         cout<<"\nEnglish:";
         cin>>english;
         cout<<"\nHindi:";
         cin>>hindi;
         cout<<"\nMaths:";
         cin>>maths;
         cout<<"\nScience:";
         cin>>science;
         cout<<"\nS.S.T:";
         cin>>sst;
   } 
     void print();
    };
void marks::print()
{
    cout<<"Roll number of the student:";
    cout<<roll_no;
      cout<<"marks are:";
         cout<<"English";
         cout<<english<<endl;
         cout<<"Hindi:";
         cout<<hindi<<endl;
         cout<<"Maths:";
         cout<<maths<<endl;
         cout<<"science:";
         cout<<science<<endl;
}

main()
{
	static int i;
	int n;
	cout<<"Enter no. of student:";
    cin>>n;
     marks m[n];
     
   for (i=1;i<=n;i++)
  {
  	cout<<"\nEnter roll no. of student "<<i<<":";
     m[i].get();
  }	
   for (i=1;i<=n;i++)
   {
   	cout<<"\nMarks of student"<<i<<"is";
   	 m[i].print();
   }
   return 0;
}
