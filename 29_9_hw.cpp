#include<iostream>
#include<stdlib.h>
using namespace std;

class student{
	public:
		string name;
		int r_no;
	protected:
		float cgpa;
};
class course: public student{
	protected:
     string course_name;
     int course_year;
	public:
		void get(){
			
			cout<<"Enter name of student:\n";
			getline(cin,name);
			cout<<"Enter name roll number:";
			cin>>r_no;
			cout<<"Enter cgpa";
			cin>>cgpa;
			cout<<"enter course name :";
		cin.ignore();
			getline(cin,course_name);
			cout<<"enter number of year will it take:";
			cin>>course_year;
		   }
		void print(){
			cout<<"student name is "<<name<<" . Who's roll number is "<<r_no<<" . His course name is "<<course_name<<" . It will take "<<course_year<<" years. His cgpa is "<<cgpa<<".";
		}
};

main(){
	course as;
	as.get();
	as.print();
	}
