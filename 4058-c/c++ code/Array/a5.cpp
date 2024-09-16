//5. Program to print the elements of an array
#include<iostream>
using namespace std;

int main()
{
	int arr[5],i;
	cout<<"Enter 5 elements of array : "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<endl<<"Printing array elements : ";
	for(i=0;i<5;i++)
	{
		cout<<endl<<"Element "<<i+1<<" : "<<arr[i];
	}
}

/*
Enter 5 elements of array :
Enter element 1 : 1
Enter element 2 : 2
Enter element 3 : 5
Enter element 4 : 6
Enter element 5 : 9

Printing array elements :
Element 1 : 1
Element 2 : 2
Element 3 : 5
Element 4 : 6
Element 5 : 9
*/
