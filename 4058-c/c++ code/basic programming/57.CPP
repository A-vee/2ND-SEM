#include<iostream>
#include<cctype>
using namespace std;
int main(){
char ch;
cout<<"Enter the character : ";
cin>>ch;
if (isalpha(ch)){
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
       cout<<"Vowel";}
    else{
        cout<<"Consonant ";
    }
}
else{
    cout<<"Not an alphabet ";
}
return 0;}