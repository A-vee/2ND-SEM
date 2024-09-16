//18. Program to Find Largest Number in an array
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
			if(arr[i]<arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	int lr=arr[0];
	cout<<endl<<"Largest number in array : "<<lr;
}

/*
Entre number of elements (1-20) : 5
Enter element 1 : 1
Enter element 2 : 9
Enter element 3 : 7
Enter element 4 : 3
Enter element 5 : 5

Largest number in array : 9
*/
