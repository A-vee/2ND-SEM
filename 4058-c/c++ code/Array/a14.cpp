//14. Program to sort the elements of an array in ascending order
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
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	cout<<endl<<"Array in ascending order : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"\t"<<arr[i];
	}
}

/*
Entre number of elements (1-20) : 5
Enter element 1 : 1
Enter element 2 : 2
Enter element 3 : 5
Enter element 4 : 3
Enter element 5 : 4

Array in ascending order :
        1       2       3       4       5
*/
