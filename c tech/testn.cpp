#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value in the :";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cout<<"*";
        for(int j=1;j<i;j++)
        {
           cout<<" ";
        }
        cout<<"*";
        for(int k=n;k>i;k--)
            cout<<" ";
        cout<<"*";
        cout<<endl;
    }
}
