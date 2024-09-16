//29. Write a C++ program to find the maximum and minimum value of an array
#include<iostream>
using namespace std;

int main()
{
	int arr[20],n,i;
	int max,min;
	cout<<"Entre number of elements (1-20) : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	max=min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		else if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	cout<<endl<<"Maximum value of array : "<<max;
	cout<<endl<<"Minimum value of array : "<<min;
}

/*
Entre number of elements (1-20) : 7
Enter element 1 : 1
Enter element 2 : 6
Enter element 3 : 7
Enter element 4 : 9
Enter element 5 : 4
Enter element 6 : 3
Enter element 7 : 5

Maximum value of array : 9
Minimum value of array : 1
*/
