#include<iostream>
using namespace std;

class game{
	char type_of_game;
	int seats;
	public:
		
	game(){
		cout<<"enter type of game:\n";
		cin>>type_of_game;
		cout<<"enter no. of seats:\n";
		cin>>seats;
	}
	
		void print(){
		cout<<"type of game:"<<type_of_game<<endl;
		cout<<"number of seats:"<<seats;
	}
};

main(){
	game g1,g2;
	g1.print();
	cout<<endl;
	g2.print();
}
