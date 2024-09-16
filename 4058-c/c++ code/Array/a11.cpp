//11. Program to print the number of elements present in an array
#include<iostream>
using namespace std;

int main()
{
	int arr[20],n,i,c=0;
	cout<<"Entre number of elements (1-20) : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
		c++;
	}
	cout<<endl<<"Number of elements in array : "<<c;
}

/*
Entre number of elements (1-20) : 7
Enter element 1 : 1
Enter element 2 : 5
Enter element 3 : 9
Enter element 4 : 7
Enter element 5 : 3
Enter element 6 : 0
Enter element 7 : 6

Number of elements in array : 7
*/
