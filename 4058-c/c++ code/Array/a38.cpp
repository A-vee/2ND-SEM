//38. Write a C++ program to segregate all 0s on left side and all 1s on right side of a given array of 0s and 1s
#include<iostream>
using namespace std;

int main()
{
	int arr[20],n,i;
	cout<<"Entre number of elements (1-20) : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	int c1=0,c0=0,j;
	int ca1[20],ca0[20];
	for(i=0;i<n;i++)
	{
		if(arr[i]==1)
		{
			c1++;
			for(j=0;j<c1;j++)
			{
				ca1[i]=arr[i];
			}
		}
		else if(arr[i]==0)
		{
			c0++;
			for(j=0;j<c0;j++)
			{
				ca0[i]=arr[i];
			}
		}
	}
	cout<<endl;
	for(i=0;i<c0;i++)
	{
		cout<<"\t"<<ca0[i];
	}
	for(i=0;i<c1;i++)
	{
		cout<<"\t"<<ca1[i];
	}
}
