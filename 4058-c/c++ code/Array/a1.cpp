//1. Program to copy all elements of one array into another array
#include<iostream>
using namespace std;

int main()
{
	int arr1[5],arr2[5],i;
	cout<<"Enter 5 elements of array to copy : "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr1[i];
		arr2[i]=arr1[i];
	}
	cout<<endl<<"After copying array to another array : ";
	for(i=0;i<5;i++)
	{
		cout<<endl<<"Element "<<i+1<<" : "<<arr2[i];
	}
}

/*
Enter 5 elements of array to copy :
Enter element 1 : 1
Enter element 2 : 5
Enter element 3 : 9
Enter element 4 : 7
Enter element 5 : 3

After copying array to another array :
Element 1 : 1
Element 2 : 5
Element 3 : 9
Element 4 : 7
Element 5 : 3
*/
