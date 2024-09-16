//8. Program to print the elements of an array present on odd position
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
	cout<<endl<<"Printing elements at odd position : "<<endl;
	for(i=0;i<5;i++)
	{
		if(i%2==0)
		{
			cout<<"\t"<<arr[i];
		}
	}
}

/*
Enter 5 elements of array :
Enter element 1 : 1
Enter element 2 : 2
Enter element 3 : 5
Enter element 4 : 6
Enter element 5 : 9

Printing elements at odd position :
        1       5       9
*/
