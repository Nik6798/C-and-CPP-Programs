#include<iostream>
using namespace std;

int main()
{
	int arr[7]={0,1,2,3,6,5};
	int num,index=4;
	num=55;
	
	for(int i=6;i<=index;i--)
	{
		arr[i+1]=arr[i];
		if(i=4)
		{
		arr[index]=num;
	}}
	
	
	for(int i=0;i<7;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
