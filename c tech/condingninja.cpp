#include<iostream>
using namespace std;
int main()
{
    int n,sume=0,sumo=0;
    cout<<"Enter the number of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements :";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(arr[i]%2==0)
            {
                sume=sume+arr[i];
            }
        }

        else if(i%2!=0)
        {
            if(arr[i]%2!=0)
            {
                sumo=sumo+arr[i];
            }
        }
    }

    cout<<"\nthe sum of the even and the number whose index is even is :"<<sume;
    cout<<"\nthe sum of the odd and the number whose index is odd is :"<<sumo;
}
