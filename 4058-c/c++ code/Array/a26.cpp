//26. Write a C++ program to find the index of an array element
#include<iostream>
using namespace std;

int main()
{
	int arr[20],f,n,i,x,ans;
	cout<<"Entre number of elements (1-20) : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<endl<<"Enter element to find in array : ";
	cin>>x;
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			ans=i+1;
			cout<<endl<<"Index of element "<<x<<" is : "<<ans;
			break;
		}
		else
		{
			f++;
		}
	}
	if(f==n)
	{
		cout<<endl<<"Element "<<x<<" not found";
	}
}

/*
Entre number of elements (1-20) : 5
Enter element 1 : 1
Enter element 2 : 5
Enter element 3 : 9
Enter element 4 : 7
Enter element 5 : 3

Enter element to find in array : 5

Index of element 5 is : 2
*/
