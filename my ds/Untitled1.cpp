#include<iostream>
using namespace std;
int main()
{
    //Firstly we declare the variable which will store our number that is (10)
    int num=10,comp;

    /*and we declare two array also one for storing numbers which are
    given and second for the outputted array*/
    int giv[6]={4,5,12,-2,8,9},out[2];

    //now we do our main part of coding
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            comp=giv[2]+giv[3];

                out[0]=giv[i];
                out[1]=giv[j];

        }
    }

    for(int i=0;i<2;i++)
    {
        cout<<out[i];
    }

    return 0;
}
