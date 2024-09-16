//22. Program to Print Odd and Even Numbers from an array
#include<iostream>
using namespace std;

int main()
{
	int arr[20],n,i,j;
	int even[20],odd[20],e=0,o=0;
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
			e++;
			even[e-1]=arr[i];
		}
		else
		{
			o++;
			odd[o-1]=arr[i];
		}
	}
	cout<<endl<<"Even elements of array : "<<endl;
	for(i=0;i<e;i++)
	{
		cout<<"\t"<<even[i];
	}
	cout<<endl<<"Odd elements of array : "<<endl;
	for(i=0;i<o;i++)
	{
		cout<<"\t"<<odd[i];
	}
}

/*
Entre number of elements (1-20) : 9
Enter element 1 : 1
Enter element 2 : 2
Enter element 3 : 3
Enter element 4 : 7
Enter element 5 : 5
Enter element 6 : 9
Enter element 7 : 8
Enter element 8 : 4
Enter element 9 : 6

Even elements of array :
        2       8       4       6
Odd elements of array :
        1       3       7       5       9
*/
