#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
class details{
	protected:
		string name;
	public:
	void get(){
		cout<<"Enter name : ";
		getline(cin,name);
	}
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
class instagram:virtual public details{
	protected:
		string insta_id;
	public:
		void get(){
			cout<<"enter insta id: ";
			cin>>insta_id;
		}
};
///////////////////////////////////////////////////////////////////////////////////////////////////////
class snapchat:virtual public details{
	protected:
		string snap_id;
	public:
		void get(){
			cout<<"Enter snap id: ";
			cin>>snap_id;
		}
};
//////////////////////////////////////////////////////////////////////////////////////////////////////
class social_media: public instagram, public snapchat{
	public:
	void print(){
		cout<<"Person name is : "<<name<<"\n";
		cout<<"Social media ids are as follow: \n";
		cout<<insta_id<<endl;
		cout<<snap_id<<endl;
	}
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
main(){
	social_media v;
	v.details::get();
	v.instagram::get();
	v.snapchat::get();
	v.print();
}
