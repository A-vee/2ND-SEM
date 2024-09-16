#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
    char old[]={"This is the 4th Prorgam of strings"};
    char copy[50];

    strcpy(copy,old);
    
    cout<<"The original string is: "<<old<<endl;
    cout<<"The copied string is: "<<copy<<endl;

    return 0;
}
