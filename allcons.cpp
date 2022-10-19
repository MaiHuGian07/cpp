#include<iostream>
using namespace std;

class sample
{
	int a,b,c;
	public:
	sample();
	sample(int,int,int);
	sample(sample &);
	void display()
	{
		cout<<"\n a= "<<a<<"b= "<<b<<"c= "<<c;
	}
};
	sample::sample()
	{
		cout<<"\nDefault constructor invoked...";
		a=0;
		b=0;
		c=0;
	};
	sample::sample(int i, int j, int k)
	{
		cout<<"\nParameterised constructor invoked...";
		a=i;
		b=j;
		c=k;
	}
	sample::sample(sample &s)
	{
		cout<<"\nCopy constructor invoked...";
		a=s.a;
		b=s.b;
		c=s.c;
	}

int main()
{
	sample c1,c2;
	sample c3(1,2,3);
	sample c4(c3);
	c2=c4;
	cout<<"\nMembers of c1 are " ;
	c1.display();
	cout<<"\nMembers of c2 are" ;
	c2.display();
	cout<<"\nMembers of c3 are " ;
	c3.display();
	cout<<"\nMembers of c4 are " ;
	c4.display();
	
	return 0;
	
}

