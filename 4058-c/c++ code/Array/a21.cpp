//21. Program to Remove Duplicate Element in an array
#include<iostream>
using namespace std;

int main()
{
	int arr[20],t,n,i;
	cout<<"Entre number of elements (1-20) : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<endl<<"Array before removing duplicate elements : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"\t"<<arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				for(int k=j;k<n;k++)
				{
					arr[k]=arr[k+1];
				}
				j--;
				n--;
			}
		}
	}
	cout<<endl<<"Array after removing duplicate elements : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"\t"<<arr[i];
	}
}

/*
Entre number of elements (1-20) : 7
Enter element 1 : 1
Enter element 2 : 1
Enter element 3 : 5
Enter element 4 : 3
Enter element 5 : 7
Enter element 6 : 7
Enter element 7 : 5

Array before removing duplicate elements :
        1       1       5       3       7       7       5
Array after removing duplicate elements :
        1       5       3       7
*/
