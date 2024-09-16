//9. Program to print the largest element in an array
#include<iostream>
using namespace std;

int main()
{
	int arr[5],i,grt;
	cout<<"Enter 5 elements of array : "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	grt=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>grt)
		{
			grt=arr[i];
		}
	}
	cout<<endl<<"Largest element in array : "<<grt;
}

/*
Enter 5 elements of array :
Enter element 1 : 9
Enter element 2 : 5
Enter element 3 : 8
Enter element 4 : 10
Enter element 5 : 6

Largest element in array : 10
*/
