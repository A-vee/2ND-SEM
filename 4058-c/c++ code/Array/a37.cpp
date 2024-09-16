//37. Write a C++ program to get the difference between the largest and smallest values in an array of integers
#include<iostream>
using namespace std;

int main()
{
	int arr[20],n,i;
	int sml,grt;
	cout<<"Entre number of elements (1-20) : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	sml=grt=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>grt)
		{
			grt=arr[i];
		}
		else if(arr[i]<sml)
		{
			sml=arr[i];
		}
	}
	int diff=grt-sml;
	cout<<endl<<"Difference between greatest element ("<<grt<<") and smallest element ("<<sml<<") : "<<diff;
}

/*
Entre number of elements (1-20) : 5
Enter element 1 : 1
Enter element 2 : 9
Enter element 3 : 7
Enter element 4 : 3
Enter element 5 : 5

Difference between greatest element (9) and smallest element (1) : 8
*/
