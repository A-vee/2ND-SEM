//20. Program to Find Smallest Number in an array
#include<iostream>
using namespace std;

int main()
{
	int arr[20],t,n,i;
	cout<<"Entre number of elements (1-20) : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	int sm=arr[0];
	cout<<endl<<"Smallest number in array : "<<sm;
}

/*
Entre number of elements (1-20) : 5
Enter element 1 : 5
Enter element 2 : 7
Enter element 3 : 3
Enter element 4 : 9
Enter element 5 : 1

Smallest number in array : 1
*/
