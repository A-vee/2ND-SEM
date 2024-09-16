//24. Write a C++ program to count the number of even and odd elements in a given array
#include<iostream>
using namespace std;

int main()
{
	int arr[20],n,i;
	int ce=0,co=0;
	cout<<"Entre number of elements (1-20) : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			ce++;
		}
		else
		{
			co++;
		}
	}
	cout<<endl<<"Count of even elements : "<<ce;
	cout<<endl<<"Count of odd elements : "<<co;
}

/*
Entre number of elements (1-20) : 7
Enter element 1 : 1
Enter element 2 : 5
Enter element 3 : 9
Enter element 4 : 2
Enter element 5 : 8
Enter element 6 : 6
Enter element 7 : 3

Count of even elements : 3
Count of odd elements : 4
*/
