#include<iostream>
using namespace std;

class A{
	public:
		A(){cout<<"contructor A\n";
		}
		~A(){cout<<"destructor A\n";
		}
};
class B:public A{
	public:
		B(){cout<<"contructor B\n";
		}
		~B(){cout<<"destructor B\n";
		}
};
class c:public B{
	public:
		c(){cout<<"contructor c\n";
		}
		~c(){cout<<"destructor c\n";
		}	
};

main(){
	c C;
}

