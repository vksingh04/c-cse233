#include<iostream>
using namespace std;
class course

{
int roll_num;

float mark1;

float mark2;

float mark3;

float mark4;

public:

void get()
    {

   cout<<"Enter roll number of the student :";

   cin>>roll_num;

   cout<<"Enter marks of 1st subject:";

   cin>>mark1;

    cout<<"Enter marks of 2nd subject :";

cin>>mark2;

    cout<<"Enter marks of 3rd subject :";

cin>>mark3;

   cout<<"Enter marks of 4th subject :";

   cin>>mark4;
   }
   
void print()
{
cout<<"Roll number of the student is: ";
cout<<roll_num<<endl;
cout<<"Marks scored by the student in 1st subject: ";
cout<<mark1<<endl;
cout<<"Marks scored by the student in 2nd subject: ";
cout<<mark2<<endl;
cout<<"Marks scored by the student in 3rd subject: ";
cout<<mark3<<endl;
cout<<"Marks scored by the student in 4th subject: ";
cout<<mark4<<endl;
};

main()
{
	int i;
  course c[4];
     
   for (i=0;i<4;i++)
  {
  c[i].get();
   c[i].print();
  }	
}
