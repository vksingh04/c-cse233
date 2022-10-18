#include<iostream>
using namespace std;

class largest {
	int a , b , c;
	public:
		void set_data(){
			cout<<"Enter a:";
			cin>>a;
			cout<<"Enter b:";
			cin>>b;
		}
		void print(){
		cout<<"larget number is:"<<c;
		}
		friend void find_max(largest &);
};
void find_max(largest &lrg){
	 if(lrg.a>lrg.b){
		 	lrg.c=lrg.a;
		 	cout<<"largest number is:"<<lrg.c;
		 }
		 
		 if(lrg.a<lrg.b){
		 	lrg.c=lrg.b;
		 	cout<<"largest number is:"<<lrg.c;
		 }
}
main(){
	largest m;
	m.set_data();
	find_max(m);
	m.print();
}
