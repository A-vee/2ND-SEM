//25. Write a C++ program to sum values of an array
#include<iostream>
using namespace std;

int main()
{
	int arr[20],n,i;
	int sum=0;
	cout<<"Entre number of elements (1-20) : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
		sum=sum+arr[i];
	}
	cout<<endl<<"Sum of value of array elemets : "<<sum;
}

/*
Entre number of elements (1-20) : 5
Enter element 1 : 1
Enter element 2 : 2
Enter element 3 : 3
Enter element 4 : 4
Enter element 5 : 5

Sum of value of array elemets : 15
*/
