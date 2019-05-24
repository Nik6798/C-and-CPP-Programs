#include<iostream>
using namespace std;

int main()
{
	int arr[8]={0,1,2,3};
	arr[10]='g';
	for(int i=0;i<=10;i++)
	{
		cout<<i<<arr[i]<<endl;
	}

}
