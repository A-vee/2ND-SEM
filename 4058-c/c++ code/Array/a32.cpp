//32. Write a C++ program to find the common elements between two arrays
#include<iostream>
using namespace std;

int main()
{
	int arr1[20],arr2[20],n1,n2,i;
	cout<<"Entre number of elements of first array (1-20) : ";
	cin>>n1;
	for(i=0;i<n1;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr1[i];
	}
	cout<<endl<<"Entre number of elements of second array (1-20) : ";
	cin>>n2;
	for(i=0;i<n2;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr2[i];
	}
	int c=0;
	for(i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(arr1[i]==arr2[j])
			{
				cout<<endl<<"Same element of both array : "<<arr1[i];
				c++;
			}
		}
	}
	if(c==0)
	{
		cout<<endl<<"Not an element is common";
	}
}

/*
Entre number of elements of first array (1-20) : 5
Enter element 1 : 1
Enter element 2 : 2
Enter element 3 : 3
Enter element 4 : 4
Enter element 5 : 5

Entre number of elements of second array (1-20) : 7
Enter element 1 : 6
Enter element 2 : 7
Enter element 3 : 8
Enter element 4 : 9
Enter element 5 : 0
Enter element 6 : 1
Enter element 7 : 2

Same element of both array : 1
Same element of both array : 2
*/
