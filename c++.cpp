#include<iostream>
using namespace std;

int main()
{
	{
	int age;
	cout<<"enter age";
	cin>>age;
	
	if(age>=18)
	{cout<<"you can vote";
	}
	else{
	cout<<"you can't vote";
	}
	}
{
int a , b, age;
cout<<"enter value of a :";
cin>>a;

cout<<"enter age :\n";
cout<<"enter value of b:";
cin>>b;
  for (int i=a ;i<=b ; i++)
  {
  	if(i==10)
  	break;
  	else
  	cout << "2*"<<i<<"="<<2*i<<endl;
		
  }
}

	int i;
	i=1;
	while(i<=10)
	{
		cout << "2*"<<i<<"="<<2*i<<endl;
		 i++;
	}
	cout<<"thank you";
}


