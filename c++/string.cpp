#include<iostream>
#include<string>
using namespace std;

main()
{char isAString[6]={'h','e','l','l','o','\0'};
char isNotAString[5]={'h','e','l','l','o'};
char i[6]="hello";
char nn[]="hhhhh";
string n="kkkkk";
cout<<isAString<<endl;
cout<<isNotAString<<endl<<i<<n<<nn;

struct beans
{
	string name;
	string origins;
	int rating;	
};

beans mybeans={"sora","florida",6};
beans newbeans;
newbeans.name="soru1";
newbeans.origins="canada";
cout<<"name of beans :" +newbeans.name+"origins :" + newbeans.origins+ "rating :"<<mybeans.rating;
}

union stort1
{
	//string name;
	//string class1[];
	int name;
};

stort1 c;
c.name=66;
cout<<c.name;

