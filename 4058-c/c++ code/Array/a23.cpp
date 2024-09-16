//23. Write a C++ program to swap the first and last elements of an array and create a new array
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
	int arr2[20];
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			arr2[n-1]=arr[0];
		}
		else if(i==(n-1))
		{
			arr2[0]=arr[n-1];
		}
		else
		{
			arr2[i]=arr[i];
		}
	}
	cout<<endl<<"New array after swaping : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"\t"<<arr2[i];
	}
}

/*
Entre number of elements (1-20) : 7
Enter element 1 : 1
Enter element 2 : 9
Enter element 3 : 7
Enter element 4 : 3
Enter element 5 : 5
Enter element 6 : 0
Enter element 7 : 8

New array after swaping :
        8       9       7       3       5       0       1
*/
