//30. Write a C++ program to insert an element (specific position) into an array
#include<iostream>
using namespace std;

int main()
{
	int arr[20],n,i;
	int x,xi;
	cout<<"Entre number of elements (1-20) : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<endl<<"Enter element to add in array : ";
	cin>>x;
	cout<<"Enter index of element to add in array : ";
	cin>>xi;
	int arr2[21];
	for(i=0;i<n;i++)
	{
		if(i==xi)
		{
			n++;
			i++;
			arr2[xi]=x;
		}
		else
		{
			arr2[i]=arr[i];
		}
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"\t"<<arr2[i];
	}
}
