//10. Program to print the Smallest element in an array
#include<iostream>
using namespace std;

int main()
{
	int arr[5],i,sml;
	cout<<"Enter 5 elements of array : "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	sml=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]<sml)
		{
			sml=arr[i];
		}
	}
	cout<<endl<<"Largest element in array : "<<sml;
}

/*
Enter 5 elements of array :
Enter element 1 : 5
Enter element 2 : 1
Enter element 3 : 9
Enter element 4 : 7
Enter element 5 : 3

Largest element in array : 1
*/
