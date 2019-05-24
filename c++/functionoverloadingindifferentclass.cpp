#include<iostream>
using namespace std;
class a
{
    public:
    void fun(int a)
    {
        cout<<"this is fun of a :"<<a;
    }
};

class b : public a
{
    public:
    void fun(int a,int b)
    {
        cout<<"this is fun of b :"<<a;
    }
};

int main ()
{
    b ob;
    ob.fun(2,2);
}
