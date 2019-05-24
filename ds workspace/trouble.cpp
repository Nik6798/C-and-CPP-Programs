#include<iostream>
using namespace std;

class A
{public:
	
	int a;
	A()
	{
		a=33;
	}
};

class B:public A
{
	public:
	int b;
		 B()
	{
		b=23;
		b=b+a;
		cout<<endl<<b;
	}

};

class C:public A
{
	public :
		int c;
		void f2()
		{
			c=55;
			c=c+a;
			cout<<endl<<c;
		}
};


main()
{
	B o1;
	C o2;
	
	o2.f2();
	
}








