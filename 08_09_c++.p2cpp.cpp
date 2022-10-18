#include<iostream>
using namespace std;

class game
{
	public:
			game()
			{
				cout<<this<<"\tconstructor\n\n";
			}
			~game()
			{
				cout<<this<<"\tdestructor\n\n";
			}
		
};
main()
{
	game g1;
	game g2;
	game g3;
	
}

	
