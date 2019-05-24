#include<iostream>
#include<string>
using namespace std;

void PassByValue(int a)
{
	cout << "you are in PassByValue :"<<endl;
	a++;
	cout << "the value increased is: " << a<<endl;
	
}

void PassByRef(int &num)
{
	cout << "you are in passByRef :\n";
	num=50;
	cout << "the value of new pNum is: " << num<<endl;
}
class person
{
public:
	string name;
	int age, height, weight;
};

void ModifyPerson(person &in)
{
	cout << "\nyou are in modifyperson :";
	in.age = 19;
	in.height = 5;
	in.name = "pul";
	in.weight = 59;
}
int main()
{
	int num1 = 3, num2;
	int *pNum = &num2;
	*pNum = 5;
	cout << "\nyou are passing num1=3 :";
	PassByValue(num1);
	cout << "\nthe value of num1 is :" << num1<<endl;
	cout << "\nyou are passing pNum=5 :";
	PassByRef(*pNum);
	cout << "\nyou are in main :\n" << "\nthe value of pNum is :" << *pNum;
	PassByValue(*pNum);
	cout << "\nyou are in main :\n" << "\nthe value of pNum is :" << *pNum;
	double *po = new double;
	*po = 55;
	cout <<"\nthe value of po is :"<< *po;
	delete po;
	cout << "\nthe value of po after deletion is :" << *po;
	person obj;
	obj.age = 20;
	obj.height = 6;
	obj.name = "nik";
	obj.weight = 56;
	cout<<"\nage"<< obj.age<< "\nheight"<< obj.height<<"\nweight" << obj.weight;
	cout << "name "<<obj.name;

	ModifyPerson(obj);
	cout << "\nyou are in main :";
		cout << "\nage" << obj.age << "\nheight" << obj.height << "\nweight" << obj.weight;
	cout << "name " << obj.name;

}


