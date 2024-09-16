//27. Write a C++ program to calculate the average value of array elements
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
	float avg=(float)sum/n;
	cout<<endl<<"Average of value of array elemets : "<<avg;
}

/*
Entre number of elements (1-20) : 5
Enter element 1 : 1
Enter element 2 : 9
Enter element 3 : 2
Enter element 4 : 8
Enter element 5 : 4

Average of value of array elemets : 4.8
*/
