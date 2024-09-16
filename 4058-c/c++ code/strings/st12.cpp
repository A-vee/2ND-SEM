#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
    string str;
    cout<<"Enter string: ";
    cin>>str;

    int vowel=0, consonant=0;
    for(int i=0; str[i] != '\0'; i++){
    if(str[i] =='a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u'){
        vowel+=1;
    }
    else{
        consonant+=1;
    }
    }

    cout<<"The total number of vowels in the string is: "<<vowel<<endl;
    cout<<"The total number of consonants in the string is: "<<consonant;
    return 0;
}
