//12. Program to print the sum of all the items of the array
#include<iostream>
using namespace std;

int main()
{
	int arr[20],n,i,sum=0;
	cout<<"Entre number of elements (1-20) : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
		sum=sum+arr[i];
	}
	cout<<endl<<"Sum of elements in array : "<<sum;
}

/*
Entre number of elements (1-20) : 5
Enter element 1 : 1
Enter element 2 : 9
Enter element 3 : 2
Enter element 4 : 8
Enter element 5 : 5

Sum of elements in array : 25
*/
